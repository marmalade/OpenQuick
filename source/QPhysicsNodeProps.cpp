/*
 * (C) 2001-2012 Marmalade. All Rights Reserved.
 *
 * This document is protected by copyright, and contains information
 * proprietary to Marmalade.
 *
 * This file consists of source code released by Marmalade under
 * the terms of the accompanying End User License Agreement (EULA).
 * Please do not use this program/source code before you have read the
 * EULA and have agreed to be bound by its terms.
 */

#include "QPhysicsNodeProps.h"
#include "QDirector.h"
#include "QNode.h"
#include "QPhysics.h"
#include "QPhysicsJoint.h"

USING_NS_CC;
QUICK_NAMESPACE_BEGIN;
PHYSICS_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QNodeProps
//------------------------------------------------------------------------------
QNodeProps::QNodeProps(quick::QNode* pNode)
{
	m_Node = pNode;
	friction = 0.5f;
	density = 10.0f;
	restitution = 0.5f;
    radius = 0.0f;
    type = "dynamic";

    debugDraw = true;
    debugDrawColor.set(0xff, 0x00, 0x00, 0xff);

    m_Body = NULL;
    m_NumShapePoints = 0;
	m_IsSensor = false;
}
//------------------------------------------------------------------------------
QNodeProps::~QNodeProps()
{
	// Remove stuff from Box2D
    if (m_Body)
    {
        // It appears that Box2D automatically deals with deleting any joints attached to the body
        // However, we want to remove such joints from our list first
        // Iterate through Box2D's list of joints for this body
        b2JointEdge* pJE = m_Body->GetJointList();
        while(pJE)
        {
            // Check if this joint is in our list of Joints
            QJoint* listIter = g_Sim->m_JointsList; //the iterator points to the end of the list
            for (; listIter ; listIter = listIter->m_Previous)
            {
                if (listIter->m_Joint == pJE->joint)
                {
                    // Destroy the Joint object, which also removes it from the global list
                    delete listIter;
                    break;
                }
            }
            pJE = pJE->next;
        }

        // Remove body from world
        g_Sim->m_World->DestroyBody(m_Body);
    }
}
//------------------------------------------------------------------------------
void QNodeProps::_addShapePoint(float x, float y)
{
    QAssert(m_NumShapePoints < MAX_SHAPE_POINTS, "Too many points submitted to shape");

    // Shape points are always defined relative to an anchor point of (0, 0)
    // However, we permit the node to have a different anchor point, provided it remains the same throughout all point adding,
    // and thereafter.
    if ((!m_Node->w) || (!m_Node->h))
    {
        // sync() the node, to ensure fields up to date, e.g. w/h for sprites
        m_Node->sync();
    }

    float xOfs = m_Node->w * m_Node->xScale * m_Node->xAnchor;
    float yOfs = m_Node->h * m_Node->yScale * m_Node->yAnchor;
    m_ShapePoints[m_NumShapePoints].x = g_Sim->scaleD2P(x - xOfs);
    m_ShapePoints[m_NumShapePoints].y = g_Sim->scaleD2P(y - yOfs);
    m_NumShapePoints++;
}
//------------------------------------------------------------------------------
void QNodeProps::_init(bool _isSensor)
{
	// This sets up the Box2D stuff.

    // sync() the node, to ensure fields up to date, e.g. w/h for sprites
    m_Node->sync();

    // Initialise, based on description from member values
    b2BodyDef bodyDef;
    bodyDef.userData = m_Node; // bodyDef has pointer back to node

    if (!strcmp(type.c_str(), "static"))
	    bodyDef.type = b2_staticBody;
    else
    if (!strcmp(type.c_str(), "dynamic"))
	    bodyDef.type = b2_dynamicBody;
    else
    if (!strcmp(type.c_str(), "kinematic"))
	    bodyDef.type = b2_kinematicBody;

    /*
    CURRENTLY THIS ASSUMES THE NODE POSTIIONS/ROTATIONS ARE IN WORLDSPACE.
    THIS IS OK, BECAUSE NODES ADDED TO THE PHYSICS SIMULATION SHOULD NOT HAVE PARENTS.
    */
    // Create Body
    _x_backup = m_Node->x;
    _y_backup = m_Node->y;
    _rotation_backup = m_Node->rotation;

    float bx = g_Sim->scaleD2P(m_Node->x);
    float by = g_Sim->scaleD2P(m_Node->y);
    bodyDef.position.Set(bx, by);
    
    bodyDef.angle = g_Sim->angleD2P(m_Node->rotation);
	m_Body = g_Sim->m_World->CreateBody(&bodyDef);

    // Set up Fixture
	b2FixtureDef fd;
	fd.friction = friction;
	fd.density = density;
	fd.restitution = restitution;

	// Store sensor state, on the fixture and also locally
    fd.isSensor = _isSensor;
	m_IsSensor = _isSensor;

    // Set up Fixture Shape
    if (radius > 0.0f)
    {
        // Circle::sync
        float xCentre = radius - m_Node->xAnchor*radius*2; // centre of box, in Box2D object local space
        float yCentre = radius - m_Node->yAnchor*radius*2; // centre of box, in Box2D object local space
        fd.shape = new b2CircleShape;
        ((b2CircleShape*)fd.shape)->m_p.x = g_Sim->scaleD2P(xCentre);
        ((b2CircleShape*)fd.shape)->m_p.y = g_Sim->scaleD2P(yCentre);
        ((b2CircleShape*)fd.shape)->m_radius = g_Sim->scaleD2P(radius);

        debugDrawColor.set(0x40, 0x40, 0xc0); // blue
    }
    else
    if (m_NumShapePoints > 0)
    {
        // Polygon
	    fd.shape = new b2PolygonShape;
        ((b2PolygonShape*)fd.shape)->Set((b2Vec2*)m_ShapePoints, m_NumShapePoints); // assumes b2Vec2 same as our Vec2

        debugDrawColor.set(0xc0, 0xc0, 0x40); // yellow
    }
    else
    {
        // Rectangle
        // Get w,h from node w,h
        float bw = g_Sim->scaleD2P(m_Node->w * m_Node->xScale); // TODO, PROPER USE OF SCALE
        float bh = g_Sim->scaleD2P(m_Node->h * m_Node->yScale); // TODO, PROPER USE OF SCALE
        float xCentre = bw/2 - m_Node->xAnchor*bw; // centre of box, in Box2D object local space
        float yCentre = bh/2 - m_Node->yAnchor*bh; // centre of box, in Box2D object local space
	    fd.shape = new b2PolygonShape;
        ((b2PolygonShape*)fd.shape)->SetAsBox(bw/2, bh/2, b2Vec2(xCentre, yCentre), 0.0f);

        debugDrawColor.set(0xc0, 0x40, 0x40); // red
    }

    // Set Shape on Fixture, and create Fixture
//	fd.shape = m_Shape;
    m_Body->CreateFixture(&fd);
    // TODO MASS?
//    b2MassData massData;
//    massData.center = b2Vec2(bw/2, bh/2);
//    m_Body->SetMassData(&massData);
}
//------------------------------------------------------------------------------
void QNodeProps::_sync()
{
    if (!m_Body)
        return;

    // Box2D stuff
    if	(
//		(strcmp(type.c_str(), "kinematic")) && // kinematic object transforms aren't dictated by the simulation
		(m_IsSensor == false) // sensor object transforms aren't dictated by the simulation
		)
    {
        // Body dictates transform
	    const b2Transform t = m_Body->GetTransform();
        b2Vec2 nv;
        nv.x = t.p.x;
        nv.y = t.p.y;
        float rot = t.q.GetAngle();
        bool isChanged = false;
        if(m_Node->x != _x_backup)
        {
            isChanged = true;
            nv.x = g_Sim->scaleD2P(m_Node->x);
        }
        else
            m_Node->x = g_Sim->scaleP2D(nv.x);
        if(m_Node->y != _y_backup)
        {
            isChanged = true;
            nv.y = g_Sim->scaleD2P(m_Node->y);
        }
        else
            m_Node->y = g_Sim->scaleP2D(nv.y);
        if(m_Node->rotation != _rotation_backup)
        {
            isChanged = true;
            rot = g_Sim->angleP2D(m_Node->rotation);
        }
        else
            m_Node->rotation = g_Sim->angleP2D(rot);
        if(isChanged)
            m_Body->SetTransform(nv, rot);
    }
    else
    {
        // Node x/y should be copied to Box2D body
        b2Vec2 pos(g_Sim->scaleD2P(m_Node->x), g_Sim->scaleD2P(m_Node->y));
        float angle = g_Sim->angleD2P(m_Node->rotation);
        m_Body->SetTransform(pos, angle);
    }
    _x_backup = m_Node->x;
    _y_backup = m_Node->y;
    _rotation_backup = m_Node->rotation;
}
//------------------------------------------------------------------------------
void QNodeProps::applyForce(float fx, float fy, float px, float py)
{
    float ppx = g_Sim->scaleD2P(px);
    float ppy = g_Sim->scaleD2P(py);
    m_Body->ApplyForce(b2Vec2(fx, fy), b2Vec2(ppx, ppy));
}
//------------------------------------------------------------------------------
void QNodeProps::applyForceToCenter(float fx, float fy)
{
    m_Body->ApplyForceToCenter(b2Vec2(fx, fy));
}
//------------------------------------------------------------------------------
void QNodeProps::setAngularVelocity(float omega)
{
    m_Body->SetAngularVelocity(g_Sim->angleD2P(omega));
}
//------------------------------------------------------------------------------
float QNodeProps::getAngularVelocity()
{
    return g_Sim->angleP2D(m_Body->GetAngularVelocity());
}
//------------------------------------------------------------------------------
void QNodeProps::applyTorque(float torque)
{
    m_Body->ApplyTorque(torque);
}
//------------------------------------------------------------------------------
void QNodeProps::applyLinearImpulse(float ix, float iy, float px, float py)
{
    float ppx = g_Sim->scaleD2P(px);
    float ppy = g_Sim->scaleD2P(py);
    m_Body->ApplyLinearImpulse(b2Vec2(ix, iy), b2Vec2(ppx, ppy));
}
//------------------------------------------------------------------------------
void QNodeProps::applyLinearImpulseToCenter(float ix, float iy)
{
    b2Vec2 nVec = m_Body->GetWorldCenter();
    m_Body->ApplyLinearImpulse(b2Vec2(ix, iy), nVec);
}
//------------------------------------------------------------------------------
void QNodeProps::applyAngularImpulse(float impulse)
{
    m_Body->ApplyAngularImpulse(impulse);
}
//------------------------------------------------------------------------------
float QNodeProps::getMass()
{
    return m_Body->GetMass();
}
//------------------------------------------------------------------------------
float QNodeProps::getInertia()
{
    return m_Body->GetInertia();
}
//------------------------------------------------------------------------------
void QNodeProps::getWorldPoint(float lx, float ly, float* wx, float* wy)
{
    float plx = g_Sim->scaleD2P(lx);
    float ply = g_Sim->scaleD2P(ly);
    b2Vec2 w = m_Body->GetWorldPoint(b2Vec2(plx, ply));
    *wx = g_Sim->scaleP2D(w.x);
    *wy = g_Sim->scaleP2D(w.y);
}
//------------------------------------------------------------------------------
void QNodeProps::getWorldCenter(float* vx, float* vy)
{
    b2Vec2 w = m_Body->GetWorldCenter();
    *vx = g_Sim->scaleP2D(w.x);
    *vy = g_Sim->scaleP2D(w.y);
}
//------------------------------------------------------------------------------
void QNodeProps::getLocalCenter(float* vx, float* vy)
{
    b2Vec2 w = m_Body->GetLocalCenter();
    *vx = g_Sim->scaleP2D(w.x);
    *vy = g_Sim->scaleP2D(w.y);
}
//------------------------------------------------------------------------------
void QNodeProps::getWorldVector(float lx, float ly, float* wx, float* wy)
{
    float plx = g_Sim->scaleD2P(lx);
    float ply = g_Sim->scaleD2P(ly);
    b2Vec2 w = m_Body->GetWorldVector(b2Vec2(plx, ply));
    *wx = g_Sim->scaleP2D(w.x);
    *wy = g_Sim->scaleP2D(w.y);
}
//------------------------------------------------------------------------------
void QNodeProps::getLocalPoint(float wx, float wy, float* lx, float* ly)
{
    float pwx = g_Sim->scaleD2P(wx);
    float pwy = g_Sim->scaleD2P(wy);
    b2Vec2 l = m_Body->GetLocalPoint(b2Vec2(pwx, pwy));
    *lx = g_Sim->scaleP2D(l.x);
    *ly = g_Sim->scaleP2D(l.y);
}
//------------------------------------------------------------------------------
void QNodeProps::getLocalVector(float wx, float wy, float* lx, float* ly)
{
    float pwx = g_Sim->scaleD2P(wx);
    float pwy = g_Sim->scaleD2P(wy);
    b2Vec2 l = m_Body->GetLocalVector(b2Vec2(pwx, pwy));
    *lx = g_Sim->scaleP2D(l.x);
    *ly = g_Sim->scaleP2D(l.y);
}
//------------------------------------------------------------------------------
void QNodeProps::getLinearVelocityFromWorldPoint(float wx, float wy, float* vx, float* vy)
{
    float pwx = g_Sim->scaleD2P(wx);
    float pwy = g_Sim->scaleD2P(wy);
    b2Vec2 l = m_Body->GetLinearVelocityFromWorldPoint(b2Vec2(pwx, pwy));
    *vx = g_Sim->scaleP2D(l.x);
    *vy = g_Sim->scaleP2D(l.y);
}
//------------------------------------------------------------------------------
void QNodeProps::getLinearVelocityFromLocalPoint(float lx, float ly, float* vx, float* vy)
{
    float plx = g_Sim->scaleD2P(lx);
    float ply = g_Sim->scaleD2P(ly);
    b2Vec2 l = m_Body->GetLinearVelocityFromLocalPoint(b2Vec2(plx, ply));
    *vx = g_Sim->scaleP2D(l.x);
    *vy = g_Sim->scaleP2D(l.y);
}
//------------------------------------------------------------------------------
float QNodeProps::getLinearDamping()
{
    return m_Body->GetLinearDamping();
}
//------------------------------------------------------------------------------
void QNodeProps::setLinearDamping(float linearDamping)
{
    m_Body->SetLinearDamping(linearDamping);
}
//------------------------------------------------------------------------------
float QNodeProps::getAngularDamping()
{
    return m_Body->GetAngularDamping();
}
//------------------------------------------------------------------------------
void QNodeProps::setAngularDamping(float32 angularDamping)
{
    m_Body->SetAngularDamping(angularDamping);
}
//------------------------------------------------------------------------------
float QNodeProps::getGravityScale()
{
    return m_Body->GetGravityScale();
}
//------------------------------------------------------------------------------
void QNodeProps::setGravityScale(float scale)
{
    m_Body->SetGravityScale(scale);
}
//------------------------------------------------------------------------------
void QNodeProps::setLinearVelocity(float ix, float iy)
{
    float pix = g_Sim->scaleD2P(ix);
    float piy = g_Sim->scaleD2P(iy);
    m_Body->SetLinearVelocity(b2Vec2(pix, piy));
}
//------------------------------------------------------------------------------
void QNodeProps::getLinearVelocity(float* vx, float* vy)
{
   b2Vec2 tmp = m_Body->GetLinearVelocity();
   *vx = g_Sim->scaleP2D(tmp.x);
   *vy = g_Sim->scaleP2D(tmp.y);
}
//------------------------------------------------------------------------------
void QNodeProps::setTransform(float ix, float iy, float iz)
{
    b2Vec2 pos(g_Sim->scaleD2P(ix), g_Sim->scaleD2P(iy));
    float angle = g_Sim->angleD2P(iz);
    m_Body->SetTransform(pos, angle);
}  

bool QNodeProps::get_isSensor()
{
/*    bool isSensor = true;
    if(m_Body)
    {
        b2Fixture* fixturesListIter = m_Body->GetFixtureList();
        for(;fixturesListIter;fixturesListIter->GetNext())
        {
            //Note: this should be better defined in case of multiple fixtures attached to one single body
            //currently the criterion is returning false if at least one of them is not a sensor.
            isSensor = isSensor && fixturesListIter->IsSensor();
        }
    }
    return isSensor;*/
	return m_IsSensor;
}
//------------------------------------------------------------------------------
void QNodeProps::set_isSensor(bool v)
{
	QAssert(false, "Trying to set read-only property isSensor");
}
//------------------------------------------------------------------------------
void QNodeProps::draw()
{
    QVec2 points[MAX_SHAPE_POINTS + 1];
    QVec2* pVerts = points;
    int numVerts = 0;

    if (debugDraw == true)
    {
        // Assume the GL transform is correct (pos, rot, scale and anchor already accommodated)
        // Draw Box2D shape
        if (radius > 0.0f)
        {
            // Circle
            numVerts = g_QDirector->m_CircleNumVerts + 1;
            pVerts = (QVec2*)g_QDirector->m_CircleVerts;

            // Scale rotational part of transform by object scale
            // NOTE: WE ASSUME NO MORE RENDERING WITHIN THIS NODE'S SPACE AFTER THIS!
            float xCentre = radius - m_Node->xAnchor*radius*2;
            float yCentre = radius - m_Node->yAnchor*radius*2;

            // Initialise null 4x4 matrix
            kmMat4 t44;
            for (int m = 0; m < 16; m++)
                   t44.mat[m] = 0.0f;

            // Set up to scale QDirector fixed circle vertex data
            t44.mat[0] = radius / 100.0f;
            t44.mat[5] = t44.mat[0];
            t44.mat[10] = 1.0f;
            t44.mat[15] = 1.0f;

            // Offset because existing GL matrix is set up to render object from bottom-left
            t44.mat[12] = radius;
            t44.mat[13] = radius;
            kmGLMultMatrix(&t44);
        }
        else
        if (m_NumShapePoints > 0)
        {
            // Polygon
            numVerts = m_NumShapePoints + 1; // close shape

            // TODO OPTIMISE... REMOVE ARRAY COPY?
            float xOfs = m_Node->w * m_Node->xScale * m_Node->xAnchor;
            float yOfs = m_Node->h * m_Node->yScale * m_Node->yAnchor;
            int i = 0;
            for (; i < numVerts-1; i++)
                points[i].Set(  xOfs + g_Sim->scaleP2D(m_ShapePoints[i].x),
                                yOfs + g_Sim->scaleP2D(m_ShapePoints[i].y));
            points[i].Set(  xOfs + g_Sim->scaleP2D(m_ShapePoints[0].x),
                            yOfs + g_Sim->scaleP2D(m_ShapePoints[0].y));
        }
        else
        {
            // Rectangle
            points[0].Set(0.0f, 0.0f);
            points[1].Set(m_Node->w, 0.0f);
            points[2].Set(m_Node->w, m_Node->h);
            points[3].Set(0.0f, m_Node->h);
            numVerts = 4;
        }

        QDirector::DrawColor4B(debugDrawColor.r, debugDrawColor.g, debugDrawColor.b, 0xff);
        QDirector::DrawPolyVert2F((const ccVertex2F*)pVerts, numVerts, true);
    }
}

PHYSICS_NAMESPACE_END;
QUICK_NAMESPACE_END;

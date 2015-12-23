/*
 * (C) 2012-2013 Marmalade.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "QPhysicsContactListener.h"
#include "QDefines.h"
#include "QLuaHelpers.h"
#include "QNode.h"
#include "QPhysics.h"
#include "QPhysicsContact.h"

#include "Box2D/Box2D.h"

USING_NS_CC;
QUICK_NAMESPACE_BEGIN;
PHYSICS_NAMESPACE_BEGIN;

//------------------------------------------------------------------------------
// QContactListener
//------------------------------------------------------------------------------
void QContactListener::BeginContact(b2Contact* pContact)
{
    QNode* pNodeA = (QNode*)pContact->GetFixtureA()->GetBody()->GetUserData();
    QNode* pNodeB = (QNode*)pContact->GetFixtureB()->GetBody()->GetUserData();

    LUA_EVENT_PREPARE("collision"); // On stack: event
    LUA_EVENT_SET_STRING("phase", "began");
    LUA_EVENT_SET_TOLUA_PTR("nodeA", (void*)pNodeA, pNodeA->_getToLuaClassName());
    LUA_EVENT_SET_TOLUA_PTR("nodeB", (void*)pNodeB, pNodeB->_getToLuaClassName());
    LUA_EVENT_SET_TOLUA_PTR("target", (void*)pNodeA, pNodeA->_getToLuaClassName());

    if  (
        (pNodeA->physics->m_IsSensor == false) &&
        (pNodeB->physics->m_IsSensor == false)
        )
    {
        // World point of collision... is this correct?
        b2WorldManifold wm;
        pContact->GetWorldManifold(&wm);
        float dx = g_Sim->scaleP2D(wm.points[0].x);
        float dy = g_Sim->scaleP2D(wm.points[0].y);
        LUA_EVENT_SET_NUMBER("x", dx);
        LUA_EVENT_SET_NUMBER("y", dy);
    }

    lua_getfield(g_L, LUA_GLOBALSINDEX, "handleNodeEvent");
	lua_pushvalue(g_L, -2); // On stack: handleNodeEvent(event)
    tolua_pushusertype(g_L, (void*)pNodeA, pNodeA->_getToLuaClassName()); // On stack: handleNodeEvent(event, node)

    int s = lua_pcall(g_L, 2, 1, 0);
    LUA_REPORT_ERRORS(g_L, s);
    lua_pop(g_L, 3);
}
//------------------------------------------------------------------------------
void QContactListener::EndContact(b2Contact* pContact)
{
    QNode* pNodeA = (QNode*)pContact->GetFixtureA()->GetBody()->GetUserData();
    QNode* pNodeB = (QNode*)pContact->GetFixtureB()->GetBody()->GetUserData();

    LUA_EVENT_PREPARE("collision"); // On stack: event
    LUA_EVENT_SET_STRING("phase", "ended");
    LUA_EVENT_SET_TOLUA_PTR("nodeA", (void*)pNodeA, pNodeA->_getToLuaClassName());
    LUA_EVENT_SET_TOLUA_PTR("nodeB", (void*)pNodeB, pNodeB->_getToLuaClassName());
    LUA_EVENT_SET_TOLUA_PTR("target", (void*)pNodeA, pNodeA->_getToLuaClassName());

    lua_getfield(g_L, LUA_GLOBALSINDEX, "handleNodeEvent");
	lua_pushvalue(g_L, -2); // On stack: handleNodeEvent(event)
    tolua_pushusertype(g_L, (void*)pNodeA, pNodeA->_getToLuaClassName()); // On stack: handleNodeEvent(event, node)

    int s = lua_pcall(g_L, 2, 1, 0);
    LUA_REPORT_ERRORS(g_L, s);
    lua_pop(g_L, 3);
}
//------------------------------------------------------------------------------
void QContactListener::PreSolve(b2Contact* pContact, const b2Manifold* oldManifold)
{
    QNode* pNodeA = (QNode*)pContact->GetFixtureA()->GetBody()->GetUserData();
    QNode* pNodeB = (QNode*)pContact->GetFixtureB()->GetBody()->GetUserData();

    LUA_EVENT_PREPARE("collisionPreSolve"); // On stack: event
    LUA_EVENT_SET_STRING("phase", "began");
    LUA_EVENT_SET_TOLUA_PTR("nodeA", (void*)pNodeA, pNodeA->_getToLuaClassName());
    LUA_EVENT_SET_TOLUA_PTR("nodeB", (void*)pNodeB, pNodeB->_getToLuaClassName());
    LUA_EVENT_SET_TOLUA_PTR("target", (void*)pNodeA, pNodeA->_getToLuaClassName());
    QContact con(pContact);
    LUA_EVENT_SET_TOLUA_PTR("contact", (void*)&con, "quick::physics::QContact");

    // World point of collision... is this correct?
    b2WorldManifold wm;
    pContact->GetWorldManifold(&wm);
    float dx = g_Sim->scaleP2D(wm.points[0].x);
    float dy = g_Sim->scaleP2D(wm.points[0].y);
    LUA_EVENT_SET_NUMBER("x", dx);
    LUA_EVENT_SET_NUMBER("y", dy);

    lua_getfield(g_L, LUA_GLOBALSINDEX, "handleNodeEvent");
	lua_pushvalue(g_L, -2); // On stack: handleNodeEvent(event)
    tolua_pushusertype(g_L, (void*)pNodeA, pNodeA->_getToLuaClassName()); // On stack: handleNodeEvent(event, node)

    int s = lua_pcall(g_L, 2, 1, 0);
    LUA_REPORT_ERRORS(g_L, s);
    
    lua_pop(g_L, 3);
}
//------------------------------------------------------------------------------
void QContactListener::PostSolve(b2Contact* pContact, const b2ContactImpulse* pImpulse)
{
    QNode* pNodeA = (QNode*)pContact->GetFixtureA()->GetBody()->GetUserData();
    QNode* pNodeB = (QNode*)pContact->GetFixtureB()->GetBody()->GetUserData();

    LUA_EVENT_PREPARE("collisionPostSolve"); // On stack: event
    LUA_EVENT_SET_STRING("phase", "ended");
    LUA_EVENT_SET_TOLUA_PTR("nodeA", (void*)pNodeA, pNodeA->_getToLuaClassName());
    LUA_EVENT_SET_TOLUA_PTR("nodeB", (void*)pNodeB, pNodeB->_getToLuaClassName());
    LUA_EVENT_SET_TOLUA_PTR("target", (void*)pNodeA, pNodeA->_getToLuaClassName());
    QContact con(pContact);
    LUA_EVENT_SET_TOLUA_PTR("contact", (void*)&con, "quick::physics::QContact");

    // Force (impulse)
    float f = g_Sim->scaleP2D(pImpulse->normalImpulses[0]);
    LUA_EVENT_SET_NUMBER("impulse", f);

    lua_getfield(g_L, LUA_GLOBALSINDEX, "handleNodeEvent");
	lua_pushvalue(g_L, -2); // On stack: handleNodeEvent(event)
    tolua_pushusertype(g_L, (void*)pNodeA, pNodeA->_getToLuaClassName()); // On stack: handleNodeEvent(event, node)

    int s = lua_pcall(g_L, 2, 1, 0);
    LUA_REPORT_ERRORS(g_L, s);
    lua_pop(g_L, 3);
}

PHYSICS_NAMESPACE_END;
QUICK_NAMESPACE_END;

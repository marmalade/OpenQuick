/*
** Lua binding: openquick_tolua
** Generated automatically by tolua++-1.0.92 on 12/23/15 13:14:00.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_openquick_tolua_open (lua_State* tolua_S);

#include "include/QAnimation.h"
#include "include/QAtlas.h"
#include "include/QAudio.h"
#include "include/QBase.h"
#include "include/QCircle.h"
#include "include/QColor.h"
#include "include/QDirector.h"
#include "include/QEvent.h"
#include "include/QFilter.h"
#include "include/QFont.h"
#include "include/QLabel.h"
#include "include/QLines.h"
#include "include/QNode.h"
#include "include/QNodeGLProgram.h"
#include "include/QMain.h"
#include "include/QParticles.h"
#include "include/QPhysics.h"
#include "include/QPhysicsContact.h"
#include "include/QPhysicsContactListener.h"
#include "include/QPhysicsJoint.h"
#include "include/QPhysicsJointDistance.h"
#include "include/QPhysicsJointRevolute.h"
#include "include/QPhysicsJointPrismatic.h"
#include "include/QPhysicsJointFriction.h"
#include "include/QPhysicsJointWheel.h"
#include "include/QPhysicsJointWeld.h"
#include "include/QPhysicsJointPulley.h"
#include "include/QPhysicsJointTouch.h"
#include "include/QPhysicsJointGear.h"
#include "include/QPhysicsJointRope.h"
#include "include/QPhysicsNodeProps.h"
#include "include/QRect.h"
#include "include/QRectangle.h"
#include "include/QRenderTexture.h"
#include "include/QScene.h"
#include "include/QSprite.h"
#include "include/QLsqlite3.h"
#include "include/QSystem.h"
#include "include/QTiledMap.h"
#include "include/QTimer.h"
#include "include/QTween.h"
#include "include/QVec2.h"
#include "include/QVector.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_quick__QAnimation (lua_State* tolua_S)
{
 quick::QAnimation* self = (quick::QAnimation*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QTiledMapObjectGroup (lua_State* tolua_S)
{
 quick::QTiledMapObjectGroup* self = (quick::QTiledMapObjectGroup*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__physics__QJointDistance (lua_State* tolua_S)
{
 quick::physics::QJointDistance* self = (quick::physics::QJointDistance*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QRectangle (lua_State* tolua_S)
{
 quick::QRectangle* self = (quick::QRectangle*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__physics__QJointFriction (lua_State* tolua_S)
{
 quick::physics::QJointFriction* self = (quick::physics::QJointFriction*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QScene (lua_State* tolua_S)
{
 quick::QScene* self = (quick::QScene*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__physics__QJointPrismatic (lua_State* tolua_S)
{
 quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QColor (lua_State* tolua_S)
{
 quick::QColor* self = (quick::QColor*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QCircle (lua_State* tolua_S)
{
 quick::QCircle* self = (quick::QCircle*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__physics__QJointRope (lua_State* tolua_S)
{
 quick::physics::QJointRope* self = (quick::physics::QJointRope*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QSystem (lua_State* tolua_S)
{
 quick::QSystem* self = (quick::QSystem*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QDirector (lua_State* tolua_S)
{
 quick::QDirector* self = (quick::QDirector*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QVector (lua_State* tolua_S)
{
 quick::QVector* self = (quick::QVector*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__physics__QSim (lua_State* tolua_S)
{
 quick::physics::QSim* self = (quick::physics::QSim*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__physics__QJointWheel (lua_State* tolua_S)
{
 quick::physics::QJointWheel* self = (quick::physics::QJointWheel*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__physics__QJointWeld (lua_State* tolua_S)
{
 quick::physics::QJointWeld* self = (quick::physics::QJointWeld*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QNode (lua_State* tolua_S)
{
 quick::QNode* self = (quick::QNode*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QTiledMapObject (lua_State* tolua_S)
{
 quick::QTiledMapObject* self = (quick::QTiledMapObject*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QAtlas (lua_State* tolua_S)
{
 quick::QAtlas* self = (quick::QAtlas*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QSprite (lua_State* tolua_S)
{
 quick::QSprite* self = (quick::QSprite*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QFont (lua_State* tolua_S)
{
 quick::QFont* self = (quick::QFont*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QNodeGLProgram (lua_State* tolua_S)
{
 quick::QNodeGLProgram* self = (quick::QNodeGLProgram*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QAudio (lua_State* tolua_S)
{
 quick::QAudio* self = (quick::QAudio*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__physics__QJointTouch (lua_State* tolua_S)
{
 quick::physics::QJointTouch* self = (quick::physics::QJointTouch*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__physics__QJoint (lua_State* tolua_S)
{
 quick::physics::QJoint* self = (quick::physics::QJoint*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QVec2 (lua_State* tolua_S)
{
 quick::QVec2* self = (quick::QVec2*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QTween (lua_State* tolua_S)
{
 quick::QTween* self = (quick::QTween*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__physics__QJointPulley (lua_State* tolua_S)
{
 quick::physics::QJointPulley* self = (quick::physics::QJointPulley*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QTiledMap (lua_State* tolua_S)
{
 quick::QTiledMap* self = (quick::QTiledMap*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QRect (lua_State* tolua_S)
{
 quick::QRect* self = (quick::QRect*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QLabel (lua_State* tolua_S)
{
 quick::QLabel* self = (quick::QLabel*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__physics__QJointRevolute (lua_State* tolua_S)
{
 quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QTiledMapLayer (lua_State* tolua_S)
{
 quick::QTiledMapLayer* self = (quick::QTiledMapLayer*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QTimer (lua_State* tolua_S)
{
 quick::QTimer* self = (quick::QTimer*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QBaseObject (lua_State* tolua_S)
{
 quick::QBaseObject* self = (quick::QBaseObject*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QRenderTexture (lua_State* tolua_S)
{
 quick::QRenderTexture* self = (quick::QRenderTexture*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QEventListener (lua_State* tolua_S)
{
 quick::QEventListener* self = (quick::QEventListener*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_cocos2d__ccColor4F (lua_State* tolua_S)
{
 cocos2d::ccColor4F* self = (cocos2d::ccColor4F*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QParticles (lua_State* tolua_S)
{
 quick::QParticles* self = (quick::QParticles*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__physics__QJointGear (lua_State* tolua_S)
{
 quick::physics::QJointGear* self = (quick::physics::QJointGear*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__QLines (lua_State* tolua_S)
{
 quick::QLines* self = (quick::QLines*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_quick__physics__QNodeProps (lua_State* tolua_S)
{
 quick::physics::QNodeProps* self = (quick::physics::QNodeProps*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"float32");
 tolua_usertype(tolua_S,"quick::QAnimation");
 tolua_usertype(tolua_S,"quick::QTiledMapObjectGroup");
 tolua_usertype(tolua_S,"quick::physics::QJointDistance");
 tolua_usertype(tolua_S,"quick::QRectangle");
 tolua_usertype(tolua_S,"quick::physics::QJointFriction");
 tolua_usertype(tolua_S,"quick::physics::QJointTouch");
 tolua_usertype(tolua_S,"quick::QScene");
 tolua_usertype(tolua_S,"quick::physics::QJointPrismatic");
 tolua_usertype(tolua_S,"quick::QColor");
 tolua_usertype(tolua_S,"quick::QParticles::modeGravityStruct");
 tolua_usertype(tolua_S,"quick::QVec2");
 tolua_usertype(tolua_S,"quick::QCircle");
 tolua_usertype(tolua_S,"quick::QTween");
 tolua_usertype(tolua_S,"quick::physics::QJointRope");
 tolua_usertype(tolua_S,"quick::QSystem");
 tolua_usertype(tolua_S,"quick::QDirector");
 tolua_usertype(tolua_S,"quick::QVector");
 tolua_usertype(tolua_S,"quick::QTiledMap");
 tolua_usertype(tolua_S,"cocos2d::CCGLProgram");
 tolua_usertype(tolua_S,"quick::QParticles::modeRadialStruct");
 tolua_usertype(tolua_S,"quick::physics::QJointGear");
 tolua_usertype(tolua_S,"quick::physics::QSim");
 tolua_usertype(tolua_S,"quick::QTiledMapLayer");
 tolua_usertype(tolua_S,"quick::QRenderTexture");
 tolua_usertype(tolua_S,"quick::physics::QJointWheel");
 tolua_usertype(tolua_S,"quick::physics::QJointWeld");
 tolua_usertype(tolua_S,"quick::QNode");
 tolua_usertype(tolua_S,"quick::QTiledMapObject");
 tolua_usertype(tolua_S,"quick::QAtlas");
 tolua_usertype(tolua_S,"cocos2d::CCTMXObjectGroup");
 tolua_usertype(tolua_S,"quick::QSprite");
 tolua_usertype(tolua_S,"quick::QFont");
 tolua_usertype(tolua_S,"quick::QNodeGLProgram");
 tolua_usertype(tolua_S,"quick::QAudio");
 tolua_usertype(tolua_S,"quick::QLines");
 tolua_usertype(tolua_S,"quick::physics::QJoint");
 tolua_usertype(tolua_S,"cocos2d::CCDictionary");
 tolua_usertype(tolua_S,"private cocos2d::CCSpriteFrameCache");
 tolua_usertype(tolua_S,"cocos2d::ccColor4F");
 tolua_usertype(tolua_S,"std::vector<quick::QTiledMapObject*>");
 tolua_usertype(tolua_S,"quick::physics::QNodeProps");
 tolua_usertype(tolua_S,"quick::QRect");
 tolua_usertype(tolua_S,"quick::QLabel");
 tolua_usertype(tolua_S,"quick::physics::QContact");
 tolua_usertype(tolua_S,"cocos2d::CCTMXLayer");
 tolua_usertype(tolua_S,"quick::QTimer");
 tolua_usertype(tolua_S,"quick::QBaseObject");
 tolua_usertype(tolua_S,"quick::physics::QJointPulley");
 tolua_usertype(tolua_S,"quick::QEventListener");
 tolua_usertype(tolua_S,"CCSprite");
 tolua_usertype(tolua_S,"quick::QParticles");
 tolua_usertype(tolua_S,"b2Body");
 tolua_usertype(tolua_S,"quick::physics::QJointRevolute");
 tolua_usertype(tolua_S,"quick::QFilterData");
}

/* method: __tostring of class  quick::QAnimation */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAnimation___tostring00
static int tolua_openquick_tolua_quick_QAnimation___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAnimation* self = (quick::QAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QAnimation */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAnimation___serialize00
static int tolua_openquick_tolua_quick_QAnimation___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAnimation* self = (quick::QAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QAnimation */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAnimation_new00
static int tolua_openquick_tolua_quick_QAnimation_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QAnimation* tolua_ret = (quick::QAnimation*)  Mtolua_new((quick::QAnimation)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QAnimation");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QAnimation */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAnimation_new00_local
static int tolua_openquick_tolua_quick_QAnimation_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QAnimation* tolua_ret = (quick::QAnimation*)  Mtolua_new((quick::QAnimation)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QAnimation");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QAnimation */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAnimation_delete00
static int tolua_openquick_tolua_quick_QAnimation_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAnimation* self = (quick::QAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addFrame of class  quick::QAnimation */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAnimation_addFrame00
static int tolua_openquick_tolua_quick_QAnimation_addFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const quick::QAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAnimation* self = (quick::QAnimation*)  tolua_tousertype(tolua_S,1,0);
  int frame = ((int)  tolua_tonumber(tolua_S,2,0));
  const quick::QAtlas* atlas = ((const quick::QAtlas*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addFrame'", NULL);
#endif
  {
   self->addFrame(frame,atlas);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addFrameByName of class  quick::QAnimation */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAnimation_addFrameByName00
static int tolua_openquick_tolua_quick_QAnimation_addFrameByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAnimation",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const quick::QAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAnimation* self = (quick::QAnimation*)  tolua_tousertype(tolua_S,1,0);
  std::string frame_name = ((std::string)  tolua_tocppstring(tolua_S,2,0));
  const quick::QAtlas* atlas = ((const quick::QAtlas*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addFrameByName'", NULL);
#endif
  {
   self->addFrameByName(frame_name,atlas);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addFrameByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDelay of class  quick::QAnimation */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAnimation_setDelay00
static int tolua_openquick_tolua_quick_QAnimation_setDelay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAnimation* self = (quick::QAnimation*)  tolua_tousertype(tolua_S,1,0);
  float delay = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDelay'", NULL);
#endif
  {
   self->setDelay(delay);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDelay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDuration of class  quick::QAnimation */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAnimation_getDuration00
static int tolua_openquick_tolua_quick_QAnimation_getDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const quick::QAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const quick::QAnimation* self = (const quick::QAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDuration'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getDuration();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QAtlas */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAtlas___tostring00
static int tolua_openquick_tolua_quick_QAtlas___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAtlas* self = (quick::QAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QAtlas */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAtlas___serialize00
static int tolua_openquick_tolua_quick_QAtlas___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAtlas* self = (quick::QAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QAtlas */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAtlas_new00
static int tolua_openquick_tolua_quick_QAtlas_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QAtlas* tolua_ret = (quick::QAtlas*)  Mtolua_new((quick::QAtlas)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QAtlas */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAtlas_new00_local
static int tolua_openquick_tolua_quick_QAtlas_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QAtlas* tolua_ret = (quick::QAtlas*)  Mtolua_new((quick::QAtlas)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QAtlas");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QAtlas */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAtlas_delete00
static int tolua_openquick_tolua_quick_QAtlas_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAtlas* self = (quick::QAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initFromFile of class  quick::QAtlas */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAtlas_initFromFile00
static int tolua_openquick_tolua_quick_QAtlas_initFromFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAtlas",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAtlas* self = (quick::QAtlas*)  tolua_tousertype(tolua_S,1,0);
  std::string filename = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initFromFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initFromFile(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initFromFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initTexture of class  quick::QAtlas */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAtlas_initTexture00
static int tolua_openquick_tolua_quick_QAtlas_initTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAtlas",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAtlas* self = (quick::QAtlas*)  tolua_tousertype(tolua_S,1,0);
  std::string filename = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initTexture'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initTexture(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addSpriteFrame of class  quick::QAtlas */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAtlas_addSpriteFrame00
static int tolua_openquick_tolua_quick_QAtlas_addSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAtlas",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,11,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAtlas* self = (quick::QAtlas*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float w = ((float)  tolua_tonumber(tolua_S,4,0));
  float h = ((float)  tolua_tonumber(tolua_S,5,0));
  bool rotated = ((bool)  tolua_toboolean(tolua_S,6,0));
  float ox = ((float)  tolua_tonumber(tolua_S,7,0));
  float oy = ((float)  tolua_tonumber(tolua_S,8,0));
  float sw = ((float)  tolua_tonumber(tolua_S,9,0));
  float sh = ((float)  tolua_tonumber(tolua_S,10,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addSpriteFrame'", NULL);
#endif
  {
   self->addSpriteFrame(x,y,w,h,rotated,ox,oy,sw,sh);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextureSize of class  quick::QAtlas */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAtlas_getTextureSize00
static int tolua_openquick_tolua_quick_QAtlas_getTextureSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAtlas",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAtlas* self = (quick::QAtlas*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextureSize'", NULL);
#endif
  {
   self->getTextureSize(&x,&y);
   tolua_pushnumber(tolua_S,(lua_Number)x);
   tolua_pushnumber(tolua_S,(lua_Number)y);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextureSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextureParams of class  quick::QAtlas */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAtlas_setTextureParams00
static int tolua_openquick_tolua_quick_QAtlas_setTextureParams00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAtlas",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,1,&tolua_err) ||
     !tolua_isstring(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAtlas* self = (quick::QAtlas*)  tolua_tousertype(tolua_S,1,0);
  const char* minFilter = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* magFilter = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* wrapS = ((const char*)  tolua_tostring(tolua_S,4,0));
  const char* wrapT = ((const char*)  tolua_tostring(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextureParams'", NULL);
#endif
  {
   self->setTextureParams(minFilter,magFilter,wrapS,wrapT);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextureParams'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBlendFunc of class  quick::QAtlas */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAtlas_setBlendFunc00
static int tolua_openquick_tolua_quick_QAtlas_setBlendFunc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAtlas",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAtlas* self = (quick::QAtlas*)  tolua_tousertype(tolua_S,1,0);
  const char* blendSrc = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* blendDst = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBlendFunc'", NULL);
#endif
  {
   self->setBlendFunc(blendSrc,blendDst);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBlendFunc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _blendSrc of class  quick::QAtlas */
#ifndef TOLUA_DISABLE_tolua_get_quick__QAtlas__blendSrc
static int tolua_get_quick__QAtlas__blendSrc(lua_State* tolua_S)
{
  quick::QAtlas* self = (quick::QAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_blendSrc'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->_blendSrc);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _blendSrc of class  quick::QAtlas */
#ifndef TOLUA_DISABLE_tolua_set_quick__QAtlas__blendSrc
static int tolua_set_quick__QAtlas__blendSrc(lua_State* tolua_S)
{
  quick::QAtlas* self = (quick::QAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_blendSrc'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_blendSrc = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _blendDst of class  quick::QAtlas */
#ifndef TOLUA_DISABLE_tolua_get_quick__QAtlas__blendDst
static int tolua_get_quick__QAtlas__blendDst(lua_State* tolua_S)
{
  quick::QAtlas* self = (quick::QAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_blendDst'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->_blendDst);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _blendDst of class  quick::QAtlas */
#ifndef TOLUA_DISABLE_tolua_set_quick__QAtlas__blendDst
static int tolua_set_quick__QAtlas__blendDst(lua_State* tolua_S)
{
  quick::QAtlas* self = (quick::QAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_blendDst'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_blendDst = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_new00
static int tolua_openquick_tolua_quick_QAudio_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QAudio* tolua_ret = (quick::QAudio*)  Mtolua_new((quick::QAudio)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QAudio");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_new00_local
static int tolua_openquick_tolua_quick_QAudio_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QAudio* tolua_ret = (quick::QAudio*)  Mtolua_new((quick::QAudio)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QAudio");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_delete00
static int tolua_openquick_tolua_quick_QAudio_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadStream of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_loadStream00
static int tolua_openquick_tolua_quick_QAudio_loadStream00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
  std::string fileName = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadStream'", NULL);
#endif
  {
   self->loadStream(fileName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadStream'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: playStreamWithLoop of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_playStreamWithLoop00
static int tolua_openquick_tolua_quick_QAudio_playStreamWithLoop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
  std::string fileName = ((std::string)  tolua_tocppstring(tolua_S,2,0));
  bool bLoop = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'playStreamWithLoop'", NULL);
#endif
  {
   self->playStreamWithLoop(fileName,bLoop);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'playStreamWithLoop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopStream of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_stopStream00
static int tolua_openquick_tolua_quick_QAudio_stopStream00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopStream'", NULL);
#endif
  {
   self->stopStream();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopStream'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pauseStream of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_pauseStream00
static int tolua_openquick_tolua_quick_QAudio_pauseStream00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pauseStream'", NULL);
#endif
  {
   self->pauseStream();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pauseStream'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resumeStream of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_resumeStream00
static int tolua_openquick_tolua_quick_QAudio_resumeStream00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resumeStream'", NULL);
#endif
  {
   self->resumeStream();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resumeStream'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rewindStream of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_rewindStream00
static int tolua_openquick_tolua_quick_QAudio_rewindStream00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'rewindStream'", NULL);
#endif
  {
   self->rewindStream();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rewindStream'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isStreamPlaying of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_isStreamPlaying00
static int tolua_openquick_tolua_quick_QAudio_isStreamPlaying00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isStreamPlaying'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isStreamPlaying();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isStreamPlaying'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: playSoundWithLoop of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_playSoundWithLoop00
static int tolua_openquick_tolua_quick_QAudio_playSoundWithLoop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
  std::string fileName = ((std::string)  tolua_tocppstring(tolua_S,2,0));
  bool bLoop = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'playSoundWithLoop'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->playSoundWithLoop(fileName,bLoop);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'playSoundWithLoop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopSound of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_stopSound00
static int tolua_openquick_tolua_quick_QAudio_stopSound00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
  unsigned int sampleID = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopSound'", NULL);
#endif
  {
   self->stopSound(sampleID);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopSound'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadSound of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_loadSound00
static int tolua_openquick_tolua_quick_QAudio_loadSound00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
  std::string fileName = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadSound'", NULL);
#endif
  {
   self->loadSound(fileName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadSound'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unloadSound of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_unloadSound00
static int tolua_openquick_tolua_quick_QAudio_unloadSound00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
  std::string fileName = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unloadSound'", NULL);
#endif
  {
   self->unloadSound(fileName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unloadSound'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSoundFrequency of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_setSoundFrequency00
static int tolua_openquick_tolua_quick_QAudio_setSoundFrequency00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
  int frequency = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSoundFrequency'", NULL);
#endif
  {
   self->setSoundFrequency(frequency);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSoundFrequency'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isSoundPlaying of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_isSoundPlaying00
static int tolua_openquick_tolua_quick_QAudio_isSoundPlaying00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
  int channel = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isSoundPlaying'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isSoundPlaying(channel);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSoundPlaying'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_streamVolume of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_get_streamVolume00
static int tolua_openquick_tolua_quick_QAudio_get_streamVolume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_streamVolume'", NULL);
#endif
  {
   float tolua_ret = (float)  self->get_streamVolume();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_streamVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set_streamVolume of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_set_streamVolume00
static int tolua_openquick_tolua_quick_QAudio_set_streamVolume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
  float volume = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_streamVolume'", NULL);
#endif
  {
   self->set_streamVolume(volume);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_streamVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_soundVolume of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_get_soundVolume00
static int tolua_openquick_tolua_quick_QAudio_get_soundVolume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_soundVolume'", NULL);
#endif
  {
   float tolua_ret = (float)  self->get_soundVolume();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_soundVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set_soundVolume of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QAudio_set_soundVolume00
static int tolua_openquick_tolua_quick_QAudio_set_soundVolume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QAudio",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
  float volume = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_soundVolume'", NULL);
#endif
  {
   self->set_soundVolume(volume);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_soundVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: streamVolume of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_get_quick__QAudio_streamVolume
static int tolua_get_quick__QAudio_streamVolume(lua_State* tolua_S)
{
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'streamVolume'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_streamVolume());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: streamVolume of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_set_quick__QAudio_streamVolume
static int tolua_set_quick__QAudio_streamVolume(lua_State* tolua_S)
{
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'streamVolume'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_streamVolume(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: soundVolume of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_get_quick__QAudio_soundVolume
static int tolua_get_quick__QAudio_soundVolume(lua_State* tolua_S)
{
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'soundVolume'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_soundVolume());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: soundVolume of class  quick::QAudio */
#ifndef TOLUA_DISABLE_tolua_set_quick__QAudio_soundVolume
static int tolua_set_quick__QAudio_soundVolume(lua_State* tolua_S)
{
  quick::QAudio* self = (quick::QAudio*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'soundVolume'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_soundVolume(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QBaseObject */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QBaseObject_new00
static int tolua_openquick_tolua_quick_QBaseObject_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QBaseObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QBaseObject* tolua_ret = (quick::QBaseObject*)  Mtolua_new((quick::QBaseObject)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QBaseObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QBaseObject */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QBaseObject_new00_local
static int tolua_openquick_tolua_quick_QBaseObject_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QBaseObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QBaseObject* tolua_ret = (quick::QBaseObject*)  Mtolua_new((quick::QBaseObject)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QBaseObject");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QBaseObject */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QBaseObject_delete00
static int tolua_openquick_tolua_quick_QBaseObject_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QBaseObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QBaseObject* self = (quick::QBaseObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _getToLuaClassName of class  quick::QCircle */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QCircle__getToLuaClassName00
static int tolua_openquick_tolua_quick_QCircle__getToLuaClassName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QCircle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QCircle* self = (quick::QCircle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_getToLuaClassName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->_getToLuaClassName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_getToLuaClassName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QCircle */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QCircle___tostring00
static int tolua_openquick_tolua_quick_QCircle___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QCircle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QCircle* self = (quick::QCircle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QCircle */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QCircle___serialize00
static int tolua_openquick_tolua_quick_QCircle___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QCircle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QCircle* self = (quick::QCircle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QCircle */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QCircle_new00
static int tolua_openquick_tolua_quick_QCircle_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QCircle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QCircle* tolua_ret = (quick::QCircle*)  Mtolua_new((quick::QCircle)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QCircle");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QCircle */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QCircle_new00_local
static int tolua_openquick_tolua_quick_QCircle_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QCircle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QCircle* tolua_ret = (quick::QCircle*)  Mtolua_new((quick::QCircle)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QCircle");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QCircle */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QCircle_delete00
static int tolua_openquick_tolua_quick_QCircle_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QCircle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QCircle* self = (quick::QCircle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sync of class  quick::QCircle */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QCircle_sync00
static int tolua_openquick_tolua_quick_QCircle_sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QCircle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QCircle* self = (quick::QCircle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sync'", NULL);
#endif
  {
   self->sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isPointInside of class  quick::QCircle */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QCircle_isPointInside00
static int tolua_openquick_tolua_quick_QCircle_isPointInside00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QCircle",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QCircle* self = (quick::QCircle*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPointInside'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isPointInside(x,y);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPointInside'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: radius of class  quick::QCircle */
#ifndef TOLUA_DISABLE_tolua_get_quick__QCircle_radius
static int tolua_get_quick__QCircle_radius(lua_State* tolua_S)
{
  quick::QCircle* self = (quick::QCircle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'radius'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->radius);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: radius of class  quick::QCircle */
#ifndef TOLUA_DISABLE_tolua_set_quick__QCircle_radius
static int tolua_set_quick__QCircle_radius(lua_State* tolua_S)
{
  quick::QCircle* self = (quick::QCircle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'radius'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->radius = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QColor___tostring00
static int tolua_openquick_tolua_quick_QColor___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QColor* self = (quick::QColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QColor___serialize00
static int tolua_openquick_tolua_quick_QColor___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QColor* self = (quick::QColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QColor_new00
static int tolua_openquick_tolua_quick_QColor_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QColor* tolua_ret = (quick::QColor*)  Mtolua_new((quick::QColor)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QColor");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QColor_new00_local
static int tolua_openquick_tolua_quick_QColor_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QColor* tolua_ret = (quick::QColor*)  Mtolua_new((quick::QColor)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QColor");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QColor_new01
static int tolua_openquick_tolua_quick_QColor_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QColor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int _r = ((int)  tolua_tonumber(tolua_S,2,0));
  int _g = ((int)  tolua_tonumber(tolua_S,3,0));
  int _b = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   quick::QColor* tolua_ret = (quick::QColor*)  Mtolua_new((quick::QColor)(_r,_g,_b));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QColor");
  }
 }
 return 1;
tolua_lerror:
 return tolua_openquick_tolua_quick_QColor_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QColor_new01_local
static int tolua_openquick_tolua_quick_QColor_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QColor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int _r = ((int)  tolua_tonumber(tolua_S,2,0));
  int _g = ((int)  tolua_tonumber(tolua_S,3,0));
  int _b = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   quick::QColor* tolua_ret = (quick::QColor*)  Mtolua_new((quick::QColor)(_r,_g,_b));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QColor");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_openquick_tolua_quick_QColor_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QColor_new02
static int tolua_openquick_tolua_quick_QColor_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QColor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int _r = ((int)  tolua_tonumber(tolua_S,2,0));
  int _g = ((int)  tolua_tonumber(tolua_S,3,0));
  int _b = ((int)  tolua_tonumber(tolua_S,4,0));
  int _a = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   quick::QColor* tolua_ret = (quick::QColor*)  Mtolua_new((quick::QColor)(_r,_g,_b,_a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QColor");
  }
 }
 return 1;
tolua_lerror:
 return tolua_openquick_tolua_quick_QColor_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QColor_new02_local
static int tolua_openquick_tolua_quick_QColor_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QColor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int _r = ((int)  tolua_tonumber(tolua_S,2,0));
  int _g = ((int)  tolua_tonumber(tolua_S,3,0));
  int _b = ((int)  tolua_tonumber(tolua_S,4,0));
  int _a = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   quick::QColor* tolua_ret = (quick::QColor*)  Mtolua_new((quick::QColor)(_r,_g,_b,_a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QColor");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_openquick_tolua_quick_QColor_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QColor_delete00
static int tolua_openquick_tolua_quick_QColor_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QColor* self = (quick::QColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QColor_set00
static int tolua_openquick_tolua_quick_QColor_set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QColor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QColor* self = (quick::QColor*)  tolua_tousertype(tolua_S,1,0);
  int _r = ((int)  tolua_tonumber(tolua_S,2,0));
  int _g = ((int)  tolua_tonumber(tolua_S,3,0));
  int _b = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'", NULL);
#endif
  {
   self->set(_r,_g,_b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QColor_set01
static int tolua_openquick_tolua_quick_QColor_set01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QColor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  quick::QColor* self = (quick::QColor*)  tolua_tousertype(tolua_S,1,0);
  int _r = ((int)  tolua_tonumber(tolua_S,2,0));
  int _g = ((int)  tolua_tonumber(tolua_S,3,0));
  int _b = ((int)  tolua_tonumber(tolua_S,4,0));
  int _a = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'", NULL);
#endif
  {
   self->set(_r,_g,_b,_a);
  }
 }
 return 0;
tolua_lerror:
 return tolua_openquick_tolua_quick_QColor_set00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: toCCC4F of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QColor_toCCC4F00
static int tolua_openquick_tolua_quick_QColor_toCCC4F00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QColor* self = (quick::QColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'toCCC4F'", NULL);
#endif
  {
   cocos2d::ccColor4F tolua_ret = (cocos2d::ccColor4F)  self->toCCC4F();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cocos2d::ccColor4F)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cocos2d::ccColor4F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cocos2d::ccColor4F));
     tolua_pushusertype(tolua_S,tolua_obj,"cocos2d::ccColor4F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toCCC4F'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: r of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_get_quick__QColor_unsigned_r
static int tolua_get_quick__QColor_unsigned_r(lua_State* tolua_S)
{
  quick::QColor* self = (quick::QColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->r);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: r of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_set_quick__QColor_unsigned_r
static int tolua_set_quick__QColor_unsigned_r(lua_State* tolua_S)
{
  quick::QColor* self = (quick::QColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->r = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: g of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_get_quick__QColor_unsigned_g
static int tolua_get_quick__QColor_unsigned_g(lua_State* tolua_S)
{
  quick::QColor* self = (quick::QColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->g);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: g of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_set_quick__QColor_unsigned_g
static int tolua_set_quick__QColor_unsigned_g(lua_State* tolua_S)
{
  quick::QColor* self = (quick::QColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->g = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: b of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_get_quick__QColor_unsigned_b
static int tolua_get_quick__QColor_unsigned_b(lua_State* tolua_S)
{
  quick::QColor* self = (quick::QColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->b);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: b of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_set_quick__QColor_unsigned_b
static int tolua_set_quick__QColor_unsigned_b(lua_State* tolua_S)
{
  quick::QColor* self = (quick::QColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->b = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: a of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_get_quick__QColor_unsigned_a
static int tolua_get_quick__QColor_unsigned_a(lua_State* tolua_S)
{
  quick::QColor* self = (quick::QColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->a);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: a of class  quick::QColor */
#ifndef TOLUA_DISABLE_tolua_set_quick__QColor_unsigned_a
static int tolua_set_quick__QColor_unsigned_a(lua_State* tolua_S)
{
  quick::QColor* self = (quick::QColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->a = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QDirector___tostring00
static int tolua_openquick_tolua_quick_QDirector___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QDirector___serialize00
static int tolua_openquick_tolua_quick_QDirector___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QDirector_new00
static int tolua_openquick_tolua_quick_QDirector_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QDirector* tolua_ret = (quick::QDirector*)  Mtolua_new((quick::QDirector)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QDirector");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QDirector_new00_local
static int tolua_openquick_tolua_quick_QDirector_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QDirector* tolua_ret = (quick::QDirector*)  Mtolua_new((quick::QDirector)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QDirector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QDirector_delete00
static int tolua_openquick_tolua_quick_QDirector_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _updateDisplayInfo of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QDirector__updateDisplayInfo00
static int tolua_openquick_tolua_quick_QDirector__updateDisplayInfo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QDirector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
  float dw = ((float)  tolua_tonumber(tolua_S,2,0));
  float dh = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_updateDisplayInfo'", NULL);
#endif
  {
   self->_updateDisplayInfo(dw,dh);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_updateDisplayInfo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _currentScene of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QDirector__currentScene_ptr
static int tolua_get_quick__QDirector__currentScene_ptr(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_currentScene'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->_currentScene,"quick::QScene");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _currentScene of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QDirector__currentScene_ptr
static int tolua_set_quick__QDirector__currentScene_ptr(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_currentScene'",NULL);
  if (!tolua_isusertype(tolua_S,2,"quick::QScene",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_currentScene = ((quick::QScene*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _transitionScene of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QDirector__transitionScene_ptr
static int tolua_get_quick__QDirector__transitionScene_ptr(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_transitionScene'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->_transitionScene,"quick::QScene");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _transitionScene of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QDirector__transitionScene_ptr
static int tolua_set_quick__QDirector__transitionScene_ptr(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_transitionScene'",NULL);
  if (!tolua_isusertype(tolua_S,2,"quick::QScene",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_transitionScene = ((quick::QScene*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _transitionTime of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QDirector__transitionTime
static int tolua_get_quick__QDirector__transitionTime(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_transitionTime'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->_transitionTime);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _transitionTime of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QDirector__transitionTime
static int tolua_set_quick__QDirector__transitionTime(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_transitionTime'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_transitionTime = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _transitionType of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QDirector__transitionType
static int tolua_get_quick__QDirector__transitionType(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_transitionType'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->_transitionType);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _transitionType of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QDirector__transitionType
static int tolua_set_quick__QDirector__transitionType(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_transitionType'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_transitionType = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _overlayScene of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QDirector__overlayScene_ptr
static int tolua_get_quick__QDirector__overlayScene_ptr(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_overlayScene'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->_overlayScene,"quick::QScene");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _overlayScene of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QDirector__overlayScene_ptr
static int tolua_set_quick__QDirector__overlayScene_ptr(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_overlayScene'",NULL);
  if (!tolua_isusertype(tolua_S,2,"quick::QScene",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_overlayScene = ((quick::QScene*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _overlayTransitionScene of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QDirector__overlayTransitionScene_ptr
static int tolua_get_quick__QDirector__overlayTransitionScene_ptr(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_overlayTransitionScene'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->_overlayTransitionScene,"quick::QScene");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _overlayTransitionScene of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QDirector__overlayTransitionScene_ptr
static int tolua_set_quick__QDirector__overlayTransitionScene_ptr(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_overlayTransitionScene'",NULL);
  if (!tolua_isusertype(tolua_S,2,"quick::QScene",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_overlayTransitionScene = ((quick::QScene*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _overlayTransitionTime of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QDirector__overlayTransitionTime
static int tolua_get_quick__QDirector__overlayTransitionTime(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_overlayTransitionTime'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->_overlayTransitionTime);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _overlayTransitionTime of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QDirector__overlayTransitionTime
static int tolua_set_quick__QDirector__overlayTransitionTime(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_overlayTransitionTime'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_overlayTransitionTime = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _overlayTransitionType of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QDirector__overlayTransitionType
static int tolua_get_quick__QDirector__overlayTransitionType(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_overlayTransitionType'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->_overlayTransitionType);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _overlayTransitionType of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QDirector__overlayTransitionType
static int tolua_set_quick__QDirector__overlayTransitionType(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_overlayTransitionType'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_overlayTransitionType = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _modalOverlay of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QDirector__modalOverlay
static int tolua_get_quick__QDirector__modalOverlay(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_modalOverlay'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->_modalOverlay);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _modalOverlay of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QDirector__modalOverlay
static int tolua_set_quick__QDirector__modalOverlay(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_modalOverlay'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_modalOverlay = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nodesColor of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QDirector_nodesColor
static int tolua_get_quick__QDirector_nodesColor(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nodesColor'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->nodesColor,"quick::QColor");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nodesColor of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QDirector_nodesColor
static int tolua_set_quick__QDirector_nodesColor(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nodesColor'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QColor",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nodesColor = *((quick::QColor*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: addNodesToScene of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QDirector_addNodesToScene
static int tolua_get_quick__QDirector_addNodesToScene(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'addNodesToScene'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->addNodesToScene);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: addNodesToScene of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QDirector_addNodesToScene
static int tolua_set_quick__QDirector_addNodesToScene(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'addNodesToScene'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->addNodesToScene = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: isAlphaInherited of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QDirector_isAlphaInherited
static int tolua_get_quick__QDirector_isAlphaInherited(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'isAlphaInherited'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->isAlphaInherited);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: isAlphaInherited of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QDirector_isAlphaInherited
static int tolua_set_quick__QDirector_isAlphaInherited(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'isAlphaInherited'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->isAlphaInherited = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: drawLine of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QDirector_drawLine00
static int tolua_openquick_tolua_quick_QDirector_drawLine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QDirector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
  float x0 = ((float)  tolua_tonumber(tolua_S,2,0));
  float y0 = ((float)  tolua_tonumber(tolua_S,3,0));
  float x1 = ((float)  tolua_tonumber(tolua_S,4,0));
  float y1 = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'drawLine'", NULL);
#endif
  {
   self->drawLine(x0,y0,x1,y1);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: cleanupTextures of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QDirector_cleanupTextures00
static int tolua_openquick_tolua_quick_QDirector_cleanupTextures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QDirector::cleanupTextures();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cleanupTextures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: startRendering of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QDirector_startRendering00
static int tolua_openquick_tolua_quick_QDirector_startRendering00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'startRendering'", NULL);
#endif
  {
   self->startRendering();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'startRendering'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: displayWidth of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QDirector_displayWidth
static int tolua_get_quick__QDirector_displayWidth(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'displayWidth'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_displayWidth());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: displayWidth of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QDirector_displayWidth
static int tolua_set_quick__QDirector_displayWidth(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'displayWidth'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_displayWidth(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: displayHeight of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QDirector_displayHeight
static int tolua_get_quick__QDirector_displayHeight(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'displayHeight'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_displayHeight());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: displayHeight of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QDirector_displayHeight
static int tolua_set_quick__QDirector_displayHeight(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'displayHeight'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_displayHeight(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: displayCenterX of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QDirector_displayCenterX
static int tolua_get_quick__QDirector_displayCenterX(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'displayCenterX'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_displayCenterX());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: displayCenterX of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QDirector_displayCenterX
static int tolua_set_quick__QDirector_displayCenterX(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'displayCenterX'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_displayCenterX(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: displayCenterY of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QDirector_displayCenterY
static int tolua_get_quick__QDirector_displayCenterY(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'displayCenterY'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_displayCenterY());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: displayCenterY of class  quick::QDirector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QDirector_displayCenterY
static int tolua_set_quick__QDirector_displayCenterY(lua_State* tolua_S)
{
  quick::QDirector* self = (quick::QDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'displayCenterY'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_displayCenterY(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QEventListener */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QEventListener_new00
static int tolua_openquick_tolua_quick_QEventListener_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QEventListener",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QEventListener* tolua_ret = (quick::QEventListener*)  Mtolua_new((quick::QEventListener)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QEventListener");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QEventListener */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QEventListener_new00_local
static int tolua_openquick_tolua_quick_QEventListener_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QEventListener",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QEventListener* tolua_ret = (quick::QEventListener*)  Mtolua_new((quick::QEventListener)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QEventListener");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QEventListener */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QEventListener_delete00
static int tolua_openquick_tolua_quick_QEventListener_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QEventListener",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QEventListener* self = (quick::QEventListener*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: name of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_get_quick__QFilterData_name
static int tolua_get_quick__QFilterData_name(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'name'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->name);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: name of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_set_quick__QFilterData_name
static int tolua_set_quick__QFilterData_name(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'name'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->name = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_get_quick__QFilterData_x
static int tolua_get_quick__QFilterData_x(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_set_quick__QFilterData_x
static int tolua_set_quick__QFilterData_x(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_get_quick__QFilterData_y
static int tolua_get_quick__QFilterData_y(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_set_quick__QFilterData_y
static int tolua_set_quick__QFilterData_y(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: angle of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_get_quick__QFilterData_angle
static int tolua_get_quick__QFilterData_angle(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angle'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->angle);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: angle of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_set_quick__QFilterData_angle
static int tolua_set_quick__QFilterData_angle(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angle'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->angle = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: intensity of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_get_quick__QFilterData_intensity
static int tolua_get_quick__QFilterData_intensity(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'intensity'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->intensity);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: intensity of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_set_quick__QFilterData_intensity
static int tolua_set_quick__QFilterData_intensity(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'intensity'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->intensity = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: contrast of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_get_quick__QFilterData_contrast
static int tolua_get_quick__QFilterData_contrast(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'contrast'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->contrast);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: contrast of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_set_quick__QFilterData_contrast
static int tolua_set_quick__QFilterData_contrast(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'contrast'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->contrast = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: sensitivity of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_get_quick__QFilterData_sensitivity
static int tolua_get_quick__QFilterData_sensitivity(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sensitivity'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->sensitivity);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: sensitivity of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_set_quick__QFilterData_sensitivity
static int tolua_set_quick__QFilterData_sensitivity(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sensitivity'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->sensitivity = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: smoothing of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_get_quick__QFilterData_smoothing
static int tolua_get_quick__QFilterData_smoothing(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'smoothing'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->smoothing);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: smoothing of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_set_quick__QFilterData_smoothing
static int tolua_set_quick__QFilterData_smoothing(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'smoothing'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->smoothing = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: radius of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_get_quick__QFilterData_radius
static int tolua_get_quick__QFilterData_radius(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'radius'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->radius);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: radius of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_set_quick__QFilterData_radius
static int tolua_set_quick__QFilterData_radius(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'radius'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->radius = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: scale of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_get_quick__QFilterData_scale
static int tolua_get_quick__QFilterData_scale(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->scale);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: scale of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_set_quick__QFilterData_scale
static int tolua_set_quick__QFilterData_scale(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->scale = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: spacing of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_get_quick__QFilterData_spacing
static int tolua_get_quick__QFilterData_spacing(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'spacing'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->spacing);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: spacing of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_set_quick__QFilterData_spacing
static int tolua_set_quick__QFilterData_spacing(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'spacing'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->spacing = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lineWidth of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_get_quick__QFilterData_lineWidth
static int tolua_get_quick__QFilterData_lineWidth(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lineWidth'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->lineWidth);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lineWidth of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_set_quick__QFilterData_lineWidth
static int tolua_set_quick__QFilterData_lineWidth(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lineWidth'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lineWidth = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: exposure of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_get_quick__QFilterData_exposure
static int tolua_get_quick__QFilterData_exposure(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'exposure'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->exposure);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: exposure of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_set_quick__QFilterData_exposure
static int tolua_set_quick__QFilterData_exposure(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'exposure'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->exposure = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: color of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_get_quick__QFilterData_color
static int tolua_get_quick__QFilterData_color(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'color'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->color,"quick::QColor");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: color of class  quick::QFilterData */
#ifndef TOLUA_DISABLE_tolua_set_quick__QFilterData_color
static int tolua_set_quick__QFilterData_color(lua_State* tolua_S)
{
  quick::QFilterData* self = (quick::QFilterData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'color'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QColor",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->color = *((quick::QColor*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QFont */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QFont___tostring00
static int tolua_openquick_tolua_quick_QFont___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QFont* self = (quick::QFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QFont */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QFont___serialize00
static int tolua_openquick_tolua_quick_QFont___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QFont* self = (quick::QFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QFont */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QFont_new00
static int tolua_openquick_tolua_quick_QFont_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QFont* tolua_ret = (quick::QFont*)  Mtolua_new((quick::QFont)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QFont");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QFont */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QFont_new00_local
static int tolua_openquick_tolua_quick_QFont_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QFont* tolua_ret = (quick::QFont*)  Mtolua_new((quick::QFont)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QFont");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QFont */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QFont_delete00
static int tolua_openquick_tolua_quick_QFont_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QFont* self = (quick::QFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initFromFntFile of class  quick::QFont */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QFont_initFromFntFile00
static int tolua_openquick_tolua_quick_QFont_initFromFntFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QFont",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QFont* self = (quick::QFont*)  tolua_tousertype(tolua_S,1,0);
  std::string fileName = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initFromFntFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initFromFntFile(fileName);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initFromFntFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: height of class  quick::QFont */
#ifndef TOLUA_DISABLE_tolua_get_quick__QFont_height
static int tolua_get_quick__QFont_height(lua_State* tolua_S)
{
  quick::QFont* self = (quick::QFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_height());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: height of class  quick::QFont */
#ifndef TOLUA_DISABLE_tolua_set_quick__QFont_height
static int tolua_set_quick__QFont_height(lua_State* tolua_S)
{
  quick::QFont* self = (quick::QFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_height(((int)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: fileName of class  quick::QFont */
#ifndef TOLUA_DISABLE_tolua_get_quick__QFont_fileName
static int tolua_get_quick__QFont_fileName(lua_State* tolua_S)
{
  quick::QFont* self = (quick::QFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fileName'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->get_fileName());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: fileName of class  quick::QFont */
#ifndef TOLUA_DISABLE_tolua_set_quick__QFont_fileName
static int tolua_set_quick__QFont_fileName(lua_State* tolua_S)
{
  quick::QFont* self = (quick::QFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fileName'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_fileName(((std::string)  tolua_tocppstring(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: _getToLuaClassName of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLabel__getToLuaClassName00
static int tolua_openquick_tolua_quick_QLabel__getToLuaClassName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_getToLuaClassName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->_getToLuaClassName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_getToLuaClassName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLabel___tostring00
static int tolua_openquick_tolua_quick_QLabel___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLabel___serialize00
static int tolua_openquick_tolua_quick_QLabel___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLabel_new00
static int tolua_openquick_tolua_quick_QLabel_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QLabel* tolua_ret = (quick::QLabel*)  Mtolua_new((quick::QLabel)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QLabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLabel_new00_local
static int tolua_openquick_tolua_quick_QLabel_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QLabel* tolua_ret = (quick::QLabel*)  Mtolua_new((quick::QLabel)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QLabel");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLabel_delete00
static int tolua_openquick_tolua_quick_QLabel_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLabel_init00
static int tolua_openquick_tolua_quick_QLabel_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   self->init();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sync of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLabel_sync00
static int tolua_openquick_tolua_quick_QLabel_sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sync'", NULL);
#endif
  {
   self->sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isPointInside of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLabel_isPointInside00
static int tolua_openquick_tolua_quick_QLabel_isPointInside00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QLabel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPointInside'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isPointInside(x,y);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPointInside'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: text of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_get_quick__QLabel_text
static int tolua_get_quick__QLabel_text(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'text'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->text);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: text of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_set_quick__QLabel_text
static int tolua_set_quick__QLabel_text(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'text'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->text = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: font of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_get_quick__QLabel_font_ptr
static int tolua_get_quick__QLabel_font_ptr(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'font'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->font,"quick::QFont");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: font of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_set_quick__QLabel_font_ptr
static int tolua_set_quick__QLabel_font_ptr(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'font'",NULL);
  if (!tolua_isusertype(tolua_S,2,"quick::QFont",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->font = ((quick::QFont*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: hAlignment of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_get_quick__QLabel_hAlignment
static int tolua_get_quick__QLabel_hAlignment(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'hAlignment'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->hAlignment);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: hAlignment of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_set_quick__QLabel_hAlignment
static int tolua_set_quick__QLabel_hAlignment(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'hAlignment'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->hAlignment = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: vAlignment of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_get_quick__QLabel_vAlignment
static int tolua_get_quick__QLabel_vAlignment(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'vAlignment'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->vAlignment);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: vAlignment of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_set_quick__QLabel_vAlignment
static int tolua_set_quick__QLabel_vAlignment(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'vAlignment'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->vAlignment = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: textTouchableBorder of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_get_quick__QLabel_textTouchableBorder
static int tolua_get_quick__QLabel_textTouchableBorder(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'textTouchableBorder'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->textTouchableBorder);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: textTouchableBorder of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_set_quick__QLabel_textTouchableBorder
static int tolua_set_quick__QLabel_textTouchableBorder(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'textTouchableBorder'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->textTouchableBorder = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: textBorderTop of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_get_quick__QLabel_textBorderTop
static int tolua_get_quick__QLabel_textBorderTop(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'textBorderTop'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->textBorderTop);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: textBorderTop of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_set_quick__QLabel_textBorderTop
static int tolua_set_quick__QLabel_textBorderTop(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'textBorderTop'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->textBorderTop = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: textBorderBottom of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_get_quick__QLabel_textBorderBottom
static int tolua_get_quick__QLabel_textBorderBottom(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'textBorderBottom'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->textBorderBottom);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: textBorderBottom of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_set_quick__QLabel_textBorderBottom
static int tolua_set_quick__QLabel_textBorderBottom(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'textBorderBottom'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->textBorderBottom = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: textBorderLeft of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_get_quick__QLabel_textBorderLeft
static int tolua_get_quick__QLabel_textBorderLeft(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'textBorderLeft'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->textBorderLeft);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: textBorderLeft of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_set_quick__QLabel_textBorderLeft
static int tolua_set_quick__QLabel_textBorderLeft(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'textBorderLeft'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->textBorderLeft = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: textBorderRight of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_get_quick__QLabel_textBorderRight
static int tolua_get_quick__QLabel_textBorderRight(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'textBorderRight'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->textBorderRight);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: textBorderRight of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_set_quick__QLabel_textBorderRight
static int tolua_set_quick__QLabel_textBorderRight(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'textBorderRight'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->textBorderRight = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: textXScale of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_get_quick__QLabel_textXScale
static int tolua_get_quick__QLabel_textXScale(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'textXScale'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->textXScale);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: textXScale of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_set_quick__QLabel_textXScale
static int tolua_set_quick__QLabel_textXScale(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'textXScale'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->textXScale = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: textYScale of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_get_quick__QLabel_textYScale
static int tolua_get_quick__QLabel_textYScale(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'textYScale'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->textYScale);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: textYScale of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_set_quick__QLabel_textYScale
static int tolua_set_quick__QLabel_textYScale(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'textYScale'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->textYScale = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: xText of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_get_quick__QLabel_xText
static int tolua_get_quick__QLabel_xText(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xText'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_xText());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: xText of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_set_quick__QLabel_xText
static int tolua_set_quick__QLabel_xText(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xText'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_xText(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: yText of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_get_quick__QLabel_yText
static int tolua_get_quick__QLabel_yText(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'yText'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_yText());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: yText of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_set_quick__QLabel_yText
static int tolua_set_quick__QLabel_yText(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'yText'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_yText(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wText of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_get_quick__QLabel_wText
static int tolua_get_quick__QLabel_wText(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wText'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_wText());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wText of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_set_quick__QLabel_wText
static int tolua_set_quick__QLabel_wText(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wText'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_wText(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: hText of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_get_quick__QLabel_hText
static int tolua_get_quick__QLabel_hText(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'hText'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_hText());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: hText of class  quick::QLabel */
#ifndef TOLUA_DISABLE_tolua_set_quick__QLabel_hText
static int tolua_set_quick__QLabel_hText(lua_State* tolua_S)
{
  quick::QLabel* self = (quick::QLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'hText'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_hText(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: _getToLuaClassName of class  quick::QLines */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLines__getToLuaClassName00
static int tolua_openquick_tolua_quick_QLines__getToLuaClassName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QLines",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QLines* self = (quick::QLines*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_getToLuaClassName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->_getToLuaClassName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_getToLuaClassName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QLines */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLines___tostring00
static int tolua_openquick_tolua_quick_QLines___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QLines",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QLines* self = (quick::QLines*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QLines */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLines___serialize00
static int tolua_openquick_tolua_quick_QLines___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QLines",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QLines* self = (quick::QLines*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QLines */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLines_new00
static int tolua_openquick_tolua_quick_QLines_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QLines",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QLines* tolua_ret = (quick::QLines*)  Mtolua_new((quick::QLines)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QLines");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QLines */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLines_new00_local
static int tolua_openquick_tolua_quick_QLines_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QLines",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QLines* tolua_ret = (quick::QLines*)  Mtolua_new((quick::QLines)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QLines");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QLines */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLines_delete00
static int tolua_openquick_tolua_quick_QLines_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QLines",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QLines* self = (quick::QLines*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _appendPoint of class  quick::QLines */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLines__appendPoint00
static int tolua_openquick_tolua_quick_QLines__appendPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QLines",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QLines* self = (quick::QLines*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_appendPoint'", NULL);
#endif
  {
   self->_appendPoint(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_appendPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _appendFinalise of class  quick::QLines */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLines__appendFinalise00
static int tolua_openquick_tolua_quick_QLines__appendFinalise00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QLines",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QLines* self = (quick::QLines*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_appendFinalise'", NULL);
#endif
  {
   self->_appendFinalise();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_appendFinalise'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _appendReallocBuffers of class  quick::QLines */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLines__appendReallocBuffers00
static int tolua_openquick_tolua_quick_QLines__appendReallocBuffers00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QLines",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QLines* self = (quick::QLines*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_appendReallocBuffers'", NULL);
#endif
  {
   self->_appendReallocBuffers();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_appendReallocBuffers'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sync of class  quick::QLines */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLines_sync00
static int tolua_openquick_tolua_quick_QLines_sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QLines",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QLines* self = (quick::QLines*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sync'", NULL);
#endif
  {
   self->sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isPointInside of class  quick::QLines */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLines_isPointInside00
static int tolua_openquick_tolua_quick_QLines_isPointInside00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QLines",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QLines* self = (quick::QLines*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPointInside'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isPointInside(x,y);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPointInside'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isClosed of class  quick::QLines */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QLines_isClosed00
static int tolua_openquick_tolua_quick_QLines_isClosed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QLines",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QLines* self = (quick::QLines*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isClosed'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isClosed();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isClosed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _getToLuaClassName of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode__getToLuaClassName00
static int tolua_openquick_tolua_quick_QNode__getToLuaClassName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_getToLuaClassName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->_getToLuaClassName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_getToLuaClassName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode___tostring00
static int tolua_openquick_tolua_quick_QNode___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode___serialize00
static int tolua_openquick_tolua_quick_QNode___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_new00
static int tolua_openquick_tolua_quick_QNode_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QNode* tolua_ret = (quick::QNode*)  Mtolua_new((quick::QNode)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_new00_local
static int tolua_openquick_tolua_quick_QNode_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QNode* tolua_ret = (quick::QNode*)  Mtolua_new((quick::QNode)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QNode");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_delete00
static int tolua_openquick_tolua_quick_QNode_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _createCCNode of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode__createCCNode00
static int tolua_openquick_tolua_quick_QNode__createCCNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_createCCNode'", NULL);
#endif
  {
   self->_createCCNode();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_createCCNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _isChild of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode__isChild00
static int tolua_openquick_tolua_quick_QNode__isChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
  quick::QNode* pChild = ((quick::QNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_isChild'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->_isChild(pChild);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_isChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _setParent of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode__setParent00
static int tolua_openquick_tolua_quick_QNode__setParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
  quick::QNode* pParent = ((quick::QNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_setParent'", NULL);
#endif
  {
   self->_setParent(pParent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_setParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _addChild of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode__addChild00
static int tolua_openquick_tolua_quick_QNode__addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
  quick::QNode* pChild = ((quick::QNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_addChild'", NULL);
#endif
  {
   self->_addChild(pChild);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _removeChild of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode__removeChild00
static int tolua_openquick_tolua_quick_QNode__removeChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
  quick::QNode* pChild = ((quick::QNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_removeChild'", NULL);
#endif
  {
   self->_removeChild(pChild);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_removeChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _getNumChildren of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode__getNumChildren00
static int tolua_openquick_tolua_quick_QNode__getNumChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_getNumChildren'", NULL);
#endif
  {
   int tolua_ret = (int)  self->_getNumChildren();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_getNumChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _alphaInternal of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode__alphaInternal
static int tolua_get_quick__QNode__alphaInternal(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_alphaInternal'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->_alphaInternal);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _alphaInternal of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode__alphaInternal
static int tolua_set_quick__QNode__alphaInternal(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_alphaInternal'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_alphaInternal = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _timersPaused of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode__timersPaused
static int tolua_get_quick__QNode__timersPaused(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_timersPaused'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->_timersPaused);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _timersPaused of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode__timersPaused
static int tolua_set_quick__QNode__timersPaused(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_timersPaused'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_timersPaused = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _tweensPaused of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode__tweensPaused
static int tolua_get_quick__QNode__tweensPaused(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_tweensPaused'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->_tweensPaused);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _tweensPaused of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode__tweensPaused
static int tolua_set_quick__QNode__tweensPaused(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_tweensPaused'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_tweensPaused = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _timersTimeScale of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode__timersTimeScale
static int tolua_get_quick__QNode__timersTimeScale(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_timersTimeScale'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->_timersTimeScale);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _timersTimeScale of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode__timersTimeScale
static int tolua_set_quick__QNode__timersTimeScale(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_timersTimeScale'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_timersTimeScale = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _tweensTimeScale of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode__tweensTimeScale
static int tolua_get_quick__QNode__tweensTimeScale(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_tweensTimeScale'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->_tweensTimeScale);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _tweensTimeScale of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode__tweensTimeScale
static int tolua_set_quick__QNode__tweensTimeScale(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_tweensTimeScale'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_tweensTimeScale = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: sync of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_sync00
static int tolua_openquick_tolua_quick_QNode_sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sync'", NULL);
#endif
  {
   self->sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reverseSync of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_reverseSync00
static int tolua_openquick_tolua_quick_QNode_reverseSync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reverseSync'", NULL);
#endif
  {
   self->reverseSync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reverseSync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: visit of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_visit00
static int tolua_openquick_tolua_quick_QNode_visit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'visit'", NULL);
#endif
  {
   self->visit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'visit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_setColor00
static int tolua_openquick_tolua_quick_QNode_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
  int g = ((int)  tolua_tonumber(tolua_S,3,0));
  int b = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(r,g,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_setColor01
static int tolua_openquick_tolua_quick_QNode_setColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
  int g = ((int)  tolua_tonumber(tolua_S,3,0));
  int b = ((int)  tolua_tonumber(tolua_S,4,0));
  int a = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(r,g,b,a);
  }
 }
 return 0;
tolua_lerror:
 return tolua_openquick_tolua_quick_QNode_setColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: isPointInside of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_isPointInside00
static int tolua_openquick_tolua_quick_QNode_isPointInside00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPointInside'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isPointInside(x,y);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPointInside'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPointInWorldSpace of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_getPointInWorldSpace00
static int tolua_openquick_tolua_quick_QNode_getPointInWorldSpace00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
  float lx = ((float)  tolua_tonumber(tolua_S,2,0));
  float ly = ((float)  tolua_tonumber(tolua_S,3,0));
  float wx = ((float)  tolua_tonumber(tolua_S,4,0));
  float wy = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPointInWorldSpace'", NULL);
#endif
  {
   self->getPointInWorldSpace(lx,ly,wx,wy);
   tolua_pushnumber(tolua_S,(lua_Number)wx);
   tolua_pushnumber(tolua_S,(lua_Number)wy);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPointInWorldSpace'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPointInLocalSpace of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_getPointInLocalSpace00
static int tolua_openquick_tolua_quick_QNode_getPointInLocalSpace00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
  float wx = ((float)  tolua_tonumber(tolua_S,2,0));
  float wy = ((float)  tolua_tonumber(tolua_S,3,0));
  float lx = ((float)  tolua_tonumber(tolua_S,4,0));
  float ly = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPointInLocalSpace'", NULL);
#endif
  {
   self->getPointInLocalSpace(wx,wy,lx,ly);
   tolua_pushnumber(tolua_S,(lua_Number)lx);
   tolua_pushnumber(tolua_S,(lua_Number)ly);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPointInLocalSpace'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pauseTimers of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_pauseTimers00
static int tolua_openquick_tolua_quick_QNode_pauseTimers00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pauseTimers'", NULL);
#endif
  {
   self->pauseTimers();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pauseTimers'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resumeTimers of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_resumeTimers00
static int tolua_openquick_tolua_quick_QNode_resumeTimers00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resumeTimers'", NULL);
#endif
  {
   self->resumeTimers();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resumeTimers'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTimersTimeScale of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_setTimersTimeScale00
static int tolua_openquick_tolua_quick_QNode_setTimersTimeScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
  float f = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTimersTimeScale'", NULL);
#endif
  {
   self->setTimersTimeScale(f);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTimersTimeScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTimersTimeScale of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_getTimersTimeScale00
static int tolua_openquick_tolua_quick_QNode_getTimersTimeScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTimersTimeScale'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getTimersTimeScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTimersTimeScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pauseTweens of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_pauseTweens00
static int tolua_openquick_tolua_quick_QNode_pauseTweens00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pauseTweens'", NULL);
#endif
  {
   self->pauseTweens();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pauseTweens'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resumeTweens of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_resumeTweens00
static int tolua_openquick_tolua_quick_QNode_resumeTweens00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resumeTweens'", NULL);
#endif
  {
   self->resumeTweens();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resumeTweens'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTweensTimeScale of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_setTweensTimeScale00
static int tolua_openquick_tolua_quick_QNode_setTweensTimeScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
  float f = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTweensTimeScale'", NULL);
#endif
  {
   self->setTweensTimeScale(f);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTweensTimeScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTweensTimeScale of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_getTweensTimeScale00
static int tolua_openquick_tolua_quick_QNode_getTweensTimeScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTweensTimeScale'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getTweensTimeScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTweensTimeScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGLProgram of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_setGLProgram00
static int tolua_openquick_tolua_quick_QNode_setGLProgram00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
  quick::QNodeGLProgram* pProg = ((quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGLProgram'", NULL);
#endif
  {
   self->setGLProgram(pProg);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGLProgram'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGLProgram of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNode_getGLProgram00
static int tolua_openquick_tolua_quick_QNode_getGLProgram00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGLProgram'", NULL);
#endif
  {
   quick::QNodeGLProgram* tolua_ret = (quick::QNodeGLProgram*)  self->getGLProgram();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QNodeGLProgram");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGLProgram'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: name of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_name
static int tolua_get_quick__QNode_name(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'name'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->name);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: name of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_name
static int tolua_set_quick__QNode_name(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'name'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->name = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_x
static int tolua_get_quick__QNode_x(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_x
static int tolua_set_quick__QNode_x(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_y
static int tolua_get_quick__QNode_y(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_y
static int tolua_set_quick__QNode_y(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: w of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_w
static int tolua_get_quick__QNode_w(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'w'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->w);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: w of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_w
static int tolua_set_quick__QNode_w(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'w'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->w = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: h of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_h
static int tolua_get_quick__QNode_h(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'h'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->h);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: h of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_h
static int tolua_set_quick__QNode_h(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'h'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->h = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: xScale of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_xScale
static int tolua_get_quick__QNode_xScale(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xScale'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->xScale);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: xScale of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_xScale
static int tolua_set_quick__QNode_xScale(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xScale'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->xScale = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: yScale of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_yScale
static int tolua_get_quick__QNode_yScale(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'yScale'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->yScale);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: yScale of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_yScale
static int tolua_set_quick__QNode_yScale(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'yScale'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->yScale = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: xSkew of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_xSkew
static int tolua_get_quick__QNode_xSkew(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xSkew'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->xSkew);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: xSkew of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_xSkew
static int tolua_set_quick__QNode_xSkew(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xSkew'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->xSkew = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ySkew of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_ySkew
static int tolua_get_quick__QNode_ySkew(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ySkew'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->ySkew);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: ySkew of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_ySkew
static int tolua_set_quick__QNode_ySkew(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ySkew'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->ySkew = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: rotation of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_rotation
static int tolua_get_quick__QNode_rotation(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rotation'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->rotation);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: rotation of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_rotation
static int tolua_set_quick__QNode_rotation(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rotation'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->rotation = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: xAnchor of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_xAnchor
static int tolua_get_quick__QNode_xAnchor(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xAnchor'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->xAnchor);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: xAnchor of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_xAnchor
static int tolua_set_quick__QNode_xAnchor(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xAnchor'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->xAnchor = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: yAnchor of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_yAnchor
static int tolua_get_quick__QNode_yAnchor(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'yAnchor'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->yAnchor);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: yAnchor of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_yAnchor
static int tolua_set_quick__QNode_yAnchor(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'yAnchor'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->yAnchor = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: isVisible of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_isVisible
static int tolua_get_quick__QNode_isVisible(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'isVisible'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->isVisible);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: isVisible of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_isVisible
static int tolua_set_quick__QNode_isVisible(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'isVisible'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->isVisible = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: color of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_color
static int tolua_get_quick__QNode_color(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'color'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->color,"quick::QColor");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: color of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_color
static int tolua_set_quick__QNode_color(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'color'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QColor",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->color = *((quick::QColor*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: alpha of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_alpha
static int tolua_get_quick__QNode_alpha(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'alpha'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->alpha);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: alpha of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_alpha
static int tolua_set_quick__QNode_alpha(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'alpha'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->alpha = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: zOrder of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_zOrder
static int tolua_get_quick__QNode_zOrder(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'zOrder'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->zOrder);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: zOrder of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_zOrder
static int tolua_set_quick__QNode_zOrder(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'zOrder'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->zOrder = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: physics of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_physics_ptr
static int tolua_get_quick__QNode_physics_ptr(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'physics'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->physics,"quick::physics::QNodeProps");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: physics of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_physics_ptr
static int tolua_set_quick__QNode_physics_ptr(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'physics'",NULL);
  if (!tolua_isusertype(tolua_S,2,"quick::physics::QNodeProps",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->physics = ((quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: clipX of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_clipX
static int tolua_get_quick__QNode_clipX(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'clipX'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->clipX);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: clipX of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_clipX
static int tolua_set_quick__QNode_clipX(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'clipX'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->clipX = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: clipY of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_clipY
static int tolua_get_quick__QNode_clipY(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'clipY'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->clipY);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: clipY of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_clipY
static int tolua_set_quick__QNode_clipY(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'clipY'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->clipY = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: clipW of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_clipW
static int tolua_get_quick__QNode_clipW(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'clipW'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->clipW);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: clipW of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_clipW
static int tolua_set_quick__QNode_clipW(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'clipW'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->clipW = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: clipH of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_clipH
static int tolua_get_quick__QNode_clipH(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'clipH'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->clipH);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: clipH of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_clipH
static int tolua_set_quick__QNode_clipH(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'clipH'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->clipH = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: debugDraw of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_debugDraw
static int tolua_get_quick__QNode_debugDraw(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'debugDraw'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->debugDraw);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: debugDraw of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_debugDraw
static int tolua_set_quick__QNode_debugDraw(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'debugDraw'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->debugDraw = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: debugDrawColor of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_debugDrawColor
static int tolua_get_quick__QNode_debugDrawColor(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'debugDrawColor'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->debugDrawColor,"quick::QColor");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: debugDrawColor of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_debugDrawColor
static int tolua_set_quick__QNode_debugDrawColor(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'debugDrawColor'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QColor",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->debugDrawColor = *((quick::QColor*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: isTouchable of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNode_isTouchable
static int tolua_get_quick__QNode_isTouchable(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'isTouchable'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->isTouchable);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: isTouchable of class  quick::QNode */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNode_isTouchable
static int tolua_set_quick__QNode_isTouchable(lua_State* tolua_S)
{
  quick::QNode* self = (quick::QNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'isTouchable'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->isTouchable = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: _getToLuaClassName of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram__getToLuaClassName00
static int tolua_openquick_tolua_quick_QNodeGLProgram__getToLuaClassName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_getToLuaClassName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->_getToLuaClassName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_getToLuaClassName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram___tostring00
static int tolua_openquick_tolua_quick_QNodeGLProgram___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram___serialize00
static int tolua_openquick_tolua_quick_QNodeGLProgram___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_new00
static int tolua_openquick_tolua_quick_QNodeGLProgram_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QNodeGLProgram* tolua_ret = (quick::QNodeGLProgram*)  Mtolua_new((quick::QNodeGLProgram)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QNodeGLProgram");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_new00_local
static int tolua_openquick_tolua_quick_QNodeGLProgram_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QNodeGLProgram* tolua_ret = (quick::QNodeGLProgram*)  Mtolua_new((quick::QNodeGLProgram)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QNodeGLProgram");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_delete00
static int tolua_openquick_tolua_quick_QNodeGLProgram_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithVertexShaderByteArray of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_initWithVertexShaderByteArray00
static int tolua_openquick_tolua_quick_QNodeGLProgram_initWithVertexShaderByteArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
  const char* vShaderByteArray = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* fShaderByteArray = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithVertexShaderByteArray'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithVertexShaderByteArray(vShaderByteArray,fShaderByteArray);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithVertexShaderByteArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithVertexShaderFilename of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_initWithVertexShaderFilename00
static int tolua_openquick_tolua_quick_QNodeGLProgram_initWithVertexShaderFilename00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
  const char* vShaderFilename = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* fShaderFilename = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithVertexShaderFilename'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithVertexShaderFilename(vShaderFilename,fShaderFilename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithVertexShaderFilename'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addAttribute of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_addAttribute00
static int tolua_openquick_tolua_quick_QNodeGLProgram_addAttribute00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
  const char* attributeName = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addAttribute'", NULL);
#endif
  {
   self->addAttribute(attributeName,index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addAttribute'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: link of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_link00
static int tolua_openquick_tolua_quick_QNodeGLProgram_link00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'link'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->link();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'link'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: use of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_use00
static int tolua_openquick_tolua_quick_QNodeGLProgram_use00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'use'", NULL);
#endif
  {
   self->use();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'use'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateUniforms of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_updateUniforms00
static int tolua_openquick_tolua_quick_QNodeGLProgram_updateUniforms00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateUniforms'", NULL);
#endif
  {
   self->updateUniforms();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateUniforms'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUniformLocationWith1i of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith1i00
static int tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith1i00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
  int location = ((int)  tolua_tonumber(tolua_S,2,0));
  int i1 = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUniformLocationWith1i'", NULL);
#endif
  {
   self->setUniformLocationWith1i(location,i1);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUniformLocationWith1i'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUniformLocationWith1f of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith1f00
static int tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith1f00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
  int location = ((int)  tolua_tonumber(tolua_S,2,0));
  float f1 = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUniformLocationWith1f'", NULL);
#endif
  {
   self->setUniformLocationWith1f(location,f1);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUniformLocationWith1f'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUniformLocationWith2f of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith2f00
static int tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith2f00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
  int location = ((int)  tolua_tonumber(tolua_S,2,0));
  float f1 = ((float)  tolua_tonumber(tolua_S,3,0));
  float f2 = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUniformLocationWith2f'", NULL);
#endif
  {
   self->setUniformLocationWith2f(location,f1,f2);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUniformLocationWith2f'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUniformLocationWith3f of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith3f00
static int tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith3f00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
  int location = ((int)  tolua_tonumber(tolua_S,2,0));
  float f1 = ((float)  tolua_tonumber(tolua_S,3,0));
  float f2 = ((float)  tolua_tonumber(tolua_S,4,0));
  float f3 = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUniformLocationWith3f'", NULL);
#endif
  {
   self->setUniformLocationWith3f(location,f1,f2,f3);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUniformLocationWith3f'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUniformLocationWith4f of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith4f00
static int tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith4f00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
  int location = ((int)  tolua_tonumber(tolua_S,2,0));
  float f1 = ((float)  tolua_tonumber(tolua_S,3,0));
  float f2 = ((float)  tolua_tonumber(tolua_S,4,0));
  float f3 = ((float)  tolua_tonumber(tolua_S,5,0));
  float f4 = ((float)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUniformLocationWith4f'", NULL);
#endif
  {
   self->setUniformLocationWith4f(location,f1,f2,f3,f4);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUniformLocationWith4f'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUniformLocationWith2fv of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith2fv00
static int tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith2fv00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
  int location = ((int)  tolua_tonumber(tolua_S,2,0));
  float floats = ((float)  tolua_tonumber(tolua_S,3,0));
  unsigned int numberOfArrays = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUniformLocationWith2fv'", NULL);
#endif
  {
   self->setUniformLocationWith2fv(location,&floats,numberOfArrays);
   tolua_pushnumber(tolua_S,(lua_Number)floats);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUniformLocationWith2fv'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUniformLocationWith3fv of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith3fv00
static int tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith3fv00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
  int location = ((int)  tolua_tonumber(tolua_S,2,0));
  float floats = ((float)  tolua_tonumber(tolua_S,3,0));
  unsigned int numberOfArrays = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUniformLocationWith3fv'", NULL);
#endif
  {
   self->setUniformLocationWith3fv(location,&floats,numberOfArrays);
   tolua_pushnumber(tolua_S,(lua_Number)floats);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUniformLocationWith3fv'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUniformLocationWith4fv of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith4fv00
static int tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith4fv00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
  int location = ((int)  tolua_tonumber(tolua_S,2,0));
  float floats = ((float)  tolua_tonumber(tolua_S,3,0));
  unsigned int numberOfArrays = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUniformLocationWith4fv'", NULL);
#endif
  {
   self->setUniformLocationWith4fv(location,&floats,numberOfArrays);
   tolua_pushnumber(tolua_S,(lua_Number)floats);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUniformLocationWith4fv'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUniformLocationWithMatrix4fv of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWithMatrix4fv00
static int tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWithMatrix4fv00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
  int location = ((int)  tolua_tonumber(tolua_S,2,0));
  float matrixArray = ((float)  tolua_tonumber(tolua_S,3,0));
  unsigned int numberOfMatrices = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUniformLocationWithMatrix4fv'", NULL);
#endif
  {
   self->setUniformLocationWithMatrix4fv(location,&matrixArray,numberOfMatrices);
   tolua_pushnumber(tolua_S,(lua_Number)matrixArray);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUniformLocationWithMatrix4fv'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUniformsForBuiltins of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_setUniformsForBuiltins00
static int tolua_openquick_tolua_quick_QNodeGLProgram_setUniformsForBuiltins00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUniformsForBuiltins'", NULL);
#endif
  {
   self->setUniformsForBuiltins();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUniformsForBuiltins'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUniformForModelViewProjectionMatrix of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_setUniformForModelViewProjectionMatrix00
static int tolua_openquick_tolua_quick_QNodeGLProgram_setUniformForModelViewProjectionMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUniformForModelViewProjectionMatrix'", NULL);
#endif
  {
   self->setUniformForModelViewProjectionMatrix();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUniformForModelViewProjectionMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUniformLocation of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_getUniformLocation00
static int tolua_openquick_tolua_quick_QNodeGLProgram_getUniformLocation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
  const char* szUniformName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUniformLocation'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getUniformLocation(szUniformName);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUniformLocation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: mapTextureToUniform of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_mapTextureToUniform00
static int tolua_openquick_tolua_quick_QNodeGLProgram_mapTextureToUniform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
  const char* szUniformName = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* szTextureFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  int nTextureInd = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'mapTextureToUniform'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->mapTextureToUniform(szUniformName,szTextureFile,nTextureInd);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'mapTextureToUniform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: vertexShaderLog of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_vertexShaderLog00
static int tolua_openquick_tolua_quick_QNodeGLProgram_vertexShaderLog00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'vertexShaderLog'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->vertexShaderLog();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'vertexShaderLog'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: fragmentShaderLog of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_fragmentShaderLog00
static int tolua_openquick_tolua_quick_QNodeGLProgram_fragmentShaderLog00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'fragmentShaderLog'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->fragmentShaderLog();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fragmentShaderLog'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: programLog of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_programLog00
static int tolua_openquick_tolua_quick_QNodeGLProgram_programLog00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'programLog'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->programLog();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'programLog'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_reset00
static int tolua_openquick_tolua_quick_QNodeGLProgram_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'", NULL);
#endif
  {
   self->reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getProgram of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram_getProgram00
static int tolua_openquick_tolua_quick_QNodeGLProgram_getProgram00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getProgram'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getProgram();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getProgram'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _createCCGLProgram of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QNodeGLProgram__createCCGLProgram00
static int tolua_openquick_tolua_quick_QNodeGLProgram__createCCGLProgram00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QNodeGLProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_createCCGLProgram'", NULL);
#endif
  {
   self->_createCCGLProgram();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_createCCGLProgram'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_CCProgram of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_get_quick__QNodeGLProgram_m_CCProgram_ptr
static int tolua_get_quick__QNodeGLProgram_m_CCProgram_ptr(lua_State* tolua_S)
{
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_CCProgram'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->m_CCProgram,"cocos2d::CCGLProgram");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_CCProgram of class  quick::QNodeGLProgram */
#ifndef TOLUA_DISABLE_tolua_set_quick__QNodeGLProgram_m_CCProgram_ptr
static int tolua_set_quick__QNodeGLProgram_m_CCProgram_ptr(lua_State* tolua_S)
{
  quick::QNodeGLProgram* self = (quick::QNodeGLProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_CCProgram'",NULL);
  if (!tolua_isusertype(tolua_S,2,"cocos2d::CCGLProgram",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_CCProgram = ((cocos2d::CCGLProgram*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: quick::MainLuaPrecompileFile */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_MainLuaPrecompileFile00
static int tolua_openquick_tolua_quick_MainLuaPrecompileFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* filename = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  quick::MainLuaPrecompileFile(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MainLuaPrecompileFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: quick::MainLuaLoadFile */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_MainLuaLoadFile00
static int tolua_openquick_tolua_quick_MainLuaLoadFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* filename = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   quick::MainLuaLoadFile(filename);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MainLuaLoadFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: quick::MainLuaDoFile */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_MainLuaDoFile00
static int tolua_openquick_tolua_quick_MainLuaDoFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* filename = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   quick::MainLuaDoFile(filename);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MainLuaDoFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: quick::MainGetVersionString */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_MainGetVersionString00
static int tolua_openquick_tolua_quick_MainGetVersionString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   const char* tolua_ret = (const char*)  quick::MainGetVersionString();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MainGetVersionString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: quick::startFileConcat */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_startFileConcat00
static int tolua_openquick_tolua_quick_startFileConcat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* filename = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   quick::startFileConcat(filename);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'startFileConcat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: quick::endFileConcat */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_endFileConcat00
static int tolua_openquick_tolua_quick_endFileConcat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   bool tolua_ret = (bool)  quick::endFileConcat();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'endFileConcat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: quick::isFileConcatInProgress */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_isFileConcatInProgress00
static int tolua_openquick_tolua_quick_isFileConcatInProgress00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   bool tolua_ret = (bool)  quick::isFileConcatInProgress();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFileConcatInProgress'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: quick::MainOutputFlush */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_MainOutputFlush00
static int tolua_openquick_tolua_quick_MainOutputFlush00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::MainOutputFlush();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MainOutputFlush'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: quick::MainPrint */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_MainPrint00
static int tolua_openquick_tolua_quick_MainPrint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* pBuffer = ((char*)  tolua_tostring(tolua_S,1,0));
  {
   quick::MainPrint(pBuffer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MainPrint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _getToLuaClassName of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QParticles__getToLuaClassName00
static int tolua_openquick_tolua_quick_QParticles__getToLuaClassName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QParticles",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_getToLuaClassName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->_getToLuaClassName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_getToLuaClassName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QParticles___tostring00
static int tolua_openquick_tolua_quick_QParticles___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QParticles",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QParticles___serialize00
static int tolua_openquick_tolua_quick_QParticles___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QParticles",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QParticles_new00
static int tolua_openquick_tolua_quick_QParticles_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QParticles",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QParticles* tolua_ret = (quick::QParticles*)  Mtolua_new((quick::QParticles)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QParticles");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QParticles_new00_local
static int tolua_openquick_tolua_quick_QParticles_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QParticles",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QParticles* tolua_ret = (quick::QParticles*)  Mtolua_new((quick::QParticles)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QParticles");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QParticles_delete00
static int tolua_openquick_tolua_quick_QParticles_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QParticles",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: gravity of class  modeGravityStruct */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles__modeGravityStruct_gravity
static int tolua_get_quick__QParticles__modeGravityStruct_gravity(lua_State* tolua_S)
{
  quick::QParticles::modeGravityStruct* self = (quick::QParticles::modeGravityStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'gravity'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->gravity,"quick::QVec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: gravity of class  modeGravityStruct */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles__modeGravityStruct_gravity
static int tolua_set_quick__QParticles__modeGravityStruct_gravity(lua_State* tolua_S)
{
  quick::QParticles::modeGravityStruct* self = (quick::QParticles::modeGravityStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'gravity'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QVec2",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->gravity = *((quick::QVec2*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: speed of class  modeGravityStruct */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles__modeGravityStruct_speed
static int tolua_get_quick__QParticles__modeGravityStruct_speed(lua_State* tolua_S)
{
  quick::QParticles::modeGravityStruct* self = (quick::QParticles::modeGravityStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'speed'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->speed);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: speed of class  modeGravityStruct */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles__modeGravityStruct_speed
static int tolua_set_quick__QParticles__modeGravityStruct_speed(lua_State* tolua_S)
{
  quick::QParticles::modeGravityStruct* self = (quick::QParticles::modeGravityStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'speed'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->speed = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: speedVar of class  modeGravityStruct */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles__modeGravityStruct_speedVar
static int tolua_get_quick__QParticles__modeGravityStruct_speedVar(lua_State* tolua_S)
{
  quick::QParticles::modeGravityStruct* self = (quick::QParticles::modeGravityStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'speedVar'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->speedVar);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: speedVar of class  modeGravityStruct */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles__modeGravityStruct_speedVar
static int tolua_set_quick__QParticles__modeGravityStruct_speedVar(lua_State* tolua_S)
{
  quick::QParticles::modeGravityStruct* self = (quick::QParticles::modeGravityStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'speedVar'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->speedVar = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tangentialAccel of class  modeGravityStruct */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles__modeGravityStruct_tangentialAccel
static int tolua_get_quick__QParticles__modeGravityStruct_tangentialAccel(lua_State* tolua_S)
{
  quick::QParticles::modeGravityStruct* self = (quick::QParticles::modeGravityStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tangentialAccel'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->tangentialAccel);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tangentialAccel of class  modeGravityStruct */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles__modeGravityStruct_tangentialAccel
static int tolua_set_quick__QParticles__modeGravityStruct_tangentialAccel(lua_State* tolua_S)
{
  quick::QParticles::modeGravityStruct* self = (quick::QParticles::modeGravityStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tangentialAccel'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tangentialAccel = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tangentialAccelVar of class  modeGravityStruct */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles__modeGravityStruct_tangentialAccelVar
static int tolua_get_quick__QParticles__modeGravityStruct_tangentialAccelVar(lua_State* tolua_S)
{
  quick::QParticles::modeGravityStruct* self = (quick::QParticles::modeGravityStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tangentialAccelVar'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->tangentialAccelVar);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tangentialAccelVar of class  modeGravityStruct */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles__modeGravityStruct_tangentialAccelVar
static int tolua_set_quick__QParticles__modeGravityStruct_tangentialAccelVar(lua_State* tolua_S)
{
  quick::QParticles::modeGravityStruct* self = (quick::QParticles::modeGravityStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tangentialAccelVar'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tangentialAccelVar = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: radialAccel of class  modeGravityStruct */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles__modeGravityStruct_radialAccel
static int tolua_get_quick__QParticles__modeGravityStruct_radialAccel(lua_State* tolua_S)
{
  quick::QParticles::modeGravityStruct* self = (quick::QParticles::modeGravityStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'radialAccel'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->radialAccel);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: radialAccel of class  modeGravityStruct */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles__modeGravityStruct_radialAccel
static int tolua_set_quick__QParticles__modeGravityStruct_radialAccel(lua_State* tolua_S)
{
  quick::QParticles::modeGravityStruct* self = (quick::QParticles::modeGravityStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'radialAccel'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->radialAccel = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: radialAccelVar of class  modeGravityStruct */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles__modeGravityStruct_radialAccelVar
static int tolua_get_quick__QParticles__modeGravityStruct_radialAccelVar(lua_State* tolua_S)
{
  quick::QParticles::modeGravityStruct* self = (quick::QParticles::modeGravityStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'radialAccelVar'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->radialAccelVar);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: radialAccelVar of class  modeGravityStruct */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles__modeGravityStruct_radialAccelVar
static int tolua_set_quick__QParticles__modeGravityStruct_radialAccelVar(lua_State* tolua_S)
{
  quick::QParticles::modeGravityStruct* self = (quick::QParticles::modeGravityStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'radialAccelVar'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->radialAccelVar = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: startRadius of class  modeRadialStruct */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles__modeRadialStruct_startRadius
static int tolua_get_quick__QParticles__modeRadialStruct_startRadius(lua_State* tolua_S)
{
  quick::QParticles::modeRadialStruct* self = (quick::QParticles::modeRadialStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'startRadius'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->startRadius);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: startRadius of class  modeRadialStruct */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles__modeRadialStruct_startRadius
static int tolua_set_quick__QParticles__modeRadialStruct_startRadius(lua_State* tolua_S)
{
  quick::QParticles::modeRadialStruct* self = (quick::QParticles::modeRadialStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'startRadius'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->startRadius = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: startRadiusVar of class  modeRadialStruct */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles__modeRadialStruct_startRadiusVar
static int tolua_get_quick__QParticles__modeRadialStruct_startRadiusVar(lua_State* tolua_S)
{
  quick::QParticles::modeRadialStruct* self = (quick::QParticles::modeRadialStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'startRadiusVar'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->startRadiusVar);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: startRadiusVar of class  modeRadialStruct */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles__modeRadialStruct_startRadiusVar
static int tolua_set_quick__QParticles__modeRadialStruct_startRadiusVar(lua_State* tolua_S)
{
  quick::QParticles::modeRadialStruct* self = (quick::QParticles::modeRadialStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'startRadiusVar'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->startRadiusVar = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: endRadius of class  modeRadialStruct */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles__modeRadialStruct_endRadius
static int tolua_get_quick__QParticles__modeRadialStruct_endRadius(lua_State* tolua_S)
{
  quick::QParticles::modeRadialStruct* self = (quick::QParticles::modeRadialStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'endRadius'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->endRadius);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: endRadius of class  modeRadialStruct */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles__modeRadialStruct_endRadius
static int tolua_set_quick__QParticles__modeRadialStruct_endRadius(lua_State* tolua_S)
{
  quick::QParticles::modeRadialStruct* self = (quick::QParticles::modeRadialStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'endRadius'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->endRadius = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: endRadiusVar of class  modeRadialStruct */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles__modeRadialStruct_endRadiusVar
static int tolua_get_quick__QParticles__modeRadialStruct_endRadiusVar(lua_State* tolua_S)
{
  quick::QParticles::modeRadialStruct* self = (quick::QParticles::modeRadialStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'endRadiusVar'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->endRadiusVar);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: endRadiusVar of class  modeRadialStruct */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles__modeRadialStruct_endRadiusVar
static int tolua_set_quick__QParticles__modeRadialStruct_endRadiusVar(lua_State* tolua_S)
{
  quick::QParticles::modeRadialStruct* self = (quick::QParticles::modeRadialStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'endRadiusVar'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->endRadiusVar = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: rotatePerSecond of class  modeRadialStruct */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles__modeRadialStruct_rotatePerSecond
static int tolua_get_quick__QParticles__modeRadialStruct_rotatePerSecond(lua_State* tolua_S)
{
  quick::QParticles::modeRadialStruct* self = (quick::QParticles::modeRadialStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rotatePerSecond'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->rotatePerSecond);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: rotatePerSecond of class  modeRadialStruct */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles__modeRadialStruct_rotatePerSecond
static int tolua_set_quick__QParticles__modeRadialStruct_rotatePerSecond(lua_State* tolua_S)
{
  quick::QParticles::modeRadialStruct* self = (quick::QParticles::modeRadialStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rotatePerSecond'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->rotatePerSecond = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: rotatePerSecondVar of class  modeRadialStruct */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles__modeRadialStruct_rotatePerSecondVar
static int tolua_get_quick__QParticles__modeRadialStruct_rotatePerSecondVar(lua_State* tolua_S)
{
  quick::QParticles::modeRadialStruct* self = (quick::QParticles::modeRadialStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rotatePerSecondVar'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->rotatePerSecondVar);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: rotatePerSecondVar of class  modeRadialStruct */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles__modeRadialStruct_rotatePerSecondVar
static int tolua_set_quick__QParticles__modeRadialStruct_rotatePerSecondVar(lua_State* tolua_S)
{
  quick::QParticles::modeRadialStruct* self = (quick::QParticles::modeRadialStruct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rotatePerSecondVar'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->rotatePerSecondVar = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAtlas of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QParticles_setAtlas00
static int tolua_openquick_tolua_quick_QParticles_setAtlas00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QParticles",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
  quick::QAtlas* pAtlas = ((quick::QAtlas*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAtlas'", NULL);
#endif
  {
   self->setAtlas(pAtlas);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAtlas'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addParticle of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QParticles_addParticle00
static int tolua_openquick_tolua_quick_QParticles_addParticle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QParticles",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addParticle'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->addParticle();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addParticle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stop of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QParticles_stop00
static int tolua_openquick_tolua_quick_QParticles_stop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QParticles",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stop'", NULL);
#endif
  {
   self->stop();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QParticles_reset00
static int tolua_openquick_tolua_quick_QParticles_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QParticles",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'", NULL);
#endif
  {
   self->reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFull of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QParticles_isFull00
static int tolua_openquick_tolua_quick_QParticles_isFull00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QParticles",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFull'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFull();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFull'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isActive of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QParticles_isActive00
static int tolua_openquick_tolua_quick_QParticles_isActive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QParticles",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isActive'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isActive();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isActive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNumParticles of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QParticles_getNumParticles00
static int tolua_openquick_tolua_quick_QParticles_getNumParticles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const quick::QParticles",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const quick::QParticles* self = (const quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNumParticles'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getNumParticles();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNumParticles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QParticles_update00
static int tolua_openquick_tolua_quick_QParticles_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QParticles",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
  float dt = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'", NULL);
#endif
  {
   self->update(dt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sync of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QParticles_sync00
static int tolua_openquick_tolua_quick_QParticles_sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QParticles",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sync'", NULL);
#endif
  {
   self->sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: syncReverse of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QParticles_syncReverse00
static int tolua_openquick_tolua_quick_QParticles_syncReverse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QParticles",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'syncReverse'", NULL);
#endif
  {
   self->syncReverse();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'syncReverse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: modeGravity of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_modeGravity
static int tolua_get_quick__QParticles_modeGravity(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'modeGravity'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->modeGravity,"quick::QParticles::modeGravityStruct");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: modeGravity of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_modeGravity
static int tolua_set_quick__QParticles_modeGravity(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'modeGravity'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QParticles::modeGravityStruct",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->modeGravity = *((quick::QParticles::modeGravityStruct*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: modeRadial of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_modeRadial
static int tolua_get_quick__QParticles_modeRadial(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'modeRadial'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->modeRadial,"quick::QParticles::modeRadialStruct");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: modeRadial of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_modeRadial
static int tolua_set_quick__QParticles_modeRadial(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'modeRadial'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QParticles::modeRadialStruct",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->modeRadial = *((quick::QParticles::modeRadialStruct*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: totalParticles of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_totalParticles
static int tolua_get_quick__QParticles_totalParticles(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'totalParticles'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->totalParticles);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: totalParticles of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_totalParticles
static int tolua_set_quick__QParticles_totalParticles(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'totalParticles'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->totalParticles = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: particleCount of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_particleCount
static int tolua_get_quick__QParticles_particleCount(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'particleCount'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->particleCount);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: particleCount of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_particleCount
static int tolua_set_quick__QParticles_particleCount(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'particleCount'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->particleCount = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: emitterMode of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_emitterMode
static int tolua_get_quick__QParticles_emitterMode(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'emitterMode'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->emitterMode);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: emitterMode of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_emitterMode
static int tolua_set_quick__QParticles_emitterMode(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'emitterMode'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->emitterMode = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: emitterRate of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_emitterRate
static int tolua_get_quick__QParticles_emitterRate(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'emitterRate'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->emitterRate);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: emitterRate of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_emitterRate
static int tolua_set_quick__QParticles_emitterRate(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'emitterRate'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->emitterRate = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: duration of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_duration
static int tolua_get_quick__QParticles_duration(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'duration'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->duration);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: duration of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_duration
static int tolua_set_quick__QParticles_duration(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'duration'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->duration = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: sourcePos of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_sourcePos
static int tolua_get_quick__QParticles_sourcePos(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sourcePos'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->sourcePos,"quick::QVec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: sourcePos of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_sourcePos
static int tolua_set_quick__QParticles_sourcePos(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sourcePos'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QVec2",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->sourcePos = *((quick::QVec2*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: sourcePosVar of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_sourcePosVar
static int tolua_get_quick__QParticles_sourcePosVar(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sourcePosVar'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->sourcePosVar,"quick::QVec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: sourcePosVar of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_sourcePosVar
static int tolua_set_quick__QParticles_sourcePosVar(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sourcePosVar'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QVec2",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->sourcePosVar = *((quick::QVec2*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: life of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_life
static int tolua_get_quick__QParticles_life(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'life'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->life);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: life of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_life
static int tolua_set_quick__QParticles_life(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'life'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->life = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lifeVar of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_lifeVar
static int tolua_get_quick__QParticles_lifeVar(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lifeVar'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->lifeVar);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lifeVar of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_lifeVar
static int tolua_set_quick__QParticles_lifeVar(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lifeVar'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lifeVar = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: angle of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_angle
static int tolua_get_quick__QParticles_angle(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angle'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->angle);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: angle of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_angle
static int tolua_set_quick__QParticles_angle(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angle'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->angle = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: angleVar of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_angleVar
static int tolua_get_quick__QParticles_angleVar(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angleVar'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->angleVar);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: angleVar of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_angleVar
static int tolua_set_quick__QParticles_angleVar(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angleVar'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->angleVar = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: startSize of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_startSize
static int tolua_get_quick__QParticles_startSize(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'startSize'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->startSize);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: startSize of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_startSize
static int tolua_set_quick__QParticles_startSize(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'startSize'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->startSize = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: startSizeVar of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_startSizeVar
static int tolua_get_quick__QParticles_startSizeVar(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'startSizeVar'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->startSizeVar);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: startSizeVar of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_startSizeVar
static int tolua_set_quick__QParticles_startSizeVar(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'startSizeVar'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->startSizeVar = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: endSize of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_endSize
static int tolua_get_quick__QParticles_endSize(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'endSize'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->endSize);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: endSize of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_endSize
static int tolua_set_quick__QParticles_endSize(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'endSize'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->endSize = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: endSizeVar of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_endSizeVar
static int tolua_get_quick__QParticles_endSizeVar(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'endSizeVar'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->endSizeVar);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: endSizeVar of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_endSizeVar
static int tolua_set_quick__QParticles_endSizeVar(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'endSizeVar'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->endSizeVar = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: startColor of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_startColor
static int tolua_get_quick__QParticles_startColor(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'startColor'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->startColor,"quick::QColor");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: startColor of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_startColor
static int tolua_set_quick__QParticles_startColor(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'startColor'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QColor",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->startColor = *((quick::QColor*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: startColorVar of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_startColorVar
static int tolua_get_quick__QParticles_startColorVar(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'startColorVar'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->startColorVar,"quick::QColor");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: startColorVar of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_startColorVar
static int tolua_set_quick__QParticles_startColorVar(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'startColorVar'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QColor",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->startColorVar = *((quick::QColor*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: endColor of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_endColor
static int tolua_get_quick__QParticles_endColor(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'endColor'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->endColor,"quick::QColor");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: endColor of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_endColor
static int tolua_set_quick__QParticles_endColor(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'endColor'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QColor",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->endColor = *((quick::QColor*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: endColorVar of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_endColorVar
static int tolua_get_quick__QParticles_endColorVar(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'endColorVar'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->endColorVar,"quick::QColor");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: endColorVar of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_endColorVar
static int tolua_set_quick__QParticles_endColorVar(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'endColorVar'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QColor",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->endColorVar = *((quick::QColor*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: startSpin of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_startSpin
static int tolua_get_quick__QParticles_startSpin(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'startSpin'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->startSpin);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: startSpin of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_startSpin
static int tolua_set_quick__QParticles_startSpin(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'startSpin'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->startSpin = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: startSpinVar of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_startSpinVar
static int tolua_get_quick__QParticles_startSpinVar(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'startSpinVar'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->startSpinVar);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: startSpinVar of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_startSpinVar
static int tolua_set_quick__QParticles_startSpinVar(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'startSpinVar'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->startSpinVar = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: endSpin of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_endSpin
static int tolua_get_quick__QParticles_endSpin(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'endSpin'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->endSpin);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: endSpin of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_endSpin
static int tolua_set_quick__QParticles_endSpin(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'endSpin'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->endSpin = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: endSpinVar of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_endSpinVar
static int tolua_get_quick__QParticles_endSpinVar(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'endSpinVar'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->endSpinVar);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: endSpinVar of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_endSpinVar
static int tolua_set_quick__QParticles_endSpinVar(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'endSpinVar'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->endSpinVar = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: alphaModifiesColor of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles_alphaModifiesColor
static int tolua_get_quick__QParticles_alphaModifiesColor(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'alphaModifiesColor'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->alphaModifiesColor);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: alphaModifiesColor of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles_alphaModifiesColor
static int tolua_set_quick__QParticles_alphaModifiesColor(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'alphaModifiesColor'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->alphaModifiesColor = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: _initWithPlist of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QParticles__initWithPlist00
static int tolua_openquick_tolua_quick_QParticles__initWithPlist00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QParticles",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
  const char* plist = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_initWithPlist'", NULL);
#endif
  {
   self->_initWithPlist(plist);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_initWithPlist'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _initWithNumber of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QParticles__initWithNumber00
static int tolua_openquick_tolua_quick_QParticles__initWithNumber00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QParticles",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
  int numParticles = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_initWithNumber'", NULL);
#endif
  {
   self->_initWithNumber(numParticles);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_initWithNumber'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _atlas of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_get_quick__QParticles__atlas_ptr
static int tolua_get_quick__QParticles__atlas_ptr(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_atlas'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->_atlas,"quick::QAtlas");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _atlas of class  quick::QParticles */
#ifndef TOLUA_DISABLE_tolua_set_quick__QParticles__atlas_ptr
static int tolua_set_quick__QParticles__atlas_ptr(lua_State* tolua_S)
{
  quick::QParticles* self = (quick::QParticles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_atlas'",NULL);
  if (!tolua_isusertype(tolua_S,2,"quick::QAtlas",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_atlas = ((quick::QAtlas*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim___tostring00
static int tolua_openquick_tolua_quick_physics_QSim___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim___serialize00
static int tolua_openquick_tolua_quick_physics_QSim___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim_new00
static int tolua_openquick_tolua_quick_physics_QSim_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QSim* tolua_ret = (quick::physics::QSim*)  Mtolua_new((quick::physics::QSim)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QSim");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim_new00_local
static int tolua_openquick_tolua_quick_physics_QSim_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QSim* tolua_ret = (quick::physics::QSim*)  Mtolua_new((quick::physics::QSim)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QSim");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim_delete00
static int tolua_openquick_tolua_quick_physics_QSim_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _addNode of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim__addNode00
static int tolua_openquick_tolua_quick_physics_QSim__addNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
  quick::QNode* pNode = ((quick::QNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_addNode'", NULL);
#endif
  {
   self->_addNode(pNode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_addNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _removeNode of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim__removeNode00
static int tolua_openquick_tolua_quick_physics_QSim__removeNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
  quick::QNode* pNode = ((quick::QNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_removeNode'", NULL);
#endif
  {
   self->_removeNode(pNode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_removeNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPhysicsHz of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim_getPhysicsHz00
static int tolua_openquick_tolua_quick_physics_QSim_getPhysicsHz00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPhysicsHz'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getPhysicsHz();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPhysicsHz'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _destroyJoint of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim__destroyJoint00
static int tolua_openquick_tolua_quick_physics_QSim__destroyJoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
  quick::physics::QJoint* joint = ((quick::physics::QJoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_destroyJoint'", NULL);
#endif
  {
   self->_destroyJoint(joint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_destroyJoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _destroyOnlyJoint of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim__destroyOnlyJoint00
static int tolua_openquick_tolua_quick_physics_QSim__destroyOnlyJoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
  quick::physics::QJoint* joint = ((quick::physics::QJoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_destroyOnlyJoint'", NULL);
#endif
  {
   self->_destroyOnlyJoint(joint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_destroyOnlyJoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _destroyBody of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim__destroyBody00
static int tolua_openquick_tolua_quick_physics_QSim__destroyBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
  b2Body* body = ((b2Body*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_destroyBody'", NULL);
#endif
  {
   self->_destroyBody(body);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_destroyBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim_setScale00
static int tolua_openquick_tolua_quick_physics_QSim_setScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
  float scale = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale'", NULL);
#endif
  {
   self->setScale(scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGravity of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim_getGravity00
static int tolua_openquick_tolua_quick_physics_QSim_getGravity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGravity'", NULL);
#endif
  {
   self->getGravity(&x,&y);
   tolua_pushnumber(tolua_S,(lua_Number)x);
   tolua_pushnumber(tolua_S,(lua_Number)y);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGravity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGravity of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim_setGravity00
static int tolua_openquick_tolua_quick_physics_QSim_setGravity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGravity'", NULL);
#endif
  {
   self->setGravity(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGravity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pause of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim_pause00
static int tolua_openquick_tolua_quick_physics_QSim_pause00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pause'", NULL);
#endif
  {
   self->pause();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pause'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resume of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim_resume00
static int tolua_openquick_tolua_quick_physics_QSim_resume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resume'", NULL);
#endif
  {
   self->resume();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTimeScale of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim_setTimeScale00
static int tolua_openquick_tolua_quick_physics_QSim_setTimeScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
  float f = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTimeScale'", NULL);
#endif
  {
   self->setTimeScale(f);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTimeScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTimeScale of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim_getTimeScale00
static int tolua_openquick_tolua_quick_physics_QSim_getTimeScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTimeScale'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getTimeScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTimeScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIterations of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim_setIterations00
static int tolua_openquick_tolua_quick_physics_QSim_setIterations00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
  int vel = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIterations'", NULL);
#endif
  {
   self->setIterations(pos,vel);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIterations'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAllowSleeping of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QSim_setAllowSleeping00
static int tolua_openquick_tolua_quick_physics_QSim_setAllowSleeping00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QSim",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
  bool sleep = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAllowSleeping'", NULL);
#endif
  {
   self->setAllowSleeping(sleep);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAllowSleeping'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: debugDraw of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QSim_debugDraw
static int tolua_get_quick__physics__QSim_debugDraw(lua_State* tolua_S)
{
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'debugDraw'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->debugDraw);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: debugDraw of class  quick::physics::QSim */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QSim_debugDraw
static int tolua_set_quick__physics__QSim_debugDraw(lua_State* tolua_S)
{
  quick::physics::QSim* self = (quick::physics::QSim*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'debugDraw'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->debugDraw = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJoint_new00
static int tolua_openquick_tolua_quick_physics_QJoint_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJoint* tolua_ret = (quick::physics::QJoint*)  Mtolua_new((quick::physics::QJoint)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJoint_new00_local
static int tolua_openquick_tolua_quick_physics_QJoint_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJoint* tolua_ret = (quick::physics::QJoint*)  Mtolua_new((quick::physics::QJoint)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJoint_delete00
static int tolua_openquick_tolua_quick_physics_QJoint_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJoint* self = (quick::physics::QJoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _sync of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJoint__sync00
static int tolua_openquick_tolua_quick_physics_QJoint__sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJoint* self = (quick::physics::QJoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_sync'", NULL);
#endif
  {
   self->_sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNodeA of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJoint_getNodeA00
static int tolua_openquick_tolua_quick_physics_QJoint_getNodeA00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJoint* self = (quick::physics::QJoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNodeA'", NULL);
#endif
  {
   quick::QNode* tolua_ret = (quick::QNode*)  self->getNodeA();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNodeA'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNodeB of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJoint_getNodeB00
static int tolua_openquick_tolua_quick_physics_QJoint_getNodeB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJoint* self = (quick::physics::QJoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNodeB'", NULL);
#endif
  {
   quick::QNode* tolua_ret = (quick::QNode*)  self->getNodeB();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNodeB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnchorA of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJoint_getAnchorA00
static int tolua_openquick_tolua_quick_physics_QJoint_getAnchorA00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJoint* self = (quick::physics::QJoint*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnchorA'", NULL);
#endif
  {
   self->getAnchorA(&x,&y);
   tolua_pushnumber(tolua_S,(lua_Number)x);
   tolua_pushnumber(tolua_S,(lua_Number)y);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAnchorA'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnchorB of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJoint_getAnchorB00
static int tolua_openquick_tolua_quick_physics_QJoint_getAnchorB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJoint* self = (quick::physics::QJoint*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnchorB'", NULL);
#endif
  {
   self->getAnchorB(&x,&y);
   tolua_pushnumber(tolua_S,(lua_Number)x);
   tolua_pushnumber(tolua_S,(lua_Number)y);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAnchorB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_isActive of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJoint_get_isActive00
static int tolua_openquick_tolua_quick_physics_QJoint_get_isActive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJoint* self = (quick::physics::QJoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_isActive'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->get_isActive();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_isActive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set_isActive of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJoint_set_isActive00
static int tolua_openquick_tolua_quick_physics_QJoint_set_isActive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJoint* self = (quick::physics::QJoint*)  tolua_tousertype(tolua_S,1,0);
  bool ac = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_isActive'", NULL);
#endif
  {
   self->set_isActive(ac);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_isActive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_isCollideConnected of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJoint_get_isCollideConnected00
static int tolua_openquick_tolua_quick_physics_QJoint_get_isCollideConnected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJoint* self = (quick::physics::QJoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_isCollideConnected'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->get_isCollideConnected();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_isCollideConnected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set_isCollideConnected of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJoint_set_isCollideConnected00
static int tolua_openquick_tolua_quick_physics_QJoint_set_isCollideConnected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJoint* self = (quick::physics::QJoint*)  tolua_tousertype(tolua_S,1,0);
  bool val = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_isCollideConnected'", NULL);
#endif
  {
   self->set_isCollideConnected(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_isCollideConnected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getReactionForce of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJoint_getReactionForce00
static int tolua_openquick_tolua_quick_physics_QJoint_getReactionForce00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJoint* self = (quick::physics::QJoint*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getReactionForce'", NULL);
#endif
  {
   self->getReactionForce(&x,&y);
   tolua_pushnumber(tolua_S,(lua_Number)x);
   tolua_pushnumber(tolua_S,(lua_Number)y);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getReactionForce'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getReactionTorque of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJoint_getReactionTorque00
static int tolua_openquick_tolua_quick_physics_QJoint_getReactionTorque00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJoint* self = (quick::physics::QJoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getReactionTorque'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getReactionTorque();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getReactionTorque'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroy of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJoint_destroy00
static int tolua_openquick_tolua_quick_physics_QJoint_destroy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJoint* self = (quick::physics::QJoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroy'", NULL);
#endif
  {
   self->destroy();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: isActive of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJoint_isActive
static int tolua_get_quick__physics__QJoint_isActive(lua_State* tolua_S)
{
  quick::physics::QJoint* self = (quick::physics::QJoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'isActive'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->get_isActive());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: isActive of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJoint_isActive
static int tolua_set_quick__physics__QJoint_isActive(lua_State* tolua_S)
{
  quick::physics::QJoint* self = (quick::physics::QJoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'isActive'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_isActive(((bool)  tolua_toboolean(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: isCollideConnected of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJoint_isCollideConnected
static int tolua_get_quick__physics__QJoint_isCollideConnected(lua_State* tolua_S)
{
  quick::physics::QJoint* self = (quick::physics::QJoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'isCollideConnected'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->get_isCollideConnected());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: isCollideConnected of class  quick::physics::QJoint */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJoint_isCollideConnected
static int tolua_set_quick__physics__QJoint_isCollideConnected(lua_State* tolua_S)
{
  quick::physics::QJoint* self = (quick::physics::QJoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'isCollideConnected'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_isCollideConnected(((bool)  tolua_toboolean(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::physics::QJointDistance */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointDistance_new00
static int tolua_openquick_tolua_quick_physics_QJointDistance_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointDistance",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointDistance* tolua_ret = (quick::physics::QJointDistance*)  Mtolua_new((quick::physics::QJointDistance)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointDistance");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::physics::QJointDistance */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointDistance_new00_local
static int tolua_openquick_tolua_quick_physics_QJointDistance_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointDistance",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointDistance* tolua_ret = (quick::physics::QJointDistance*)  Mtolua_new((quick::physics::QJointDistance)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointDistance");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::physics::QJointDistance */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointDistance_delete00
static int tolua_openquick_tolua_quick_physics_QJointDistance_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointDistance",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointDistance* self = (quick::physics::QJointDistance*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _init of class  quick::physics::QJointDistance */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointDistance__init00
static int tolua_openquick_tolua_quick_physics_QJointDistance__init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointDistance",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"quick::QNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,8,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,9,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointDistance* self = (quick::physics::QJointDistance*)  tolua_tousertype(tolua_S,1,0);
  quick::QNode* nodeA = ((quick::QNode*)  tolua_tousertype(tolua_S,2,0));
  quick::QNode* nodeB = ((quick::QNode*)  tolua_tousertype(tolua_S,3,0));
  float absADX = ((float)  tolua_tonumber(tolua_S,4,0));
  float absADY = ((float)  tolua_tonumber(tolua_S,5,0));
  float absBDX = ((float)  tolua_tonumber(tolua_S,6,0));
  float absBDY = ((float)  tolua_tonumber(tolua_S,7,0));
  bool collideConnected = ((bool)  tolua_toboolean(tolua_S,8,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_init'", NULL);
#endif
  {
   self->_init(nodeA,nodeB,absADX,absADY,absBDX,absBDY,collideConnected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _sync of class  quick::physics::QJointDistance */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointDistance__sync00
static int tolua_openquick_tolua_quick_physics_QJointDistance__sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointDistance",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointDistance* self = (quick::physics::QJointDistance*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_sync'", NULL);
#endif
  {
   self->_sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: frequency of class  quick::physics::QJointDistance */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointDistance_frequency
static int tolua_get_quick__physics__QJointDistance_frequency(lua_State* tolua_S)
{
  quick::physics::QJointDistance* self = (quick::physics::QJointDistance*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'frequency'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->frequency);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: frequency of class  quick::physics::QJointDistance */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointDistance_frequency
static int tolua_set_quick__physics__QJointDistance_frequency(lua_State* tolua_S)
{
  quick::physics::QJointDistance* self = (quick::physics::QJointDistance*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'frequency'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->frequency = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dampingRatio of class  quick::physics::QJointDistance */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointDistance_dampingRatio
static int tolua_get_quick__physics__QJointDistance_dampingRatio(lua_State* tolua_S)
{
  quick::physics::QJointDistance* self = (quick::physics::QJointDistance*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dampingRatio'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->dampingRatio);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dampingRatio of class  quick::physics::QJointDistance */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointDistance_dampingRatio
static int tolua_set_quick__physics__QJointDistance_dampingRatio(lua_State* tolua_S)
{
  quick::physics::QJointDistance* self = (quick::physics::QJointDistance*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dampingRatio'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dampingRatio = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: length of class  quick::physics::QJointDistance */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointDistance_length
static int tolua_get_quick__physics__QJointDistance_length(lua_State* tolua_S)
{
  quick::physics::QJointDistance* self = (quick::physics::QJointDistance*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'length'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->length);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: length of class  quick::physics::QJointDistance */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointDistance_length
static int tolua_set_quick__physics__QJointDistance_length(lua_State* tolua_S)
{
  quick::physics::QJointDistance* self = (quick::physics::QJointDistance*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'length'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->length = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointRevolute_new00
static int tolua_openquick_tolua_quick_physics_QJointRevolute_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointRevolute",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointRevolute* tolua_ret = (quick::physics::QJointRevolute*)  Mtolua_new((quick::physics::QJointRevolute)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointRevolute");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointRevolute_new00_local
static int tolua_openquick_tolua_quick_physics_QJointRevolute_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointRevolute",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointRevolute* tolua_ret = (quick::physics::QJointRevolute*)  Mtolua_new((quick::physics::QJointRevolute)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointRevolute");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointRevolute_delete00
static int tolua_openquick_tolua_quick_physics_QJointRevolute_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointRevolute",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _init of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointRevolute__init00
static int tolua_openquick_tolua_quick_physics_QJointRevolute__init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointRevolute",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"quick::QNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
  quick::QNode* nodeA = ((quick::QNode*)  tolua_tousertype(tolua_S,2,0));
  quick::QNode* nodeB = ((quick::QNode*)  tolua_tousertype(tolua_S,3,0));
  float absDX = ((float)  tolua_tonumber(tolua_S,4,0));
  float absDY = ((float)  tolua_tonumber(tolua_S,5,0));
  bool collideConnected = ((bool)  tolua_toboolean(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_init'", NULL);
#endif
  {
   self->_init(nodeA,nodeB,absDX,absDY,collideConnected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _sync of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointRevolute__sync00
static int tolua_openquick_tolua_quick_physics_QJointRevolute__sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointRevolute",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_sync'", NULL);
#endif
  {
   self->_sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lowerAngle of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointRevolute_lowerAngle
static int tolua_get_quick__physics__QJointRevolute_lowerAngle(lua_State* tolua_S)
{
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lowerAngle'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->lowerAngle);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lowerAngle of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointRevolute_lowerAngle
static int tolua_set_quick__physics__QJointRevolute_lowerAngle(lua_State* tolua_S)
{
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lowerAngle'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lowerAngle = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: upperAngle of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointRevolute_upperAngle
static int tolua_get_quick__physics__QJointRevolute_upperAngle(lua_State* tolua_S)
{
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'upperAngle'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->upperAngle);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: upperAngle of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointRevolute_upperAngle
static int tolua_set_quick__physics__QJointRevolute_upperAngle(lua_State* tolua_S)
{
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'upperAngle'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->upperAngle = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: limitEnabled of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointRevolute_limitEnabled
static int tolua_get_quick__physics__QJointRevolute_limitEnabled(lua_State* tolua_S)
{
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'limitEnabled'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->limitEnabled);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: limitEnabled of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointRevolute_limitEnabled
static int tolua_set_quick__physics__QJointRevolute_limitEnabled(lua_State* tolua_S)
{
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'limitEnabled'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->limitEnabled = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: maxMotorTorque of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointRevolute_maxMotorTorque
static int tolua_get_quick__physics__QJointRevolute_maxMotorTorque(lua_State* tolua_S)
{
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxMotorTorque'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->maxMotorTorque);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: maxMotorTorque of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointRevolute_maxMotorTorque
static int tolua_set_quick__physics__QJointRevolute_maxMotorTorque(lua_State* tolua_S)
{
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxMotorTorque'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->maxMotorTorque = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: motorSpeed of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointRevolute_motorSpeed
static int tolua_get_quick__physics__QJointRevolute_motorSpeed(lua_State* tolua_S)
{
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motorSpeed'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->motorSpeed);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: motorSpeed of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointRevolute_motorSpeed
static int tolua_set_quick__physics__QJointRevolute_motorSpeed(lua_State* tolua_S)
{
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motorSpeed'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->motorSpeed = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: motorEnabled of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointRevolute_motorEnabled
static int tolua_get_quick__physics__QJointRevolute_motorEnabled(lua_State* tolua_S)
{
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motorEnabled'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->motorEnabled);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: motorEnabled of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointRevolute_motorEnabled
static int tolua_set_quick__physics__QJointRevolute_motorEnabled(lua_State* tolua_S)
{
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motorEnabled'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->motorEnabled = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: motorTorque of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointRevolute_motorTorque
static int tolua_get_quick__physics__QJointRevolute_motorTorque(lua_State* tolua_S)
{
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motorTorque'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_motorTorque());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: motorTorque of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointRevolute_motorTorque
static int tolua_set_quick__physics__QJointRevolute_motorTorque(lua_State* tolua_S)
{
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motorTorque'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_motorTorque(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: jointSpeed of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointRevolute_jointSpeed
static int tolua_get_quick__physics__QJointRevolute_jointSpeed(lua_State* tolua_S)
{
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jointSpeed'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_jointSpeed());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: jointSpeed of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointRevolute_jointSpeed
static int tolua_set_quick__physics__QJointRevolute_jointSpeed(lua_State* tolua_S)
{
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jointSpeed'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_jointSpeed(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: jointAngle of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointRevolute_jointAngle
static int tolua_get_quick__physics__QJointRevolute_jointAngle(lua_State* tolua_S)
{
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jointAngle'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_jointAngle());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: jointAngle of class  quick::physics::QJointRevolute */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointRevolute_jointAngle
static int tolua_set_quick__physics__QJointRevolute_jointAngle(lua_State* tolua_S)
{
  quick::physics::QJointRevolute* self = (quick::physics::QJointRevolute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jointAngle'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_jointAngle(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointPrismatic_new00
static int tolua_openquick_tolua_quick_physics_QJointPrismatic_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointPrismatic",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointPrismatic* tolua_ret = (quick::physics::QJointPrismatic*)  Mtolua_new((quick::physics::QJointPrismatic)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointPrismatic");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointPrismatic_new00_local
static int tolua_openquick_tolua_quick_physics_QJointPrismatic_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointPrismatic",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointPrismatic* tolua_ret = (quick::physics::QJointPrismatic*)  Mtolua_new((quick::physics::QJointPrismatic)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointPrismatic");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointPrismatic_delete00
static int tolua_openquick_tolua_quick_physics_QJointPrismatic_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointPrismatic",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _init of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointPrismatic__init00
static int tolua_openquick_tolua_quick_physics_QJointPrismatic__init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointPrismatic",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"quick::QNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,8,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,9,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
  quick::QNode* nodeA = ((quick::QNode*)  tolua_tousertype(tolua_S,2,0));
  quick::QNode* nodeB = ((quick::QNode*)  tolua_tousertype(tolua_S,3,0));
  float absDX = ((float)  tolua_tonumber(tolua_S,4,0));
  float absDY = ((float)  tolua_tonumber(tolua_S,5,0));
  float DXLocalAxis = ((float)  tolua_tonumber(tolua_S,6,0));
  float DYLocalAxis = ((float)  tolua_tonumber(tolua_S,7,0));
  bool collideConnected = ((bool)  tolua_toboolean(tolua_S,8,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_init'", NULL);
#endif
  {
   self->_init(nodeA,nodeB,absDX,absDY,DXLocalAxis,DYLocalAxis,collideConnected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _sync of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointPrismatic__sync00
static int tolua_openquick_tolua_quick_physics_QJointPrismatic__sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointPrismatic",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_sync'", NULL);
#endif
  {
   self->_sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: limitEnabled of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointPrismatic_limitEnabled
static int tolua_get_quick__physics__QJointPrismatic_limitEnabled(lua_State* tolua_S)
{
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'limitEnabled'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->limitEnabled);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: limitEnabled of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointPrismatic_limitEnabled
static int tolua_set_quick__physics__QJointPrismatic_limitEnabled(lua_State* tolua_S)
{
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'limitEnabled'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->limitEnabled = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lowerTranslation of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointPrismatic_lowerTranslation
static int tolua_get_quick__physics__QJointPrismatic_lowerTranslation(lua_State* tolua_S)
{
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lowerTranslation'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->lowerTranslation);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lowerTranslation of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointPrismatic_lowerTranslation
static int tolua_set_quick__physics__QJointPrismatic_lowerTranslation(lua_State* tolua_S)
{
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lowerTranslation'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lowerTranslation = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: upperTranslation of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointPrismatic_upperTranslation
static int tolua_get_quick__physics__QJointPrismatic_upperTranslation(lua_State* tolua_S)
{
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'upperTranslation'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->upperTranslation);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: upperTranslation of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointPrismatic_upperTranslation
static int tolua_set_quick__physics__QJointPrismatic_upperTranslation(lua_State* tolua_S)
{
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'upperTranslation'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->upperTranslation = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: motorEnabled of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointPrismatic_motorEnabled
static int tolua_get_quick__physics__QJointPrismatic_motorEnabled(lua_State* tolua_S)
{
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motorEnabled'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->motorEnabled);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: motorEnabled of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointPrismatic_motorEnabled
static int tolua_set_quick__physics__QJointPrismatic_motorEnabled(lua_State* tolua_S)
{
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motorEnabled'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->motorEnabled = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: maxMotorForce of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointPrismatic_maxMotorForce
static int tolua_get_quick__physics__QJointPrismatic_maxMotorForce(lua_State* tolua_S)
{
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxMotorForce'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->maxMotorForce);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: maxMotorForce of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointPrismatic_maxMotorForce
static int tolua_set_quick__physics__QJointPrismatic_maxMotorForce(lua_State* tolua_S)
{
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxMotorForce'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->maxMotorForce = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: motorSpeed of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointPrismatic_motorSpeed
static int tolua_get_quick__physics__QJointPrismatic_motorSpeed(lua_State* tolua_S)
{
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motorSpeed'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->motorSpeed);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: motorSpeed of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointPrismatic_motorSpeed
static int tolua_set_quick__physics__QJointPrismatic_motorSpeed(lua_State* tolua_S)
{
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motorSpeed'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->motorSpeed = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: motorForce of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointPrismatic_motorForce
static int tolua_get_quick__physics__QJointPrismatic_motorForce(lua_State* tolua_S)
{
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motorForce'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_motorForce());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: motorForce of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointPrismatic_motorForce
static int tolua_set_quick__physics__QJointPrismatic_motorForce(lua_State* tolua_S)
{
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motorForce'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_motorForce(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: jointTranslation of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointPrismatic_jointTranslation
static int tolua_get_quick__physics__QJointPrismatic_jointTranslation(lua_State* tolua_S)
{
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jointTranslation'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_jointTranslation());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: jointTranslation of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointPrismatic_jointTranslation
static int tolua_set_quick__physics__QJointPrismatic_jointTranslation(lua_State* tolua_S)
{
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jointTranslation'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_jointTranslation(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: jointSpeed of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointPrismatic_jointSpeed
static int tolua_get_quick__physics__QJointPrismatic_jointSpeed(lua_State* tolua_S)
{
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jointSpeed'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_jointSpeed());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: jointSpeed of class  quick::physics::QJointPrismatic */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointPrismatic_jointSpeed
static int tolua_set_quick__physics__QJointPrismatic_jointSpeed(lua_State* tolua_S)
{
  quick::physics::QJointPrismatic* self = (quick::physics::QJointPrismatic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jointSpeed'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_jointSpeed(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::physics::QJointFriction */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointFriction_new00
static int tolua_openquick_tolua_quick_physics_QJointFriction_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointFriction",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointFriction* tolua_ret = (quick::physics::QJointFriction*)  Mtolua_new((quick::physics::QJointFriction)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointFriction");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::physics::QJointFriction */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointFriction_new00_local
static int tolua_openquick_tolua_quick_physics_QJointFriction_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointFriction",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointFriction* tolua_ret = (quick::physics::QJointFriction*)  Mtolua_new((quick::physics::QJointFriction)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointFriction");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::physics::QJointFriction */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointFriction_delete00
static int tolua_openquick_tolua_quick_physics_QJointFriction_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointFriction",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointFriction* self = (quick::physics::QJointFriction*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _init of class  quick::physics::QJointFriction */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointFriction__init00
static int tolua_openquick_tolua_quick_physics_QJointFriction__init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointFriction",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"quick::QNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointFriction* self = (quick::physics::QJointFriction*)  tolua_tousertype(tolua_S,1,0);
  quick::QNode* nodeA = ((quick::QNode*)  tolua_tousertype(tolua_S,2,0));
  quick::QNode* nodeB = ((quick::QNode*)  tolua_tousertype(tolua_S,3,0));
  bool collideConnected = ((bool)  tolua_toboolean(tolua_S,4,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_init'", NULL);
#endif
  {
   self->_init(nodeA,nodeB,collideConnected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _sync of class  quick::physics::QJointFriction */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointFriction__sync00
static int tolua_openquick_tolua_quick_physics_QJointFriction__sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointFriction",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointFriction* self = (quick::physics::QJointFriction*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_sync'", NULL);
#endif
  {
   self->_sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: maxForce of class  quick::physics::QJointFriction */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointFriction_maxForce
static int tolua_get_quick__physics__QJointFriction_maxForce(lua_State* tolua_S)
{
  quick::physics::QJointFriction* self = (quick::physics::QJointFriction*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxForce'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->maxForce);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: maxForce of class  quick::physics::QJointFriction */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointFriction_maxForce
static int tolua_set_quick__physics__QJointFriction_maxForce(lua_State* tolua_S)
{
  quick::physics::QJointFriction* self = (quick::physics::QJointFriction*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxForce'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->maxForce = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: maxTorque of class  quick::physics::QJointFriction */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointFriction_maxTorque
static int tolua_get_quick__physics__QJointFriction_maxTorque(lua_State* tolua_S)
{
  quick::physics::QJointFriction* self = (quick::physics::QJointFriction*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxTorque'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->maxTorque);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: maxTorque of class  quick::physics::QJointFriction */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointFriction_maxTorque
static int tolua_set_quick__physics__QJointFriction_maxTorque(lua_State* tolua_S)
{
  quick::physics::QJointFriction* self = (quick::physics::QJointFriction*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxTorque'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->maxTorque = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointWheel_new00
static int tolua_openquick_tolua_quick_physics_QJointWheel_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointWheel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointWheel* tolua_ret = (quick::physics::QJointWheel*)  Mtolua_new((quick::physics::QJointWheel)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointWheel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointWheel_new00_local
static int tolua_openquick_tolua_quick_physics_QJointWheel_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointWheel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointWheel* tolua_ret = (quick::physics::QJointWheel*)  Mtolua_new((quick::physics::QJointWheel)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointWheel");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointWheel_delete00
static int tolua_openquick_tolua_quick_physics_QJointWheel_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointWheel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _init of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointWheel__init00
static int tolua_openquick_tolua_quick_physics_QJointWheel__init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointWheel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"quick::QNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,10,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,11,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
  quick::QNode* nodeA = ((quick::QNode*)  tolua_tousertype(tolua_S,2,0));
  quick::QNode* nodeB = ((quick::QNode*)  tolua_tousertype(tolua_S,3,0));
  float localAxisX = ((float)  tolua_tonumber(tolua_S,4,0));
  float localAxisY = ((float)  tolua_tonumber(tolua_S,5,0));
  float anchorAX = ((float)  tolua_tonumber(tolua_S,6,0));
  float anchorAY = ((float)  tolua_tonumber(tolua_S,7,0));
  float anchorBX = ((float)  tolua_tonumber(tolua_S,8,0));
  float anchorBY = ((float)  tolua_tonumber(tolua_S,9,0));
  bool collideConnected = ((bool)  tolua_toboolean(tolua_S,10,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_init'", NULL);
#endif
  {
   self->_init(nodeA,nodeB,localAxisX,localAxisY,anchorAX,anchorAY,anchorBX,anchorBY,collideConnected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _sync of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointWheel__sync00
static int tolua_openquick_tolua_quick_physics_QJointWheel__sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointWheel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_sync'", NULL);
#endif
  {
   self->_sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: motorEnabled of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointWheel_motorEnabled
static int tolua_get_quick__physics__QJointWheel_motorEnabled(lua_State* tolua_S)
{
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motorEnabled'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->motorEnabled);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: motorEnabled of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointWheel_motorEnabled
static int tolua_set_quick__physics__QJointWheel_motorEnabled(lua_State* tolua_S)
{
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motorEnabled'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->motorEnabled = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: motorSpeed of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointWheel_motorSpeed
static int tolua_get_quick__physics__QJointWheel_motorSpeed(lua_State* tolua_S)
{
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motorSpeed'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->motorSpeed);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: motorSpeed of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointWheel_motorSpeed
static int tolua_set_quick__physics__QJointWheel_motorSpeed(lua_State* tolua_S)
{
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motorSpeed'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->motorSpeed = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: maxMotorTorque of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointWheel_maxMotorTorque
static int tolua_get_quick__physics__QJointWheel_maxMotorTorque(lua_State* tolua_S)
{
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxMotorTorque'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->maxMotorTorque);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: maxMotorTorque of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointWheel_maxMotorTorque
static int tolua_set_quick__physics__QJointWheel_maxMotorTorque(lua_State* tolua_S)
{
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxMotorTorque'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->maxMotorTorque = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: springFrequency of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointWheel_springFrequency
static int tolua_get_quick__physics__QJointWheel_springFrequency(lua_State* tolua_S)
{
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'springFrequency'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->springFrequency);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: springFrequency of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointWheel_springFrequency
static int tolua_set_quick__physics__QJointWheel_springFrequency(lua_State* tolua_S)
{
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'springFrequency'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->springFrequency = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: springDampingRatio of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointWheel_springDampingRatio
static int tolua_get_quick__physics__QJointWheel_springDampingRatio(lua_State* tolua_S)
{
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'springDampingRatio'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->springDampingRatio);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: springDampingRatio of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointWheel_springDampingRatio
static int tolua_set_quick__physics__QJointWheel_springDampingRatio(lua_State* tolua_S)
{
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'springDampingRatio'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->springDampingRatio = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: motorTorque of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointWheel_motorTorque
static int tolua_get_quick__physics__QJointWheel_motorTorque(lua_State* tolua_S)
{
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motorTorque'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_motorTorque());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: motorTorque of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointWheel_motorTorque
static int tolua_set_quick__physics__QJointWheel_motorTorque(lua_State* tolua_S)
{
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motorTorque'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_motorTorque(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: jointTranslation of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointWheel_jointTranslation
static int tolua_get_quick__physics__QJointWheel_jointTranslation(lua_State* tolua_S)
{
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jointTranslation'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_jointTranslation());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: jointTranslation of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointWheel_jointTranslation
static int tolua_set_quick__physics__QJointWheel_jointTranslation(lua_State* tolua_S)
{
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jointTranslation'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_jointTranslation(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: jointSpeed of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointWheel_jointSpeed
static int tolua_get_quick__physics__QJointWheel_jointSpeed(lua_State* tolua_S)
{
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jointSpeed'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_jointSpeed());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: jointSpeed of class  quick::physics::QJointWheel */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointWheel_jointSpeed
static int tolua_set_quick__physics__QJointWheel_jointSpeed(lua_State* tolua_S)
{
  quick::physics::QJointWheel* self = (quick::physics::QJointWheel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jointSpeed'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_jointSpeed(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::physics::QJointWeld */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointWeld_new00
static int tolua_openquick_tolua_quick_physics_QJointWeld_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointWeld",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointWeld* tolua_ret = (quick::physics::QJointWeld*)  Mtolua_new((quick::physics::QJointWeld)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointWeld");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::physics::QJointWeld */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointWeld_new00_local
static int tolua_openquick_tolua_quick_physics_QJointWeld_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointWeld",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointWeld* tolua_ret = (quick::physics::QJointWeld*)  Mtolua_new((quick::physics::QJointWeld)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointWeld");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::physics::QJointWeld */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointWeld_delete00
static int tolua_openquick_tolua_quick_physics_QJointWeld_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointWeld",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointWeld* self = (quick::physics::QJointWeld*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _init of class  quick::physics::QJointWeld */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointWeld__init00
static int tolua_openquick_tolua_quick_physics_QJointWeld__init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointWeld",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"quick::QNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointWeld* self = (quick::physics::QJointWeld*)  tolua_tousertype(tolua_S,1,0);
  quick::QNode* nodeA = ((quick::QNode*)  tolua_tousertype(tolua_S,2,0));
  quick::QNode* nodeB = ((quick::QNode*)  tolua_tousertype(tolua_S,3,0));
  float absDX = ((float)  tolua_tonumber(tolua_S,4,0));
  float absDY = ((float)  tolua_tonumber(tolua_S,5,0));
  bool collideConnected = ((bool)  tolua_toboolean(tolua_S,6,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_init'", NULL);
#endif
  {
   self->_init(nodeA,nodeB,absDX,absDY,collideConnected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _sync of class  quick::physics::QJointWeld */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointWeld__sync00
static int tolua_openquick_tolua_quick_physics_QJointWeld__sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointWeld",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointWeld* self = (quick::physics::QJointWeld*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_sync'", NULL);
#endif
  {
   self->_sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: frequency of class  quick::physics::QJointWeld */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointWeld_frequency
static int tolua_get_quick__physics__QJointWeld_frequency(lua_State* tolua_S)
{
  quick::physics::QJointWeld* self = (quick::physics::QJointWeld*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'frequency'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->frequency);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: frequency of class  quick::physics::QJointWeld */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointWeld_frequency
static int tolua_set_quick__physics__QJointWeld_frequency(lua_State* tolua_S)
{
  quick::physics::QJointWeld* self = (quick::physics::QJointWeld*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'frequency'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->frequency = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dampingRatio of class  quick::physics::QJointWeld */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointWeld_dampingRatio
static int tolua_get_quick__physics__QJointWeld_dampingRatio(lua_State* tolua_S)
{
  quick::physics::QJointWeld* self = (quick::physics::QJointWeld*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dampingRatio'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->dampingRatio);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dampingRatio of class  quick::physics::QJointWeld */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointWeld_dampingRatio
static int tolua_set_quick__physics__QJointWeld_dampingRatio(lua_State* tolua_S)
{
  quick::physics::QJointWeld* self = (quick::physics::QJointWeld*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dampingRatio'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dampingRatio = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::physics::QJointPulley */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointPulley_new00
static int tolua_openquick_tolua_quick_physics_QJointPulley_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointPulley",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointPulley* tolua_ret = (quick::physics::QJointPulley*)  Mtolua_new((quick::physics::QJointPulley)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointPulley");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::physics::QJointPulley */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointPulley_new00_local
static int tolua_openquick_tolua_quick_physics_QJointPulley_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointPulley",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointPulley* tolua_ret = (quick::physics::QJointPulley*)  Mtolua_new((quick::physics::QJointPulley)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointPulley");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::physics::QJointPulley */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointPulley_delete00
static int tolua_openquick_tolua_quick_physics_QJointPulley_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointPulley",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointPulley* self = (quick::physics::QJointPulley*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _init of class  quick::physics::QJointPulley */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointPulley__init00
static int tolua_openquick_tolua_quick_physics_QJointPulley__init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointPulley",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"quick::QNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,11,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,12,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,13,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,14,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointPulley* self = (quick::physics::QJointPulley*)  tolua_tousertype(tolua_S,1,0);
  quick::QNode* nodeA = ((quick::QNode*)  tolua_tousertype(tolua_S,2,0));
  quick::QNode* nodeB = ((quick::QNode*)  tolua_tousertype(tolua_S,3,0));
  float groundAnchorAX = ((float)  tolua_tonumber(tolua_S,4,0));
  float groundAnchorAY = ((float)  tolua_tonumber(tolua_S,5,0));
  float groundAnchorBX = ((float)  tolua_tonumber(tolua_S,6,0));
  float groundAnchorBY = ((float)  tolua_tonumber(tolua_S,7,0));
  float anchorAX = ((float)  tolua_tonumber(tolua_S,8,0));
  float anchorAY = ((float)  tolua_tonumber(tolua_S,9,0));
  float anchorBX = ((float)  tolua_tonumber(tolua_S,10,0));
  float anchorBY = ((float)  tolua_tonumber(tolua_S,11,0));
  float ratio = ((float)  tolua_tonumber(tolua_S,12,0));
  bool collideConnected = ((bool)  tolua_toboolean(tolua_S,13,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_init'", NULL);
#endif
  {
   self->_init(nodeA,nodeB,groundAnchorAX,groundAnchorAY,groundAnchorBX,groundAnchorBY,anchorAX,anchorAY,anchorBX,anchorBY,ratio,collideConnected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _sync of class  quick::physics::QJointPulley */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointPulley__sync00
static int tolua_openquick_tolua_quick_physics_QJointPulley__sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointPulley",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointPulley* self = (quick::physics::QJointPulley*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_sync'", NULL);
#endif
  {
   self->_sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ratio of class  quick::physics::QJointPulley */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointPulley_ratio
static int tolua_get_quick__physics__QJointPulley_ratio(lua_State* tolua_S)
{
  quick::physics::QJointPulley* self = (quick::physics::QJointPulley*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ratio'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->ratio);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: ratio of class  quick::physics::QJointPulley */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointPulley_ratio
static int tolua_set_quick__physics__QJointPulley_ratio(lua_State* tolua_S)
{
  quick::physics::QJointPulley* self = (quick::physics::QJointPulley*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ratio'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->ratio = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lengthA of class  quick::physics::QJointPulley */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointPulley_lengthA
static int tolua_get_quick__physics__QJointPulley_lengthA(lua_State* tolua_S)
{
  quick::physics::QJointPulley* self = (quick::physics::QJointPulley*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lengthA'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->lengthA);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lengthA of class  quick::physics::QJointPulley */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointPulley_lengthA
static int tolua_set_quick__physics__QJointPulley_lengthA(lua_State* tolua_S)
{
  quick::physics::QJointPulley* self = (quick::physics::QJointPulley*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lengthA'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lengthA = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lengthB of class  quick::physics::QJointPulley */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointPulley_lengthB
static int tolua_get_quick__physics__QJointPulley_lengthB(lua_State* tolua_S)
{
  quick::physics::QJointPulley* self = (quick::physics::QJointPulley*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lengthB'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->lengthB);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lengthB of class  quick::physics::QJointPulley */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointPulley_lengthB
static int tolua_set_quick__physics__QJointPulley_lengthB(lua_State* tolua_S)
{
  quick::physics::QJointPulley* self = (quick::physics::QJointPulley*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lengthB'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lengthB = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::physics::QJointTouch */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointTouch_new00
static int tolua_openquick_tolua_quick_physics_QJointTouch_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointTouch",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointTouch* tolua_ret = (quick::physics::QJointTouch*)  Mtolua_new((quick::physics::QJointTouch)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointTouch");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::physics::QJointTouch */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointTouch_new00_local
static int tolua_openquick_tolua_quick_physics_QJointTouch_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointTouch",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointTouch* tolua_ret = (quick::physics::QJointTouch*)  Mtolua_new((quick::physics::QJointTouch)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointTouch");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::physics::QJointTouch */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointTouch_delete00
static int tolua_openquick_tolua_quick_physics_QJointTouch_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointTouch",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointTouch* self = (quick::physics::QJointTouch*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _init of class  quick::physics::QJointTouch */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointTouch__init00
static int tolua_openquick_tolua_quick_physics_QJointTouch__init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointTouch* self = (quick::physics::QJointTouch*)  tolua_tousertype(tolua_S,1,0);
  quick::QNode* nodeA = ((quick::QNode*)  tolua_tousertype(tolua_S,2,0));
  float dampingRatio = ((float)  tolua_tonumber(tolua_S,3,0));
  float frequency = ((float)  tolua_tonumber(tolua_S,4,0));
  float maxForce = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_init'", NULL);
#endif
  {
   self->_init(nodeA,dampingRatio,frequency,maxForce);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _sync of class  quick::physics::QJointTouch */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointTouch__sync00
static int tolua_openquick_tolua_quick_physics_QJointTouch__sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointTouch",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointTouch* self = (quick::physics::QJointTouch*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_sync'", NULL);
#endif
  {
   self->_sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTarget of class  quick::physics::QJointTouch */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointTouch_setTarget00
static int tolua_openquick_tolua_quick_physics_QJointTouch_setTarget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointTouch* self = (quick::physics::QJointTouch*)  tolua_tousertype(tolua_S,1,0);
  float tx = ((float)  tolua_tonumber(tolua_S,2,0));
  float ty = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTarget'", NULL);
#endif
  {
   self->setTarget(tx,ty);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTarget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dampingRatio of class  quick::physics::QJointTouch */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointTouch_dampingRatio
static int tolua_get_quick__physics__QJointTouch_dampingRatio(lua_State* tolua_S)
{
  quick::physics::QJointTouch* self = (quick::physics::QJointTouch*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dampingRatio'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->dampingRatio);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dampingRatio of class  quick::physics::QJointTouch */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointTouch_dampingRatio
static int tolua_set_quick__physics__QJointTouch_dampingRatio(lua_State* tolua_S)
{
  quick::physics::QJointTouch* self = (quick::physics::QJointTouch*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dampingRatio'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dampingRatio = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: frequency of class  quick::physics::QJointTouch */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointTouch_frequency
static int tolua_get_quick__physics__QJointTouch_frequency(lua_State* tolua_S)
{
  quick::physics::QJointTouch* self = (quick::physics::QJointTouch*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'frequency'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->frequency);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: frequency of class  quick::physics::QJointTouch */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointTouch_frequency
static int tolua_set_quick__physics__QJointTouch_frequency(lua_State* tolua_S)
{
  quick::physics::QJointTouch* self = (quick::physics::QJointTouch*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'frequency'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->frequency = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: maxForce of class  quick::physics::QJointTouch */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointTouch_maxForce
static int tolua_get_quick__physics__QJointTouch_maxForce(lua_State* tolua_S)
{
  quick::physics::QJointTouch* self = (quick::physics::QJointTouch*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxForce'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->maxForce);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: maxForce of class  quick::physics::QJointTouch */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointTouch_maxForce
static int tolua_set_quick__physics__QJointTouch_maxForce(lua_State* tolua_S)
{
  quick::physics::QJointTouch* self = (quick::physics::QJointTouch*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxForce'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->maxForce = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::physics::QJointGear */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointGear_new00
static int tolua_openquick_tolua_quick_physics_QJointGear_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointGear",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointGear* tolua_ret = (quick::physics::QJointGear*)  Mtolua_new((quick::physics::QJointGear)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointGear");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::physics::QJointGear */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointGear_new00_local
static int tolua_openquick_tolua_quick_physics_QJointGear_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointGear",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointGear* tolua_ret = (quick::physics::QJointGear*)  Mtolua_new((quick::physics::QJointGear)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointGear");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::physics::QJointGear */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointGear_delete00
static int tolua_openquick_tolua_quick_physics_QJointGear_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointGear",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointGear* self = (quick::physics::QJointGear*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _init of class  quick::physics::QJointGear */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointGear__init00
static int tolua_openquick_tolua_quick_physics_QJointGear__init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointGear",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"quick::physics::QJoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointGear* self = (quick::physics::QJointGear*)  tolua_tousertype(tolua_S,1,0);
  quick::physics::QJoint* joint1 = ((quick::physics::QJoint*)  tolua_tousertype(tolua_S,2,0));
  quick::physics::QJoint* joint2 = ((quick::physics::QJoint*)  tolua_tousertype(tolua_S,3,0));
  float ratio = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_init'", NULL);
#endif
  {
   self->_init(joint1,joint2,ratio);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _sync of class  quick::physics::QJointGear */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointGear__sync00
static int tolua_openquick_tolua_quick_physics_QJointGear__sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointGear",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointGear* self = (quick::physics::QJointGear*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_sync'", NULL);
#endif
  {
   self->_sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ratio of class  quick::physics::QJointGear */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointGear_ratio
static int tolua_get_quick__physics__QJointGear_ratio(lua_State* tolua_S)
{
  quick::physics::QJointGear* self = (quick::physics::QJointGear*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ratio'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->ratio);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: ratio of class  quick::physics::QJointGear */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointGear_ratio
static int tolua_set_quick__physics__QJointGear_ratio(lua_State* tolua_S)
{
  quick::physics::QJointGear* self = (quick::physics::QJointGear*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ratio'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->ratio = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: joint1 of class  quick::physics::QJointGear */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointGear_joint1_ptr
static int tolua_get_quick__physics__QJointGear_joint1_ptr(lua_State* tolua_S)
{
  quick::physics::QJointGear* self = (quick::physics::QJointGear*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'joint1'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->joint1,"quick::physics::QJoint");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: joint1 of class  quick::physics::QJointGear */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointGear_joint1_ptr
static int tolua_set_quick__physics__QJointGear_joint1_ptr(lua_State* tolua_S)
{
  quick::physics::QJointGear* self = (quick::physics::QJointGear*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'joint1'",NULL);
  if (!tolua_isusertype(tolua_S,2,"quick::physics::QJoint",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->joint1 = ((quick::physics::QJoint*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: joint2 of class  quick::physics::QJointGear */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointGear_joint2_ptr
static int tolua_get_quick__physics__QJointGear_joint2_ptr(lua_State* tolua_S)
{
  quick::physics::QJointGear* self = (quick::physics::QJointGear*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'joint2'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->joint2,"quick::physics::QJoint");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: joint2 of class  quick::physics::QJointGear */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointGear_joint2_ptr
static int tolua_set_quick__physics__QJointGear_joint2_ptr(lua_State* tolua_S)
{
  quick::physics::QJointGear* self = (quick::physics::QJointGear*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'joint2'",NULL);
  if (!tolua_isusertype(tolua_S,2,"quick::physics::QJoint",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->joint2 = ((quick::physics::QJoint*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::physics::QJointRope */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointRope_new00
static int tolua_openquick_tolua_quick_physics_QJointRope_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointRope",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointRope* tolua_ret = (quick::physics::QJointRope*)  Mtolua_new((quick::physics::QJointRope)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointRope");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::physics::QJointRope */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointRope_new00_local
static int tolua_openquick_tolua_quick_physics_QJointRope_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QJointRope",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::physics::QJointRope* tolua_ret = (quick::physics::QJointRope*)  Mtolua_new((quick::physics::QJointRope)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QJointRope");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::physics::QJointRope */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointRope_delete00
static int tolua_openquick_tolua_quick_physics_QJointRope_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointRope",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointRope* self = (quick::physics::QJointRope*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _init of class  quick::physics::QJointRope */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointRope__init00
static int tolua_openquick_tolua_quick_physics_QJointRope__init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointRope",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"quick::QNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,8,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,9,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointRope* self = (quick::physics::QJointRope*)  tolua_tousertype(tolua_S,1,0);
  quick::QNode* nodeA = ((quick::QNode*)  tolua_tousertype(tolua_S,2,0));
  quick::QNode* nodeB = ((quick::QNode*)  tolua_tousertype(tolua_S,3,0));
  float absAX = ((float)  tolua_tonumber(tolua_S,4,0));
  float absAY = ((float)  tolua_tonumber(tolua_S,5,0));
  float absBX = ((float)  tolua_tonumber(tolua_S,6,0));
  float absBY = ((float)  tolua_tonumber(tolua_S,7,0));
  bool collideConnected = ((bool)  tolua_toboolean(tolua_S,8,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_init'", NULL);
#endif
  {
   self->_init(nodeA,nodeB,absAX,absAY,absBX,absBY,collideConnected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _sync of class  quick::physics::QJointRope */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QJointRope__sync00
static int tolua_openquick_tolua_quick_physics_QJointRope__sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QJointRope",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QJointRope* self = (quick::physics::QJointRope*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_sync'", NULL);
#endif
  {
   self->_sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: maxLength of class  quick::physics::QJointRope */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QJointRope_maxLength
static int tolua_get_quick__physics__QJointRope_maxLength(lua_State* tolua_S)
{
  quick::physics::QJointRope* self = (quick::physics::QJointRope*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxLength'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->maxLength);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: maxLength of class  quick::physics::QJointRope */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QJointRope_maxLength
static int tolua_set_quick__physics__QJointRope_maxLength(lua_State* tolua_S)
{
  quick::physics::QJointRope* self = (quick::physics::QJointRope*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxLength'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->maxLength = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_new00
static int tolua_openquick_tolua_quick_physics_QNodeProps_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* pNode = ((quick::QNode*)  tolua_tousertype(tolua_S,2,0));
  {
   quick::physics::QNodeProps* tolua_ret = (quick::physics::QNodeProps*)  Mtolua_new((quick::physics::QNodeProps)(pNode));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QNodeProps");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_new00_local
static int tolua_openquick_tolua_quick_physics_QNodeProps_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QNode* pNode = ((quick::QNode*)  tolua_tousertype(tolua_S,2,0));
  {
   quick::physics::QNodeProps* tolua_ret = (quick::physics::QNodeProps*)  Mtolua_new((quick::physics::QNodeProps)(pNode));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::physics::QNodeProps");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_delete00
static int tolua_openquick_tolua_quick_physics_QNodeProps_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _addShapePoint of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps__addShapePoint00
static int tolua_openquick_tolua_quick_physics_QNodeProps__addShapePoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_addShapePoint'", NULL);
#endif
  {
   self->_addShapePoint(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_addShapePoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _init of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps__init00
static int tolua_openquick_tolua_quick_physics_QNodeProps__init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  bool isSensor = ((bool)  tolua_toboolean(tolua_S,2,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_init'", NULL);
#endif
  {
   self->_init(isSensor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _sync of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps__sync00
static int tolua_openquick_tolua_quick_physics_QNodeProps__sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_sync'", NULL);
#endif
  {
   self->_sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: applyForce of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_applyForce00
static int tolua_openquick_tolua_quick_physics_QNodeProps_applyForce00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float fx = ((float)  tolua_tonumber(tolua_S,2,0));
  float fy = ((float)  tolua_tonumber(tolua_S,3,0));
  float px = ((float)  tolua_tonumber(tolua_S,4,0.0f));
  float py = ((float)  tolua_tonumber(tolua_S,5,0.0f));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'applyForce'", NULL);
#endif
  {
   self->applyForce(fx,fy,px,py);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'applyForce'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: applyForceToCenter of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_applyForceToCenter00
static int tolua_openquick_tolua_quick_physics_QNodeProps_applyForceToCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float fx = ((float)  tolua_tonumber(tolua_S,2,0));
  float fy = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'applyForceToCenter'", NULL);
#endif
  {
   self->applyForceToCenter(fx,fy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'applyForceToCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: applyAngularImpulse of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_applyAngularImpulse00
static int tolua_openquick_tolua_quick_physics_QNodeProps_applyAngularImpulse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float i = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'applyAngularImpulse'", NULL);
#endif
  {
   self->applyAngularImpulse(i);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'applyAngularImpulse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAngularVelocity of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_setAngularVelocity00
static int tolua_openquick_tolua_quick_physics_QNodeProps_setAngularVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float omega = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAngularVelocity'", NULL);
#endif
  {
   self->setAngularVelocity(omega);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAngularVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAngularVelocity of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_getAngularVelocity00
static int tolua_openquick_tolua_quick_physics_QNodeProps_getAngularVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAngularVelocity'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAngularVelocity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAngularVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: applyTorque of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_applyTorque00
static int tolua_openquick_tolua_quick_physics_QNodeProps_applyTorque00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"float32",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float32 torque = *((float32*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'applyTorque'", NULL);
#endif
  {
   self->applyTorque(torque);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'applyTorque'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: applyLinearImpulse of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_applyLinearImpulse00
static int tolua_openquick_tolua_quick_physics_QNodeProps_applyLinearImpulse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float ix = ((float)  tolua_tonumber(tolua_S,2,0));
  float iy = ((float)  tolua_tonumber(tolua_S,3,0));
  float px = ((float)  tolua_tonumber(tolua_S,4,0.0f));
  float py = ((float)  tolua_tonumber(tolua_S,5,0.0f));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'applyLinearImpulse'", NULL);
#endif
  {
   self->applyLinearImpulse(ix,iy,px,py);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'applyLinearImpulse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: applyLinearImpulseToCenter of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_applyLinearImpulseToCenter00
static int tolua_openquick_tolua_quick_physics_QNodeProps_applyLinearImpulseToCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float ix = ((float)  tolua_tonumber(tolua_S,2,0));
  float iy = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'applyLinearImpulseToCenter'", NULL);
#endif
  {
   self->applyLinearImpulseToCenter(ix,iy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'applyLinearImpulseToCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMass of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_getMass00
static int tolua_openquick_tolua_quick_physics_QNodeProps_getMass00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMass'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getMass();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMass'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInertia of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_getInertia00
static int tolua_openquick_tolua_quick_physics_QNodeProps_getInertia00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInertia'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getInertia();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInertia'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWorldPoint of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_getWorldPoint00
static int tolua_openquick_tolua_quick_physics_QNodeProps_getWorldPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float lx = ((float)  tolua_tonumber(tolua_S,2,0));
  float ly = ((float)  tolua_tonumber(tolua_S,3,0));
  float wx = ((float)  tolua_tonumber(tolua_S,4,0));
  float wy = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWorldPoint'", NULL);
#endif
  {
   self->getWorldPoint(lx,ly,&wx,&wy);
   tolua_pushnumber(tolua_S,(lua_Number)wx);
   tolua_pushnumber(tolua_S,(lua_Number)wy);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWorldPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWorldCenter of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_getWorldCenter00
static int tolua_openquick_tolua_quick_physics_QNodeProps_getWorldCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float vx = ((float)  tolua_tonumber(tolua_S,2,0));
  float vy = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWorldCenter'", NULL);
#endif
  {
   self->getWorldCenter(&vx,&vy);
   tolua_pushnumber(tolua_S,(lua_Number)vx);
   tolua_pushnumber(tolua_S,(lua_Number)vy);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWorldCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLocalCenter of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_getLocalCenter00
static int tolua_openquick_tolua_quick_physics_QNodeProps_getLocalCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float vx = ((float)  tolua_tonumber(tolua_S,2,0));
  float vy = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLocalCenter'", NULL);
#endif
  {
   self->getLocalCenter(&vx,&vy);
   tolua_pushnumber(tolua_S,(lua_Number)vx);
   tolua_pushnumber(tolua_S,(lua_Number)vy);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLocalCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWorldVector of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_getWorldVector00
static int tolua_openquick_tolua_quick_physics_QNodeProps_getWorldVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float lx = ((float)  tolua_tonumber(tolua_S,2,0));
  float ly = ((float)  tolua_tonumber(tolua_S,3,0));
  float wx = ((float)  tolua_tonumber(tolua_S,4,0));
  float wy = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWorldVector'", NULL);
#endif
  {
   self->getWorldVector(lx,ly,&wx,&wy);
   tolua_pushnumber(tolua_S,(lua_Number)wx);
   tolua_pushnumber(tolua_S,(lua_Number)wy);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWorldVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLocalPoint of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_getLocalPoint00
static int tolua_openquick_tolua_quick_physics_QNodeProps_getLocalPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float wx = ((float)  tolua_tonumber(tolua_S,2,0));
  float wy = ((float)  tolua_tonumber(tolua_S,3,0));
  float lx = ((float)  tolua_tonumber(tolua_S,4,0));
  float ly = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLocalPoint'", NULL);
#endif
  {
   self->getLocalPoint(wx,wy,&lx,&ly);
   tolua_pushnumber(tolua_S,(lua_Number)lx);
   tolua_pushnumber(tolua_S,(lua_Number)ly);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLocalPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLocalVector of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_getLocalVector00
static int tolua_openquick_tolua_quick_physics_QNodeProps_getLocalVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float wx = ((float)  tolua_tonumber(tolua_S,2,0));
  float wy = ((float)  tolua_tonumber(tolua_S,3,0));
  float lx = ((float)  tolua_tonumber(tolua_S,4,0));
  float ly = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLocalVector'", NULL);
#endif
  {
   self->getLocalVector(wx,wy,&lx,&ly);
   tolua_pushnumber(tolua_S,(lua_Number)lx);
   tolua_pushnumber(tolua_S,(lua_Number)ly);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLocalVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLinearVelocityFromWorldPoint of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_getLinearVelocityFromWorldPoint00
static int tolua_openquick_tolua_quick_physics_QNodeProps_getLinearVelocityFromWorldPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float wx = ((float)  tolua_tonumber(tolua_S,2,0));
  float wy = ((float)  tolua_tonumber(tolua_S,3,0));
  float vx = ((float)  tolua_tonumber(tolua_S,4,0));
  float vy = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLinearVelocityFromWorldPoint'", NULL);
#endif
  {
   self->getLinearVelocityFromWorldPoint(wx,wy,&vx,&vy);
   tolua_pushnumber(tolua_S,(lua_Number)vx);
   tolua_pushnumber(tolua_S,(lua_Number)vy);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLinearVelocityFromWorldPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLinearVelocityFromLocalPoint of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_getLinearVelocityFromLocalPoint00
static int tolua_openquick_tolua_quick_physics_QNodeProps_getLinearVelocityFromLocalPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float lx = ((float)  tolua_tonumber(tolua_S,2,0));
  float ly = ((float)  tolua_tonumber(tolua_S,3,0));
  float vx = ((float)  tolua_tonumber(tolua_S,4,0));
  float vy = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLinearVelocityFromLocalPoint'", NULL);
#endif
  {
   self->getLinearVelocityFromLocalPoint(lx,ly,&vx,&vy);
   tolua_pushnumber(tolua_S,(lua_Number)vx);
   tolua_pushnumber(tolua_S,(lua_Number)vy);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLinearVelocityFromLocalPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLinearDamping of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_getLinearDamping00
static int tolua_openquick_tolua_quick_physics_QNodeProps_getLinearDamping00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLinearDamping'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getLinearDamping();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLinearDamping'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLinearDamping of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_setLinearDamping00
static int tolua_openquick_tolua_quick_physics_QNodeProps_setLinearDamping00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float linearDamping = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLinearDamping'", NULL);
#endif
  {
   self->setLinearDamping(linearDamping);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLinearDamping'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAngularDamping of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_getAngularDamping00
static int tolua_openquick_tolua_quick_physics_QNodeProps_getAngularDamping00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAngularDamping'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAngularDamping();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAngularDamping'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAngularDamping of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_setAngularDamping00
static int tolua_openquick_tolua_quick_physics_QNodeProps_setAngularDamping00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"float32",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float32 angularDamping = *((float32*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAngularDamping'", NULL);
#endif
  {
   self->setAngularDamping(angularDamping);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAngularDamping'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGravityScale of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_getGravityScale00
static int tolua_openquick_tolua_quick_physics_QNodeProps_getGravityScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGravityScale'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getGravityScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGravityScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGravityScale of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_setGravityScale00
static int tolua_openquick_tolua_quick_physics_QNodeProps_setGravityScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float scale = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGravityScale'", NULL);
#endif
  {
   self->setGravityScale(scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGravityScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLinearVelocity of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_setLinearVelocity00
static int tolua_openquick_tolua_quick_physics_QNodeProps_setLinearVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float ix = ((float)  tolua_tonumber(tolua_S,2,0));
  float iy = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLinearVelocity'", NULL);
#endif
  {
   self->setLinearVelocity(ix,iy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLinearVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLinearVelocity of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_getLinearVelocity00
static int tolua_openquick_tolua_quick_physics_QNodeProps_getLinearVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float vx = ((float)  tolua_tonumber(tolua_S,2,0));
  float vy = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLinearVelocity'", NULL);
#endif
  {
   self->getLinearVelocity(&vx,&vy);
   tolua_pushnumber(tolua_S,(lua_Number)vx);
   tolua_pushnumber(tolua_S,(lua_Number)vy);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLinearVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTransform of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_setTransform00
static int tolua_openquick_tolua_quick_physics_QNodeProps_setTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  float ix = ((float)  tolua_tonumber(tolua_S,2,0));
  float iy = ((float)  tolua_tonumber(tolua_S,3,0));
  float iz = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTransform'", NULL);
#endif
  {
   self->setTransform(ix,iy,iz);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: friction of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QNodeProps_friction
static int tolua_get_quick__physics__QNodeProps_friction(lua_State* tolua_S)
{
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'friction'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->friction);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: friction of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QNodeProps_friction
static int tolua_set_quick__physics__QNodeProps_friction(lua_State* tolua_S)
{
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'friction'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->friction = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: density of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QNodeProps_density
static int tolua_get_quick__physics__QNodeProps_density(lua_State* tolua_S)
{
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'density'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->density);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: density of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QNodeProps_density
static int tolua_set_quick__physics__QNodeProps_density(lua_State* tolua_S)
{
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'density'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->density = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: restitution of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QNodeProps_restitution
static int tolua_get_quick__physics__QNodeProps_restitution(lua_State* tolua_S)
{
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'restitution'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->restitution);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: restitution of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QNodeProps_restitution
static int tolua_set_quick__physics__QNodeProps_restitution(lua_State* tolua_S)
{
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'restitution'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->restitution = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: radius of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QNodeProps_radius
static int tolua_get_quick__physics__QNodeProps_radius(lua_State* tolua_S)
{
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'radius'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->radius);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: radius of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QNodeProps_radius
static int tolua_set_quick__physics__QNodeProps_radius(lua_State* tolua_S)
{
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'radius'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->radius = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QNodeProps_type
static int tolua_get_quick__physics__QNodeProps_type(lua_State* tolua_S)
{
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QNodeProps_type
static int tolua_set_quick__physics__QNodeProps_type(lua_State* tolua_S)
{
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_isSensor of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_get_isSensor00
static int tolua_openquick_tolua_quick_physics_QNodeProps_get_isSensor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_isSensor'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->get_isSensor();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_isSensor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set_isSensor of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_physics_QNodeProps_set_isSensor00
static int tolua_openquick_tolua_quick_physics_QNodeProps_set_isSensor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::physics::QNodeProps",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
  bool v = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_isSensor'", NULL);
#endif
  {
   self->set_isSensor(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_isSensor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: debugDraw of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QNodeProps_debugDraw
static int tolua_get_quick__physics__QNodeProps_debugDraw(lua_State* tolua_S)
{
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'debugDraw'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->debugDraw);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: debugDraw of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QNodeProps_debugDraw
static int tolua_set_quick__physics__QNodeProps_debugDraw(lua_State* tolua_S)
{
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'debugDraw'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->debugDraw = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: debugDrawColor of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_get_quick__physics__QNodeProps_debugDrawColor
static int tolua_get_quick__physics__QNodeProps_debugDrawColor(lua_State* tolua_S)
{
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'debugDrawColor'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->debugDrawColor,"quick::QColor");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: debugDrawColor of class  quick::physics::QNodeProps */
#ifndef TOLUA_DISABLE_tolua_set_quick__physics__QNodeProps_debugDrawColor
static int tolua_set_quick__physics__QNodeProps_debugDrawColor(lua_State* tolua_S)
{
  quick::physics::QNodeProps* self = (quick::physics::QNodeProps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'debugDrawColor'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QColor",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->debugDrawColor = *((quick::QColor*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: _getToLuaClassName of class  quick::QRect */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRect__getToLuaClassName00
static int tolua_openquick_tolua_quick_QRect__getToLuaClassName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRect* self = (quick::QRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_getToLuaClassName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->_getToLuaClassName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_getToLuaClassName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QRect */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRect___tostring00
static int tolua_openquick_tolua_quick_QRect___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRect* self = (quick::QRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QRect */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRect___serialize00
static int tolua_openquick_tolua_quick_QRect___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRect* self = (quick::QRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QRect */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRect_new00
static int tolua_openquick_tolua_quick_QRect_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QRect* tolua_ret = (quick::QRect*)  Mtolua_new((quick::QRect)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QRect");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QRect */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRect_new00_local
static int tolua_openquick_tolua_quick_QRect_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QRect* tolua_ret = (quick::QRect*)  Mtolua_new((quick::QRect)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QRect */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRect_delete00
static int tolua_openquick_tolua_quick_QRect_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRect* self = (quick::QRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  quick::QRect */
#ifndef TOLUA_DISABLE_tolua_get_quick__QRect_x
static int tolua_get_quick__QRect_x(lua_State* tolua_S)
{
  quick::QRect* self = (quick::QRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  quick::QRect */
#ifndef TOLUA_DISABLE_tolua_set_quick__QRect_x
static int tolua_set_quick__QRect_x(lua_State* tolua_S)
{
  quick::QRect* self = (quick::QRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  quick::QRect */
#ifndef TOLUA_DISABLE_tolua_get_quick__QRect_y
static int tolua_get_quick__QRect_y(lua_State* tolua_S)
{
  quick::QRect* self = (quick::QRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  quick::QRect */
#ifndef TOLUA_DISABLE_tolua_set_quick__QRect_y
static int tolua_set_quick__QRect_y(lua_State* tolua_S)
{
  quick::QRect* self = (quick::QRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: w of class  quick::QRect */
#ifndef TOLUA_DISABLE_tolua_get_quick__QRect_w
static int tolua_get_quick__QRect_w(lua_State* tolua_S)
{
  quick::QRect* self = (quick::QRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'w'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->w);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: w of class  quick::QRect */
#ifndef TOLUA_DISABLE_tolua_set_quick__QRect_w
static int tolua_set_quick__QRect_w(lua_State* tolua_S)
{
  quick::QRect* self = (quick::QRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'w'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->w = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: h of class  quick::QRect */
#ifndef TOLUA_DISABLE_tolua_get_quick__QRect_h
static int tolua_get_quick__QRect_h(lua_State* tolua_S)
{
  quick::QRect* self = (quick::QRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'h'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->h);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: h of class  quick::QRect */
#ifndef TOLUA_DISABLE_tolua_set_quick__QRect_h
static int tolua_set_quick__QRect_h(lua_State* tolua_S)
{
  quick::QRect* self = (quick::QRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'h'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->h = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: _getToLuaClassName of class  quick::QRectangle */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRectangle__getToLuaClassName00
static int tolua_openquick_tolua_quick_QRectangle__getToLuaClassName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRectangle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRectangle* self = (quick::QRectangle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_getToLuaClassName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->_getToLuaClassName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_getToLuaClassName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QRectangle */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRectangle___tostring00
static int tolua_openquick_tolua_quick_QRectangle___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRectangle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRectangle* self = (quick::QRectangle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QRectangle */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRectangle___serialize00
static int tolua_openquick_tolua_quick_QRectangle___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRectangle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRectangle* self = (quick::QRectangle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QRectangle */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRectangle_new00
static int tolua_openquick_tolua_quick_QRectangle_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QRectangle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QRectangle* tolua_ret = (quick::QRectangle*)  Mtolua_new((quick::QRectangle)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QRectangle");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QRectangle */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRectangle_new00_local
static int tolua_openquick_tolua_quick_QRectangle_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QRectangle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QRectangle* tolua_ret = (quick::QRectangle*)  Mtolua_new((quick::QRectangle)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QRectangle");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QRectangle */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRectangle_delete00
static int tolua_openquick_tolua_quick_QRectangle_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRectangle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRectangle* self = (quick::QRectangle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sync of class  quick::QRectangle */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRectangle_sync00
static int tolua_openquick_tolua_quick_QRectangle_sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRectangle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRectangle* self = (quick::QRectangle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sync'", NULL);
#endif
  {
   self->sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _getToLuaClassName of class  quick::QRenderTexture */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRenderTexture__getToLuaClassName00
static int tolua_openquick_tolua_quick_QRenderTexture__getToLuaClassName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRenderTexture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRenderTexture* self = (quick::QRenderTexture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_getToLuaClassName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->_getToLuaClassName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_getToLuaClassName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QRenderTexture */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRenderTexture_new00
static int tolua_openquick_tolua_quick_QRenderTexture_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QRenderTexture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  int eFormat = ((int)  tolua_tonumber(tolua_S,4,0));
  unsigned int uDepthStencilFormat = ((unsigned int)  tolua_tonumber(tolua_S,5,0));
  int x = ((int)  tolua_tonumber(tolua_S,6,0));
  int y = ((int)  tolua_tonumber(tolua_S,7,0));
  {
   quick::QRenderTexture* tolua_ret = (quick::QRenderTexture*)  Mtolua_new((quick::QRenderTexture)(w,h,eFormat,uDepthStencilFormat,x,y));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QRenderTexture");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QRenderTexture */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRenderTexture_new00_local
static int tolua_openquick_tolua_quick_QRenderTexture_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QRenderTexture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  int eFormat = ((int)  tolua_tonumber(tolua_S,4,0));
  unsigned int uDepthStencilFormat = ((unsigned int)  tolua_tonumber(tolua_S,5,0));
  int x = ((int)  tolua_tonumber(tolua_S,6,0));
  int y = ((int)  tolua_tonumber(tolua_S,7,0));
  {
   quick::QRenderTexture* tolua_ret = (quick::QRenderTexture*)  Mtolua_new((quick::QRenderTexture)(w,h,eFormat,uDepthStencilFormat,x,y));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QRenderTexture");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QRenderTexture */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRenderTexture_delete00
static int tolua_openquick_tolua_quick_QRenderTexture_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRenderTexture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRenderTexture* self = (quick::QRenderTexture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QRenderTexture */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRenderTexture___serialize00
static int tolua_openquick_tolua_quick_QRenderTexture___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRenderTexture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRenderTexture* self = (quick::QRenderTexture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _getSprite of class  quick::QRenderTexture */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRenderTexture__getSprite00
static int tolua_openquick_tolua_quick_QRenderTexture__getSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRenderTexture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRenderTexture* self = (quick::QRenderTexture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_getSprite'", NULL);
#endif
  {
   quick::QSprite* tolua_ret = (quick::QSprite*)  self->_getSprite();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_getSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sync of class  quick::QRenderTexture */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRenderTexture_sync00
static int tolua_openquick_tolua_quick_QRenderTexture_sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRenderTexture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRenderTexture* self = (quick::QRenderTexture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sync'", NULL);
#endif
  {
   self->sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: begin of class  quick::QRenderTexture */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRenderTexture_begin00
static int tolua_openquick_tolua_quick_QRenderTexture_begin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRenderTexture",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRenderTexture* self = (quick::QRenderTexture*)  tolua_tousertype(tolua_S,1,0);
  quick::QColor* clear = ((quick::QColor*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'begin'", NULL);
#endif
  {
   self->begin(clear);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'begin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: endToLua of class  quick::QRenderTexture */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRenderTexture_endToLua00
static int tolua_openquick_tolua_quick_QRenderTexture_endToLua00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRenderTexture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRenderTexture* self = (quick::QRenderTexture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'endToLua'", NULL);
#endif
  {
   self->endToLua();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'endToLua'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: finish of class  quick::QRenderTexture */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRenderTexture_finish00
static int tolua_openquick_tolua_quick_QRenderTexture_finish00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRenderTexture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRenderTexture* self = (quick::QRenderTexture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'finish'", NULL);
#endif
  {
   self->finish();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'finish'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: saveToFile of class  quick::QRenderTexture */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRenderTexture_saveToFile00
static int tolua_openquick_tolua_quick_QRenderTexture_saveToFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRenderTexture",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRenderTexture* self = (quick::QRenderTexture*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'saveToFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->saveToFile(name);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'saveToFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSprite of class  quick::QRenderTexture */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRenderTexture_setSprite00
static int tolua_openquick_tolua_quick_QRenderTexture_setSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRenderTexture",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRenderTexture* self = (quick::QRenderTexture*)  tolua_tousertype(tolua_S,1,0);
  quick::QSprite* var = ((quick::QSprite*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSprite'", NULL);
#endif
  {
   self->setSprite(var);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  quick::QRenderTexture */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QRenderTexture_clear00
static int tolua_openquick_tolua_quick_QRenderTexture_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QRenderTexture",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QRenderTexture* self = (quick::QRenderTexture*)  tolua_tousertype(tolua_S,1,0);
  quick::QColor* color = ((quick::QColor*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear'", NULL);
#endif
  {
   self->clear(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: autodraw of class  quick::QRenderTexture */
#ifndef TOLUA_DISABLE_tolua_get_quick__QRenderTexture_autodraw
static int tolua_get_quick__QRenderTexture_autodraw(lua_State* tolua_S)
{
  quick::QRenderTexture* self = (quick::QRenderTexture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'autodraw'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->get_autodraw());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: autodraw of class  quick::QRenderTexture */
#ifndef TOLUA_DISABLE_tolua_set_quick__QRenderTexture_autodraw
static int tolua_set_quick__QRenderTexture_autodraw(lua_State* tolua_S)
{
  quick::QRenderTexture* self = (quick::QRenderTexture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'autodraw'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_autodraw(((bool)  tolua_toboolean(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: _getToLuaClassName of class  quick::QScene */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QScene__getToLuaClassName00
static int tolua_openquick_tolua_quick_QScene__getToLuaClassName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QScene* self = (quick::QScene*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_getToLuaClassName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->_getToLuaClassName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_getToLuaClassName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QScene */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QScene___tostring00
static int tolua_openquick_tolua_quick_QScene___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QScene* self = (quick::QScene*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QScene */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QScene___serialize00
static int tolua_openquick_tolua_quick_QScene___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QScene* self = (quick::QScene*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QScene */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QScene_new00
static int tolua_openquick_tolua_quick_QScene_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QScene* tolua_ret = (quick::QScene*)  Mtolua_new((quick::QScene)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QScene");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QScene */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QScene_new00_local
static int tolua_openquick_tolua_quick_QScene_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QScene* tolua_ret = (quick::QScene*)  Mtolua_new((quick::QScene)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QScene");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QScene */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QScene_delete00
static int tolua_openquick_tolua_quick_QScene_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QScene* self = (quick::QScene*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _init of class  quick::QScene */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QScene__init00
static int tolua_openquick_tolua_quick_QScene__init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QScene",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QScene* self = (quick::QScene*)  tolua_tousertype(tolua_S,1,0);
  bool bAddScene = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_init'", NULL);
#endif
  {
   self->_init(bAddScene);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _getToLuaClassName of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSprite__getToLuaClassName00
static int tolua_openquick_tolua_quick_QSprite__getToLuaClassName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_getToLuaClassName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->_getToLuaClassName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_getToLuaClassName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSprite___tostring00
static int tolua_openquick_tolua_quick_QSprite___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSprite___serialize00
static int tolua_openquick_tolua_quick_QSprite___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSprite_new00
static int tolua_openquick_tolua_quick_QSprite_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  bool createCCNode = ((bool)  tolua_toboolean(tolua_S,2,true));
  {
   quick::QSprite* tolua_ret = (quick::QSprite*)  Mtolua_new((quick::QSprite)(createCCNode));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSprite_new00_local
static int tolua_openquick_tolua_quick_QSprite_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  bool createCCNode = ((bool)  tolua_toboolean(tolua_S,2,true));
  {
   quick::QSprite* tolua_ret = (quick::QSprite*)  Mtolua_new((quick::QSprite)(createCCNode));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QSprite");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSprite_new01
static int tolua_openquick_tolua_quick_QSprite_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCSprite* sprite = ((CCSprite*)  tolua_tousertype(tolua_S,2,0));
  {
   quick::QSprite* tolua_ret = (quick::QSprite*)  Mtolua_new((quick::QSprite)(sprite));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QSprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_openquick_tolua_quick_QSprite_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSprite_new01_local
static int tolua_openquick_tolua_quick_QSprite_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCSprite* sprite = ((CCSprite*)  tolua_tousertype(tolua_S,2,0));
  {
   quick::QSprite* tolua_ret = (quick::QSprite*)  Mtolua_new((quick::QSprite)(sprite));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QSprite");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_openquick_tolua_quick_QSprite_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSprite_delete00
static int tolua_openquick_tolua_quick_QSprite_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _play of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSprite__play00
static int tolua_openquick_tolua_quick_QSprite__play00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
  int startFrame = ((int)  tolua_tonumber(tolua_S,2,0));
  int loopCount = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_play'", NULL);
#endif
  {
   self->_play(startFrame,loopCount);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_play'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sync of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSprite_sync00
static int tolua_openquick_tolua_quick_QSprite_sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sync'", NULL);
#endif
  {
   self->sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pause of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSprite_pause00
static int tolua_openquick_tolua_quick_QSprite_pause00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pause'", NULL);
#endif
  {
   self->pause();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pause'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFrame of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSprite_setFrame00
static int tolua_openquick_tolua_quick_QSprite_setFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
  int frame = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFrame'", NULL);
#endif
  {
   self->setFrame(frame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnimation of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSprite_setAnimation00
static int tolua_openquick_tolua_quick_QSprite_setAnimation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"quick::QAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
  quick::QAnimation* anim = ((quick::QAnimation*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnimation'", NULL);
#endif
  {
   self->setAnimation(anim);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnimation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: xFlip of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_get_quick__QSprite_xFlip
static int tolua_get_quick__QSprite_xFlip(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xFlip'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->xFlip);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: xFlip of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_set_quick__QSprite_xFlip
static int tolua_set_quick__QSprite_xFlip(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xFlip'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->xFlip = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: yFlip of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_get_quick__QSprite_yFlip
static int tolua_get_quick__QSprite_yFlip(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'yFlip'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->yFlip);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: yFlip of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_set_quick__QSprite_yFlip
static int tolua_set_quick__QSprite_yFlip(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'yFlip'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->yFlip = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: uvRect of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_get_quick__QSprite_uvRect
static int tolua_get_quick__QSprite_uvRect(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uvRect'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->uvRect,"quick::QRect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: uvRect of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_set_quick__QSprite_uvRect
static int tolua_set_quick__QSprite_uvRect(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uvRect'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QRect",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->uvRect = *((quick::QRect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: blendMode of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_get_quick__QSprite_blendMode
static int tolua_get_quick__QSprite_blendMode(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'blendMode'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->blendMode);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: blendMode of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_set_quick__QSprite_blendMode
static int tolua_set_quick__QSprite_blendMode(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'blendMode'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->blendMode = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timeScale of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_get_quick__QSprite_timeScale
static int tolua_get_quick__QSprite_timeScale(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timeScale'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timeScale);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timeScale of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_set_quick__QSprite_timeScale
static int tolua_set_quick__QSprite_timeScale(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timeScale'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timeScale = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: debugDrawTextureRegion of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_get_quick__QSprite_debugDrawTextureRegion
static int tolua_get_quick__QSprite_debugDrawTextureRegion(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'debugDrawTextureRegion'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->debugDrawTextureRegion);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: debugDrawTextureRegion of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_set_quick__QSprite_debugDrawTextureRegion
static int tolua_set_quick__QSprite_debugDrawTextureRegion(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'debugDrawTextureRegion'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->debugDrawTextureRegion = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: raisesAnimEvents of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_get_quick__QSprite_raisesAnimEvents
static int tolua_get_quick__QSprite_raisesAnimEvents(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'raisesAnimEvents'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->raisesAnimEvents);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: raisesAnimEvents of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_set_quick__QSprite_raisesAnimEvents
static int tolua_set_quick__QSprite_raisesAnimEvents(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'raisesAnimEvents'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->raisesAnimEvents = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: filter of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_get_quick__QSprite_filter
static int tolua_get_quick__QSprite_filter(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'filter'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->filter,"quick::QFilterData");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: filter of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_set_quick__QSprite_filter
static int tolua_set_quick__QSprite_filter(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'filter'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QFilterData",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->filter = *((quick::QFilterData*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAtlas of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSprite_getAtlas00
static int tolua_openquick_tolua_quick_QSprite_getAtlas00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const quick::QSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const quick::QSprite* self = (const quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAtlas'", NULL);
#endif
  {
   quick::QAtlas* tolua_ret = (quick::QAtlas*)  self->getAtlas();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAtlas'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: isPlaying of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_get_quick__QSprite_isPlaying
static int tolua_get_quick__QSprite_isPlaying(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'isPlaying'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->get_isPlaying());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: isPlaying of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_set_quick__QSprite_isPlaying
static int tolua_set_quick__QSprite_isPlaying(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'isPlaying'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_isPlaying(((bool)  tolua_toboolean(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: frame of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_get_quick__QSprite_frame
static int tolua_get_quick__QSprite_frame(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'frame'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_frame());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: frame of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_set_quick__QSprite_frame
static int tolua_set_quick__QSprite_frame(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'frame'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_frame(((int)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: animation of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_get_quick__QSprite_animation_ptr
static int tolua_get_quick__QSprite_animation_ptr(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'animation'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->get_animation(),"quick::QAnimation");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: animation of class  quick::QSprite */
#ifndef TOLUA_DISABLE_tolua_set_quick__QSprite_animation_ptr
static int tolua_set_quick__QSprite_animation_ptr(lua_State* tolua_S)
{
  quick::QSprite* self = (quick::QSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'animation'",NULL);
  if (!tolua_isusertype(tolua_S,2,"quick::QAnimation",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_animation(((quick::QAnimation*)  tolua_tousertype(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: quick::lsqlite3::instantiate_lsqlite3_global */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_lsqlite3_instantiate_lsqlite3_global00
static int tolua_openquick_tolua_quick_lsqlite3_instantiate_lsqlite3_global00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_State* luaState =  tolua_S;
  {
   int tolua_ret = (int)  quick::lsqlite3::instantiate_lsqlite3_global(luaState);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'instantiate_lsqlite3_global'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSystem___tostring00
static int tolua_openquick_tolua_quick_QSystem___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSystem___serialize00
static int tolua_openquick_tolua_quick_QSystem___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSystem_new00
static int tolua_openquick_tolua_quick_QSystem_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QSystem* tolua_ret = (quick::QSystem*)  Mtolua_new((quick::QSystem)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QSystem");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSystem_new00_local
static int tolua_openquick_tolua_quick_QSystem_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QSystem* tolua_ret = (quick::QSystem*)  Mtolua_new((quick::QSystem)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QSystem");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSystem_delete00
static int tolua_openquick_tolua_quick_QSystem_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _sendTouchEvent of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSystem__sendTouchEvent00
static int tolua_openquick_tolua_quick_QSystem__sendTouchEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  const char* phase = ((const char*)  tolua_tostring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_sendTouchEvent'", NULL);
#endif
  {
   self->_sendTouchEvent(x,y,phase);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_sendTouchEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _getMemoryStats of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSystem__getMemoryStats00
static int tolua_openquick_tolua_quick_QSystem__getMemoryStats00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_getMemoryStats'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->_getMemoryStats();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_getMemoryStats'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _timersPaused of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_get_quick__QSystem__timersPaused
static int tolua_get_quick__QSystem__timersPaused(lua_State* tolua_S)
{
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_timersPaused'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->_timersPaused);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _timersPaused of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_set_quick__QSystem__timersPaused
static int tolua_set_quick__QSystem__timersPaused(lua_State* tolua_S)
{
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_timersPaused'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_timersPaused = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _timersTimeScale of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_get_quick__QSystem__timersTimeScale
static int tolua_get_quick__QSystem__timersTimeScale(lua_State* tolua_S)
{
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_timersTimeScale'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->_timersTimeScale);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _timersTimeScale of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_set_quick__QSystem__timersTimeScale
static int tolua_set_quick__QSystem__timersTimeScale(lua_State* tolua_S)
{
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_timersTimeScale'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_timersTimeScale = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: pauseTimers of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSystem_pauseTimers00
static int tolua_openquick_tolua_quick_QSystem_pauseTimers00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pauseTimers'", NULL);
#endif
  {
   self->pauseTimers();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pauseTimers'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resumeTimers of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSystem_resumeTimers00
static int tolua_openquick_tolua_quick_QSystem_resumeTimers00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resumeTimers'", NULL);
#endif
  {
   self->resumeTimers();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resumeTimers'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTimersTimeScale of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSystem_setTimersTimeScale00
static int tolua_openquick_tolua_quick_QSystem_setTimersTimeScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
  float f = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTimersTimeScale'", NULL);
#endif
  {
   self->setTimersTimeScale(f);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTimersTimeScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTimersTimeScale of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSystem_getTimersTimeScale00
static int tolua_openquick_tolua_quick_QSystem_getTimersTimeScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTimersTimeScale'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getTimersTimeScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTimersTimeScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFrameRateLimit of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSystem_setFrameRateLimit00
static int tolua_openquick_tolua_quick_QSystem_setFrameRateLimit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSystem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
  int fps = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFrameRateLimit'", NULL);
#endif
  {
   self->setFrameRateLimit(fps);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFrameRateLimit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: gameTime of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_get_quick__QSystem_gameTime
static int tolua_get_quick__QSystem_gameTime(lua_State* tolua_S)
{
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'gameTime'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->gameTime);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: gameTime of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_set_quick__QSystem_gameTime
static int tolua_set_quick__QSystem_gameTime(lua_State* tolua_S)
{
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'gameTime'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->gameTime = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: deltaTime of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_get_quick__QSystem_deltaTime
static int tolua_get_quick__QSystem_deltaTime(lua_State* tolua_S)
{
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'deltaTime'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->deltaTime);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: deltaTime of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_set_quick__QSystem_deltaTime
static int tolua_set_quick__QSystem_deltaTime(lua_State* tolua_S)
{
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'deltaTime'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->deltaTime = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: quit of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSystem_quit00
static int tolua_openquick_tolua_quick_QSystem_quit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'quit'", NULL);
#endif
  {
   self->quit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'quit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: yield of class  quick::QSystem */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QSystem_yield00
static int tolua_openquick_tolua_quick_QSystem_yield00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QSystem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QSystem* self = (quick::QSystem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'yield'", NULL);
#endif
  {
   self->yield();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'yield'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QTiledMapObject */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapObject_new00
static int tolua_openquick_tolua_quick_QTiledMapObject_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QTiledMapObject",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cocos2d::CCDictionary* pCCDict = ((cocos2d::CCDictionary*)  tolua_tousertype(tolua_S,2,0));
  {
   quick::QTiledMapObject* tolua_ret = (quick::QTiledMapObject*)  Mtolua_new((quick::QTiledMapObject)(pCCDict));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QTiledMapObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QTiledMapObject */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapObject_new00_local
static int tolua_openquick_tolua_quick_QTiledMapObject_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QTiledMapObject",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cocos2d::CCDictionary* pCCDict = ((cocos2d::CCDictionary*)  tolua_tousertype(tolua_S,2,0));
  {
   quick::QTiledMapObject* tolua_ret = (quick::QTiledMapObject*)  Mtolua_new((quick::QTiledMapObject)(pCCDict));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QTiledMapObject");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QTiledMapObject */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapObject_delete00
static int tolua_openquick_tolua_quick_QTiledMapObject_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapObject* self = (quick::QTiledMapObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getProperty of class  quick::QTiledMapObject */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapObject_getProperty00
static int tolua_openquick_tolua_quick_QTiledMapObject_getProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapObject",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapObject* self = (quick::QTiledMapObject*)  tolua_tousertype(tolua_S,1,0);
  const char* propname = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getProperty'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getProperty(propname);
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: name of class  quick::QTiledMapObject */
#ifndef TOLUA_DISABLE_tolua_get_quick__QTiledMapObject_name
static int tolua_get_quick__QTiledMapObject_name(lua_State* tolua_S)
{
  quick::QTiledMapObject* self = (quick::QTiledMapObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'name'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->name);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: name of class  quick::QTiledMapObject */
#ifndef TOLUA_DISABLE_tolua_set_quick__QTiledMapObject_name
static int tolua_set_quick__QTiledMapObject_name(lua_State* tolua_S)
{
  quick::QTiledMapObject* self = (quick::QTiledMapObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'name'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->name = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_CCDict of class  quick::QTiledMapObject */
#ifndef TOLUA_DISABLE_tolua_get_quick__QTiledMapObject_m_CCDict_ptr
static int tolua_get_quick__QTiledMapObject_m_CCDict_ptr(lua_State* tolua_S)
{
  quick::QTiledMapObject* self = (quick::QTiledMapObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_CCDict'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->m_CCDict,"cocos2d::CCDictionary");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_CCDict of class  quick::QTiledMapObject */
#ifndef TOLUA_DISABLE_tolua_set_quick__QTiledMapObject_m_CCDict_ptr
static int tolua_set_quick__QTiledMapObject_m_CCDict_ptr(lua_State* tolua_S)
{
  quick::QTiledMapObject* self = (quick::QTiledMapObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_CCDict'",NULL);
  if (!tolua_isusertype(tolua_S,2,"cocos2d::CCDictionary",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_CCDict = ((cocos2d::CCDictionary*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QTiledMapObjectGroup */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapObjectGroup_new00
static int tolua_openquick_tolua_quick_QTiledMapObjectGroup_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QTiledMapObjectGroup",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCTMXObjectGroup",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cocos2d::CCTMXObjectGroup* pCCObject = ((cocos2d::CCTMXObjectGroup*)  tolua_tousertype(tolua_S,2,0));
  {
   quick::QTiledMapObjectGroup* tolua_ret = (quick::QTiledMapObjectGroup*)  Mtolua_new((quick::QTiledMapObjectGroup)(pCCObject));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QTiledMapObjectGroup");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QTiledMapObjectGroup */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapObjectGroup_new00_local
static int tolua_openquick_tolua_quick_QTiledMapObjectGroup_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QTiledMapObjectGroup",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCTMXObjectGroup",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cocos2d::CCTMXObjectGroup* pCCObject = ((cocos2d::CCTMXObjectGroup*)  tolua_tousertype(tolua_S,2,0));
  {
   quick::QTiledMapObjectGroup* tolua_ret = (quick::QTiledMapObjectGroup*)  Mtolua_new((quick::QTiledMapObjectGroup)(pCCObject));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QTiledMapObjectGroup");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QTiledMapObjectGroup */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapObjectGroup_delete00
static int tolua_openquick_tolua_quick_QTiledMapObjectGroup_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapObjectGroup",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapObjectGroup* self = (quick::QTiledMapObjectGroup*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getProperty of class  quick::QTiledMapObjectGroup */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapObjectGroup_getProperty00
static int tolua_openquick_tolua_quick_QTiledMapObjectGroup_getProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapObjectGroup",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapObjectGroup* self = (quick::QTiledMapObjectGroup*)  tolua_tousertype(tolua_S,1,0);
  const char* propname = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getProperty'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getProperty(propname);
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getObjectNamed of class  quick::QTiledMapObjectGroup */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapObjectGroup_getObjectNamed00
static int tolua_openquick_tolua_quick_QTiledMapObjectGroup_getObjectNamed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapObjectGroup",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapObjectGroup* self = (quick::QTiledMapObjectGroup*)  tolua_tousertype(tolua_S,1,0);
  const char* objname = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getObjectNamed'", NULL);
#endif
  {
   quick::QTiledMapObject* tolua_ret = (quick::QTiledMapObject*)  self->getObjectNamed(objname);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QTiledMapObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getObjectNamed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: name of class  quick::QTiledMapObjectGroup */
#ifndef TOLUA_DISABLE_tolua_get_quick__QTiledMapObjectGroup_name
static int tolua_get_quick__QTiledMapObjectGroup_name(lua_State* tolua_S)
{
  quick::QTiledMapObjectGroup* self = (quick::QTiledMapObjectGroup*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'name'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->name);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: name of class  quick::QTiledMapObjectGroup */
#ifndef TOLUA_DISABLE_tolua_set_quick__QTiledMapObjectGroup_name
static int tolua_set_quick__QTiledMapObjectGroup_name(lua_State* tolua_S)
{
  quick::QTiledMapObjectGroup* self = (quick::QTiledMapObjectGroup*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'name'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->name = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_CCObject of class  quick::QTiledMapObjectGroup */
#ifndef TOLUA_DISABLE_tolua_get_quick__QTiledMapObjectGroup_m_CCObject_ptr
static int tolua_get_quick__QTiledMapObjectGroup_m_CCObject_ptr(lua_State* tolua_S)
{
  quick::QTiledMapObjectGroup* self = (quick::QTiledMapObjectGroup*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_CCObject'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->m_CCObject,"cocos2d::CCTMXObjectGroup");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_CCObject of class  quick::QTiledMapObjectGroup */
#ifndef TOLUA_DISABLE_tolua_set_quick__QTiledMapObjectGroup_m_CCObject_ptr
static int tolua_set_quick__QTiledMapObjectGroup_m_CCObject_ptr(lua_State* tolua_S)
{
  quick::QTiledMapObjectGroup* self = (quick::QTiledMapObjectGroup*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_CCObject'",NULL);
  if (!tolua_isusertype(tolua_S,2,"cocos2d::CCTMXObjectGroup",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_CCObject = ((cocos2d::CCTMXObjectGroup*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_TiledMapObjects of class  quick::QTiledMapObjectGroup */
#ifndef TOLUA_DISABLE_tolua_get_quick__QTiledMapObjectGroup_m_TiledMapObjects
static int tolua_get_quick__QTiledMapObjectGroup_m_TiledMapObjects(lua_State* tolua_S)
{
  quick::QTiledMapObjectGroup* self = (quick::QTiledMapObjectGroup*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_TiledMapObjects'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->m_TiledMapObjects,"std::vector<quick::QTiledMapObject*>");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_TiledMapObjects of class  quick::QTiledMapObjectGroup */
#ifndef TOLUA_DISABLE_tolua_set_quick__QTiledMapObjectGroup_m_TiledMapObjects
static int tolua_set_quick__QTiledMapObjectGroup_m_TiledMapObjects(lua_State* tolua_S)
{
  quick::QTiledMapObjectGroup* self = (quick::QTiledMapObjectGroup*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_TiledMapObjects'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"std::vector<quick::QTiledMapObject*>",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_TiledMapObjects = *((std::vector<quick::QTiledMapObject*>*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: _getToLuaClassName of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapLayer__getToLuaClassName00
static int tolua_openquick_tolua_quick_QTiledMapLayer__getToLuaClassName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_getToLuaClassName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->_getToLuaClassName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_getToLuaClassName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapLayer___tostring00
static int tolua_openquick_tolua_quick_QTiledMapLayer___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapLayer___serialize00
static int tolua_openquick_tolua_quick_QTiledMapLayer___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapLayer_new00
static int tolua_openquick_tolua_quick_QTiledMapLayer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QTiledMapLayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCTMXLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cocos2d::CCTMXLayer* pLayer = ((cocos2d::CCTMXLayer*)  tolua_tousertype(tolua_S,2,0));
  {
   quick::QTiledMapLayer* tolua_ret = (quick::QTiledMapLayer*)  Mtolua_new((quick::QTiledMapLayer)(pLayer));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QTiledMapLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapLayer_new00_local
static int tolua_openquick_tolua_quick_QTiledMapLayer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QTiledMapLayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCTMXLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cocos2d::CCTMXLayer* pLayer = ((cocos2d::CCTMXLayer*)  tolua_tousertype(tolua_S,2,0));
  {
   quick::QTiledMapLayer* tolua_ret = (quick::QTiledMapLayer*)  Mtolua_new((quick::QTiledMapLayer)(pLayer));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QTiledMapLayer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapLayer_delete00
static int tolua_openquick_tolua_quick_QTiledMapLayer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _activeQSprite of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_get_quick__QTiledMapLayer__activeQSprite_ptr
static int tolua_get_quick__QTiledMapLayer__activeQSprite_ptr(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)quick::QTiledMapLayer::_activeQSprite,"quick::QSprite");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _activeQSprite of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_set_quick__QTiledMapLayer__activeQSprite_ptr
static int tolua_set_quick__QTiledMapLayer__activeQSprite_ptr(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!tolua_isusertype(tolua_S,2,"quick::QSprite",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  quick::QTiledMapLayer::_activeQSprite = ((quick::QSprite*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: sync of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapLayer_sync00
static int tolua_openquick_tolua_quick_QTiledMapLayer_sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sync'", NULL);
#endif
  {
   self->sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reverseSync of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapLayer_reverseSync00
static int tolua_openquick_tolua_quick_QTiledMapLayer_reverseSync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reverseSync'", NULL);
#endif
  {
   self->reverseSync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reverseSync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: layerSize of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_get_quick__QTiledMapLayer_layerSize
static int tolua_get_quick__QTiledMapLayer_layerSize(lua_State* tolua_S)
{
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'layerSize'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->layerSize,"quick::QVec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: layerSize of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_set_quick__QTiledMapLayer_layerSize
static int tolua_set_quick__QTiledMapLayer_layerSize(lua_State* tolua_S)
{
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'layerSize'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QVec2",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->layerSize = *((quick::QVec2*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mapTileSize of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_get_quick__QTiledMapLayer_mapTileSize
static int tolua_get_quick__QTiledMapLayer_mapTileSize(lua_State* tolua_S)
{
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mapTileSize'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->mapTileSize,"quick::QVec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mapTileSize of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_set_quick__QTiledMapLayer_mapTileSize
static int tolua_set_quick__QTiledMapLayer_mapTileSize(lua_State* tolua_S)
{
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mapTileSize'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QVec2",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mapTileSize = *((quick::QVec2*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: layerOrientation of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_get_quick__QTiledMapLayer_layerOrientation
static int tolua_get_quick__QTiledMapLayer_layerOrientation(lua_State* tolua_S)
{
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'layerOrientation'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->layerOrientation);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: layerOrientation of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_set_quick__QTiledMapLayer_layerOrientation
static int tolua_set_quick__QTiledMapLayer_layerOrientation(lua_State* tolua_S)
{
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'layerOrientation'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->layerOrientation = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: releaseMap of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapLayer_releaseMap00
static int tolua_openquick_tolua_quick_QTiledMapLayer_releaseMap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'releaseMap'", NULL);
#endif
  {
   self->releaseMap();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'releaseMap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _checkSpriteAtGridRef of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapLayer__checkSpriteAtGridRef00
static int tolua_openquick_tolua_quick_QTiledMapLayer__checkSpriteAtGridRef00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_checkSpriteAtGridRef'", NULL);
#endif
  {
   quick::QSprite* tolua_ret = (quick::QSprite*)  self->_checkSpriteAtGridRef(x,y);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_checkSpriteAtGridRef'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _setActiveSpriteCCNode of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapLayer__setActiveSpriteCCNode00
static int tolua_openquick_tolua_quick_QTiledMapLayer__setActiveSpriteCCNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_setActiveSpriteCCNode'", NULL);
#endif
  {
   self->_setActiveSpriteCCNode();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_setActiveSpriteCCNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGIDAtGridRef of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapLayer_getGIDAtGridRef00
static int tolua_openquick_tolua_quick_QTiledMapLayer_getGIDAtGridRef00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  unsigned int flags = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGIDAtGridRef'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getGIDAtGridRef(x,y,&flags);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)flags);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGIDAtGridRef'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGIDAtGridRef of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapLayer_setGIDAtGridRef00
static int tolua_openquick_tolua_quick_QTiledMapLayer_setGIDAtGridRef00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  unsigned int gid = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  unsigned int flags = ((unsigned int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGIDAtGridRef'", NULL);
#endif
  {
   self->setGIDAtGridRef(x,y,gid,flags);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGIDAtGridRef'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _removeTileAtGridRef of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapLayer__removeTileAtGridRef00
static int tolua_openquick_tolua_quick_QTiledMapLayer__removeTileAtGridRef00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_removeTileAtGridRef'", NULL);
#endif
  {
   self->_removeTileAtGridRef(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_removeTileAtGridRef'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPosAtGridRef of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapLayer_getPosAtGridRef00
static int tolua_openquick_tolua_quick_QTiledMapLayer_getPosAtGridRef00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  float px = ((float)  tolua_tonumber(tolua_S,4,NULL));
  float py = ((float)  tolua_tonumber(tolua_S,5,NULL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosAtGridRef'", NULL);
#endif
  {
   self->getPosAtGridRef(x,y,&px,&py);
   tolua_pushnumber(tolua_S,(lua_Number)px);
   tolua_pushnumber(tolua_S,(lua_Number)py);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosAtGridRef'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setupTiles of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapLayer_setupTiles00
static int tolua_openquick_tolua_quick_QTiledMapLayer_setupTiles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setupTiles'", NULL);
#endif
  {
   self->setupTiles();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setupTiles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getProperty of class  quick::QTiledMapLayer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMapLayer_getProperty00
static int tolua_openquick_tolua_quick_QTiledMapLayer_getProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMapLayer",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMapLayer* self = (quick::QTiledMapLayer*)  tolua_tousertype(tolua_S,1,0);
  const char* propname = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getProperty'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getProperty(propname);
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _getToLuaClassName of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMap__getToLuaClassName00
static int tolua_openquick_tolua_quick_QTiledMap__getToLuaClassName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMap* self = (quick::QTiledMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_getToLuaClassName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->_getToLuaClassName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_getToLuaClassName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMap___tostring00
static int tolua_openquick_tolua_quick_QTiledMap___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMap* self = (quick::QTiledMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMap___serialize00
static int tolua_openquick_tolua_quick_QTiledMap___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMap* self = (quick::QTiledMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMap_new00
static int tolua_openquick_tolua_quick_QTiledMap_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QTiledMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QTiledMap* tolua_ret = (quick::QTiledMap*)  Mtolua_new((quick::QTiledMap)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QTiledMap");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMap_new00_local
static int tolua_openquick_tolua_quick_QTiledMap_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QTiledMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QTiledMap* tolua_ret = (quick::QTiledMap*)  Mtolua_new((quick::QTiledMap)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QTiledMap");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMap_delete00
static int tolua_openquick_tolua_quick_QTiledMap_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMap* self = (quick::QTiledMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _getCCNodeNumChildren of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMap__getCCNodeNumChildren00
static int tolua_openquick_tolua_quick_QTiledMap__getCCNodeNumChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMap* self = (quick::QTiledMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_getCCNodeNumChildren'", NULL);
#endif
  {
   int tolua_ret = (int)  self->_getCCNodeNumChildren();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_getCCNodeNumChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _createQTiledMapLayer of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMap__createQTiledMapLayer00
static int tolua_openquick_tolua_quick_QTiledMap__createQTiledMapLayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMap* self = (quick::QTiledMap*)  tolua_tousertype(tolua_S,1,0);
  int layerID = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_createQTiledMapLayer'", NULL);
#endif
  {
   quick::QTiledMapLayer* tolua_ret = (quick::QTiledMapLayer*)  self->_createQTiledMapLayer(layerID);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QTiledMapLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_createQTiledMapLayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sync of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMap_sync00
static int tolua_openquick_tolua_quick_QTiledMap_sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMap* self = (quick::QTiledMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sync'", NULL);
#endif
  {
   self->sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reverseSync of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMap_reverseSync00
static int tolua_openquick_tolua_quick_QTiledMap_reverseSync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMap* self = (quick::QTiledMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reverseSync'", NULL);
#endif
  {
   self->reverseSync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reverseSync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mapSize of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_get_quick__QTiledMap_mapSize
static int tolua_get_quick__QTiledMap_mapSize(lua_State* tolua_S)
{
  quick::QTiledMap* self = (quick::QTiledMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mapSize'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->mapSize,"quick::QVec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mapSize of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_set_quick__QTiledMap_mapSize
static int tolua_set_quick__QTiledMap_mapSize(lua_State* tolua_S)
{
  quick::QTiledMap* self = (quick::QTiledMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mapSize'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QVec2",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mapSize = *((quick::QVec2*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tileSize of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_get_quick__QTiledMap_tileSize
static int tolua_get_quick__QTiledMap_tileSize(lua_State* tolua_S)
{
  quick::QTiledMap* self = (quick::QTiledMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tileSize'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->tileSize,"quick::QVec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tileSize of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_set_quick__QTiledMap_tileSize
static int tolua_set_quick__QTiledMap_tileSize(lua_State* tolua_S)
{
  quick::QTiledMap* self = (quick::QTiledMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tileSize'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QVec2",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tileSize = *((quick::QVec2*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mapOrientation of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_get_quick__QTiledMap_mapOrientation
static int tolua_get_quick__QTiledMap_mapOrientation(lua_State* tolua_S)
{
  quick::QTiledMap* self = (quick::QTiledMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mapOrientation'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->mapOrientation);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mapOrientation of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_set_quick__QTiledMap_mapOrientation
static int tolua_set_quick__QTiledMap_mapOrientation(lua_State* tolua_S)
{
  quick::QTiledMap* self = (quick::QTiledMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mapOrientation'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mapOrientation = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMap_init00
static int tolua_openquick_tolua_quick_QTiledMap_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMap",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMap* self = (quick::QTiledMap*)  tolua_tousertype(tolua_S,1,0);
  const char* tmxFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   self->init(tmxFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLayerNamed of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMap_getLayerNamed00
static int tolua_openquick_tolua_quick_QTiledMap_getLayerNamed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMap",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMap* self = (quick::QTiledMap*)  tolua_tousertype(tolua_S,1,0);
  const char* layerName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLayerNamed'", NULL);
#endif
  {
   quick::QTiledMapLayer* tolua_ret = (quick::QTiledMapLayer*)  self->getLayerNamed(layerName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QTiledMapLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLayerNamed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getObjectGroupNamed of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMap_getObjectGroupNamed00
static int tolua_openquick_tolua_quick_QTiledMap_getObjectGroupNamed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMap",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMap* self = (quick::QTiledMap*)  tolua_tousertype(tolua_S,1,0);
  const char* groupName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getObjectGroupNamed'", NULL);
#endif
  {
   quick::QTiledMapObjectGroup* tolua_ret = (quick::QTiledMapObjectGroup*)  self->getObjectGroupNamed(groupName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QTiledMapObjectGroup");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getObjectGroupNamed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getProperty of class  quick::QTiledMap */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTiledMap_getProperty00
static int tolua_openquick_tolua_quick_QTiledMap_getProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTiledMap",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTiledMap* self = (quick::QTiledMap*)  tolua_tousertype(tolua_S,1,0);
  const char* propname = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getProperty'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getProperty(propname);
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QTimer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTimer_new00
static int tolua_openquick_tolua_quick_QTimer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QTimer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QTimer* tolua_ret = (quick::QTimer*)  Mtolua_new((quick::QTimer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QTimer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QTimer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTimer_new00_local
static int tolua_openquick_tolua_quick_QTimer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QTimer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QTimer* tolua_ret = (quick::QTimer*)  Mtolua_new((quick::QTimer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QTimer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QTimer */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTimer_delete00
static int tolua_openquick_tolua_quick_QTimer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTimer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTimer* self = (quick::QTimer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::linear */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_linear00
static int tolua_openquick_tolua_ease_linear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float value = ((float)  tolua_tonumber(tolua_S,2,1.0f));
  {
   float tolua_ret = (float)  ease::linear(time,value);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'linear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::one */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_one00
static int tolua_openquick_tolua_ease_one00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float value = ((float)  tolua_tonumber(tolua_S,2,1.0f));
  {
   float tolua_ret = (float)  ease::one(time,value);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'one'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::zero */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_zero00
static int tolua_openquick_tolua_ease_zero00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float value = ((float)  tolua_tonumber(tolua_S,2,1.0f));
  {
   float tolua_ret = (float)  ease::zero(time,value);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'zero'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::powIn */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_powIn00
static int tolua_openquick_tolua_ease_powIn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float power = ((float)  tolua_tonumber(tolua_S,2,2.0f));
  {
   float tolua_ret = (float)  ease::powIn(time,power);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'powIn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::powOut */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_powOut00
static int tolua_openquick_tolua_ease_powOut00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float power = ((float)  tolua_tonumber(tolua_S,2,2.0f));
  {
   float tolua_ret = (float)  ease::powOut(time,power);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'powOut'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::powInOut */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_powInOut00
static int tolua_openquick_tolua_ease_powInOut00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float power = ((float)  tolua_tonumber(tolua_S,2,2.0f));
  {
   float tolua_ret = (float)  ease::powInOut(time,power);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'powInOut'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::expIn */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_expIn00
static int tolua_openquick_tolua_ease_expIn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float value = ((float)  tolua_tonumber(tolua_S,2,2.0f));
  {
   float tolua_ret = (float)  ease::expIn(time,value);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'expIn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::expOut */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_expOut00
static int tolua_openquick_tolua_ease_expOut00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float value = ((float)  tolua_tonumber(tolua_S,2,2.0f));
  {
   float tolua_ret = (float)  ease::expOut(time,value);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'expOut'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::expInOut */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_expInOut00
static int tolua_openquick_tolua_ease_expInOut00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float value = ((float)  tolua_tonumber(tolua_S,2,2.0f));
  {
   float tolua_ret = (float)  ease::expInOut(time,value);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'expInOut'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::sineIn */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_sineIn00
static int tolua_openquick_tolua_ease_sineIn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float power = ((float)  tolua_tonumber(tolua_S,2,1.0f));
  {
   float tolua_ret = (float)  ease::sineIn(time,power);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sineIn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::sineOut */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_sineOut00
static int tolua_openquick_tolua_ease_sineOut00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float power = ((float)  tolua_tonumber(tolua_S,2,1.0f));
  {
   float tolua_ret = (float)  ease::sineOut(time,power);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sineOut'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::sineInOut */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_sineInOut00
static int tolua_openquick_tolua_ease_sineInOut00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float power = ((float)  tolua_tonumber(tolua_S,2,1.0f));
  {
   float tolua_ret = (float)  ease::sineInOut(time,power);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sineInOut'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::elasticIn */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_elasticIn00
static int tolua_openquick_tolua_ease_elasticIn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  {
   float tolua_ret = (float)  ease::elasticIn(time);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'elasticIn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::elasticIn */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_elasticIn01
static int tolua_openquick_tolua_ease_elasticIn01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float period = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  ease::elasticIn(time,period);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_openquick_tolua_ease_elasticIn00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::elasticOut */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_elasticOut00
static int tolua_openquick_tolua_ease_elasticOut00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  {
   float tolua_ret = (float)  ease::elasticOut(time);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'elasticOut'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::elasticOut */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_elasticOut01
static int tolua_openquick_tolua_ease_elasticOut01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float period = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  ease::elasticOut(time,period);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_openquick_tolua_ease_elasticOut00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::elasticInOut */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_elasticInOut00
static int tolua_openquick_tolua_ease_elasticInOut00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  {
   float tolua_ret = (float)  ease::elasticInOut(time);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'elasticInOut'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::elasticInOut */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_elasticInOut01
static int tolua_openquick_tolua_ease_elasticInOut01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float period = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  ease::elasticInOut(time,period);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_openquick_tolua_ease_elasticInOut00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::bounceIn */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_bounceIn00
static int tolua_openquick_tolua_ease_bounceIn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float value = ((float)  tolua_tonumber(tolua_S,2,1.0f));
  {
   float tolua_ret = (float)  ease::bounceIn(time,value);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bounceIn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::bounceOut */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_bounceOut00
static int tolua_openquick_tolua_ease_bounceOut00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float value = ((float)  tolua_tonumber(tolua_S,2,1.0f));
  {
   float tolua_ret = (float)  ease::bounceOut(time,value);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bounceOut'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::bounceInOut */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_bounceInOut00
static int tolua_openquick_tolua_ease_bounceInOut00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float value = ((float)  tolua_tonumber(tolua_S,2,1.0f));
  {
   float tolua_ret = (float)  ease::bounceInOut(time,value);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bounceInOut'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::backIn */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_backIn00
static int tolua_openquick_tolua_ease_backIn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float value = ((float)  tolua_tonumber(tolua_S,2,1.0f));
  {
   float tolua_ret = (float)  ease::backIn(time,value);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'backIn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::backOut */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_backOut00
static int tolua_openquick_tolua_ease_backOut00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float value = ((float)  tolua_tonumber(tolua_S,2,1.0f));
  {
   float tolua_ret = (float)  ease::backOut(time,value);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'backOut'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ease::backInOut */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_ease_backInOut00
static int tolua_openquick_tolua_ease_backInOut00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float time = ((float)  tolua_tonumber(tolua_S,1,0));
  float value = ((float)  tolua_tonumber(tolua_S,2,1.0f));
  {
   float tolua_ret = (float)  ease::backInOut(time,value);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'backInOut'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QTween */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTween_new00
static int tolua_openquick_tolua_quick_QTween_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QTween",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QTween* tolua_ret = (quick::QTween*)  Mtolua_new((quick::QTween)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QTween");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QTween */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTween_new00_local
static int tolua_openquick_tolua_quick_QTween_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QTween",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QTween* tolua_ret = (quick::QTween*)  Mtolua_new((quick::QTween)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QTween");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QTween */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QTween_delete00
static int tolua_openquick_tolua_quick_QTween_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QTween",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QTween* self = (quick::QTween*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: target of class  quick::QTween */
#ifndef TOLUA_DISABLE_tolua_get_quick__QTween_target_ptr
static int tolua_get_quick__QTween_target_ptr(lua_State* tolua_S)
{
  quick::QTween* self = (quick::QTween*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'target'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->target,"quick::QNode");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: target of class  quick::QTween */
#ifndef TOLUA_DISABLE_tolua_set_quick__QTween_target_ptr
static int tolua_set_quick__QTween_target_ptr(lua_State* tolua_S)
{
  quick::QTween* self = (quick::QTween*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'target'",NULL);
  if (!tolua_isusertype(tolua_S,2,"quick::QNode",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->target = ((quick::QNode*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QVec2 */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QVec2___tostring00
static int tolua_openquick_tolua_quick_QVec2___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QVec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QVec2* self = (quick::QVec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QVec2 */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QVec2___serialize00
static int tolua_openquick_tolua_quick_QVec2___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QVec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QVec2* self = (quick::QVec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QVec2 */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QVec2_new00
static int tolua_openquick_tolua_quick_QVec2_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QVec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QVec2* tolua_ret = (quick::QVec2*)  Mtolua_new((quick::QVec2)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QVec2");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QVec2 */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QVec2_new00_local
static int tolua_openquick_tolua_quick_QVec2_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QVec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QVec2* tolua_ret = (quick::QVec2*)  Mtolua_new((quick::QVec2)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QVec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QVec2 */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QVec2_new01
static int tolua_openquick_tolua_quick_QVec2_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QVec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float _x = ((float)  tolua_tonumber(tolua_S,2,0));
  float _y = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   quick::QVec2* tolua_ret = (quick::QVec2*)  Mtolua_new((quick::QVec2)(_x,_y));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QVec2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_openquick_tolua_quick_QVec2_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QVec2 */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QVec2_new01_local
static int tolua_openquick_tolua_quick_QVec2_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QVec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float _x = ((float)  tolua_tonumber(tolua_S,2,0));
  float _y = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   quick::QVec2* tolua_ret = (quick::QVec2*)  Mtolua_new((quick::QVec2)(_x,_y));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QVec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_openquick_tolua_quick_QVec2_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Set of class  quick::QVec2 */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QVec2_Set00
static int tolua_openquick_tolua_quick_QVec2_Set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QVec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QVec2* self = (quick::QVec2*)  tolua_tousertype(tolua_S,1,0);
  float _x = ((float)  tolua_tonumber(tolua_S,2,0));
  float _y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Set'", NULL);
#endif
  {
   self->Set(_x,_y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Set'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Length of class  quick::QVec2 */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QVec2_Length00
static int tolua_openquick_tolua_quick_QVec2_Length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QVec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QVec2* self = (quick::QVec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Length'", NULL);
#endif
  {
   float tolua_ret = (float)  self->Length();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Length'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Normalize of class  quick::QVec2 */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QVec2_Normalize00
static int tolua_openquick_tolua_quick_QVec2_Normalize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QVec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QVec2* self = (quick::QVec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Normalize'", NULL);
#endif
  {
   float tolua_ret = (float)  self->Normalize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Normalize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isPointInsideTri of class  quick::QVec2 */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QVec2_isPointInsideTri00
static int tolua_openquick_tolua_quick_QVec2_isPointInsideTri00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QVec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QVec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"quick::QVec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"quick::QVec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QVec2* self = (quick::QVec2*)  tolua_tousertype(tolua_S,1,0);
  quick::QVec2* a = ((quick::QVec2*)  tolua_tousertype(tolua_S,2,0));
  quick::QVec2* b = ((quick::QVec2*)  tolua_tousertype(tolua_S,3,0));
  quick::QVec2* c = ((quick::QVec2*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPointInsideTri'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isPointInsideTri(*a,*b,*c);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPointInsideTri'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetNormal of class  quick::QVec2 */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QVec2_GetNormal00
static int tolua_openquick_tolua_quick_QVec2_GetNormal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QVec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QVec2* self = (quick::QVec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetNormal'", NULL);
#endif
  {
   quick::QVec2 tolua_ret = (quick::QVec2)  self->GetNormal();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((quick::QVec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"quick::QVec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(quick::QVec2));
     tolua_pushusertype(tolua_S,tolua_obj,"quick::QVec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetNormal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  quick::QVec2 */
#ifndef TOLUA_DISABLE_tolua_get_quick__QVec2_x
static int tolua_get_quick__QVec2_x(lua_State* tolua_S)
{
  quick::QVec2* self = (quick::QVec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  quick::QVec2 */
#ifndef TOLUA_DISABLE_tolua_set_quick__QVec2_x
static int tolua_set_quick__QVec2_x(lua_State* tolua_S)
{
  quick::QVec2* self = (quick::QVec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  quick::QVec2 */
#ifndef TOLUA_DISABLE_tolua_get_quick__QVec2_y
static int tolua_get_quick__QVec2_y(lua_State* tolua_S)
{
  quick::QVec2* self = (quick::QVec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  quick::QVec2 */
#ifndef TOLUA_DISABLE_tolua_set_quick__QVec2_y
static int tolua_set_quick__QVec2_y(lua_State* tolua_S)
{
  quick::QVec2* self = (quick::QVec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: g_Zero of class  quick::QVec2 */
#ifndef TOLUA_DISABLE_tolua_get_quick__QVec2_g_Zero
static int tolua_get_quick__QVec2_g_Zero(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&quick::QVec2::g_Zero,"quick::QVec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: g_Zero of class  quick::QVec2 */
#ifndef TOLUA_DISABLE_tolua_set_quick__QVec2_g_Zero
static int tolua_set_quick__QVec2_g_Zero(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QVec2",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  quick::QVec2::g_Zero = *((quick::QVec2*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: _getToLuaClassName of class  quick::QVector */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QVector__getToLuaClassName00
static int tolua_openquick_tolua_quick_QVector__getToLuaClassName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QVector* self = (quick::QVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_getToLuaClassName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->_getToLuaClassName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_getToLuaClassName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __tostring of class  quick::QVector */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QVector___tostring00
static int tolua_openquick_tolua_quick_QVector___tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QVector* self = (quick::QVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__tostring'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->__tostring();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: __serialize of class  quick::QVector */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QVector___serialize00
static int tolua_openquick_tolua_quick_QVector___serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QVector* self = (quick::QVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '__serialize'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->__serialize();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '__serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  quick::QVector */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QVector_new00
static int tolua_openquick_tolua_quick_QVector_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QVector* tolua_ret = (quick::QVector*)  Mtolua_new((quick::QVector)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QVector");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  quick::QVector */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QVector_new00_local
static int tolua_openquick_tolua_quick_QVector_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"quick::QVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   quick::QVector* tolua_ret = (quick::QVector*)  Mtolua_new((quick::QVector)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"quick::QVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  quick::QVector */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QVector_delete00
static int tolua_openquick_tolua_quick_QVector_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QVector* self = (quick::QVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _strokeAlphaInternal of class  quick::QVector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QVector__strokeAlphaInternal
static int tolua_get_quick__QVector__strokeAlphaInternal(lua_State* tolua_S)
{
  quick::QVector* self = (quick::QVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_strokeAlphaInternal'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->_strokeAlphaInternal);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _strokeAlphaInternal of class  quick::QVector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QVector__strokeAlphaInternal
static int tolua_set_quick__QVector__strokeAlphaInternal(lua_State* tolua_S)
{
  quick::QVector* self = (quick::QVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_strokeAlphaInternal'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_strokeAlphaInternal = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: sync of class  quick::QVector */
#ifndef TOLUA_DISABLE_tolua_openquick_tolua_quick_QVector_sync00
static int tolua_openquick_tolua_quick_QVector_sync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"quick::QVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  quick::QVector* self = (quick::QVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sync'", NULL);
#endif
  {
   self->sync();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: strokeWidth of class  quick::QVector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QVector_strokeWidth
static int tolua_get_quick__QVector_strokeWidth(lua_State* tolua_S)
{
  quick::QVector* self = (quick::QVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'strokeWidth'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->strokeWidth);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: strokeWidth of class  quick::QVector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QVector_strokeWidth
static int tolua_set_quick__QVector_strokeWidth(lua_State* tolua_S)
{
  quick::QVector* self = (quick::QVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'strokeWidth'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->strokeWidth = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: strokeColor of class  quick::QVector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QVector_strokeColor
static int tolua_get_quick__QVector_strokeColor(lua_State* tolua_S)
{
  quick::QVector* self = (quick::QVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'strokeColor'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->strokeColor,"quick::QColor");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: strokeColor of class  quick::QVector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QVector_strokeColor
static int tolua_set_quick__QVector_strokeColor(lua_State* tolua_S)
{
  quick::QVector* self = (quick::QVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'strokeColor'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"quick::QColor",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->strokeColor = *((quick::QColor*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: strokeAlpha of class  quick::QVector */
#ifndef TOLUA_DISABLE_tolua_get_quick__QVector_strokeAlpha
static int tolua_get_quick__QVector_strokeAlpha(lua_State* tolua_S)
{
  quick::QVector* self = (quick::QVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'strokeAlpha'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->strokeAlpha);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: strokeAlpha of class  quick::QVector */
#ifndef TOLUA_DISABLE_tolua_set_quick__QVector_strokeAlpha
static int tolua_set_quick__QVector_strokeAlpha(lua_State* tolua_S)
{
  quick::QVector* self = (quick::QVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'strokeAlpha'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->strokeAlpha = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_openquick_tolua_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QAnimation","quick::QAnimation","",tolua_collect_quick__QAnimation);
   #else
   tolua_cclass(tolua_S,"QAnimation","quick::QAnimation","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QAnimation");
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QAnimation___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QAnimation___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QAnimation_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QAnimation_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QAnimation_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QAnimation_delete00);
    tolua_function(tolua_S,"addFrame",tolua_openquick_tolua_quick_QAnimation_addFrame00);
    tolua_function(tolua_S,"addFrameByName",tolua_openquick_tolua_quick_QAnimation_addFrameByName00);
    tolua_function(tolua_S,"setDelay",tolua_openquick_tolua_quick_QAnimation_setDelay00);
    tolua_function(tolua_S,"getDuration",tolua_openquick_tolua_quick_QAnimation_getDuration00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QAtlas","quick::QAtlas","private cocos2d::CCSpriteFrameCache",tolua_collect_quick__QAtlas);
   #else
   tolua_cclass(tolua_S,"QAtlas","quick::QAtlas","private cocos2d::CCSpriteFrameCache",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QAtlas");
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QAtlas___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QAtlas___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QAtlas_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QAtlas_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QAtlas_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QAtlas_delete00);
    tolua_function(tolua_S,"initFromFile",tolua_openquick_tolua_quick_QAtlas_initFromFile00);
    tolua_function(tolua_S,"initTexture",tolua_openquick_tolua_quick_QAtlas_initTexture00);
    tolua_function(tolua_S,"addSpriteFrame",tolua_openquick_tolua_quick_QAtlas_addSpriteFrame00);
    tolua_function(tolua_S,"getTextureSize",tolua_openquick_tolua_quick_QAtlas_getTextureSize00);
    tolua_function(tolua_S,"setTextureParams",tolua_openquick_tolua_quick_QAtlas_setTextureParams00);
    tolua_function(tolua_S,"setBlendFunc",tolua_openquick_tolua_quick_QAtlas_setBlendFunc00);
    tolua_variable(tolua_S,"_blendSrc",tolua_get_quick__QAtlas__blendSrc,tolua_set_quick__QAtlas__blendSrc);
    tolua_variable(tolua_S,"_blendDst",tolua_get_quick__QAtlas__blendDst,tolua_set_quick__QAtlas__blendDst);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QAudio","quick::QAudio","",tolua_collect_quick__QAudio);
   #else
   tolua_cclass(tolua_S,"QAudio","quick::QAudio","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QAudio");
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QAudio_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QAudio_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QAudio_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QAudio_delete00);
    tolua_function(tolua_S,"loadStream",tolua_openquick_tolua_quick_QAudio_loadStream00);
    tolua_function(tolua_S,"playStreamWithLoop",tolua_openquick_tolua_quick_QAudio_playStreamWithLoop00);
    tolua_function(tolua_S,"stopStream",tolua_openquick_tolua_quick_QAudio_stopStream00);
    tolua_function(tolua_S,"pauseStream",tolua_openquick_tolua_quick_QAudio_pauseStream00);
    tolua_function(tolua_S,"resumeStream",tolua_openquick_tolua_quick_QAudio_resumeStream00);
    tolua_function(tolua_S,"rewindStream",tolua_openquick_tolua_quick_QAudio_rewindStream00);
    tolua_function(tolua_S,"isStreamPlaying",tolua_openquick_tolua_quick_QAudio_isStreamPlaying00);
    tolua_function(tolua_S,"playSoundWithLoop",tolua_openquick_tolua_quick_QAudio_playSoundWithLoop00);
    tolua_function(tolua_S,"stopSound",tolua_openquick_tolua_quick_QAudio_stopSound00);
    tolua_function(tolua_S,"loadSound",tolua_openquick_tolua_quick_QAudio_loadSound00);
    tolua_function(tolua_S,"unloadSound",tolua_openquick_tolua_quick_QAudio_unloadSound00);
    tolua_function(tolua_S,"setSoundFrequency",tolua_openquick_tolua_quick_QAudio_setSoundFrequency00);
    tolua_function(tolua_S,"isSoundPlaying",tolua_openquick_tolua_quick_QAudio_isSoundPlaying00);
    tolua_function(tolua_S,"get_streamVolume",tolua_openquick_tolua_quick_QAudio_get_streamVolume00);
    tolua_function(tolua_S,"set_streamVolume",tolua_openquick_tolua_quick_QAudio_set_streamVolume00);
    tolua_function(tolua_S,"get_soundVolume",tolua_openquick_tolua_quick_QAudio_get_soundVolume00);
    tolua_function(tolua_S,"set_soundVolume",tolua_openquick_tolua_quick_QAudio_set_soundVolume00);
    tolua_variable(tolua_S,"streamVolume",tolua_get_quick__QAudio_streamVolume,tolua_set_quick__QAudio_streamVolume);
    tolua_variable(tolua_S,"soundVolume",tolua_get_quick__QAudio_soundVolume,tolua_set_quick__QAudio_soundVolume);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QBaseObject","quick::QBaseObject","",tolua_collect_quick__QBaseObject);
   #else
   tolua_cclass(tolua_S,"QBaseObject","quick::QBaseObject","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QBaseObject");
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QBaseObject_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QBaseObject_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QBaseObject_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QBaseObject_delete00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QCircle","quick::QCircle","quick::QVector",tolua_collect_quick__QCircle);
   #else
   tolua_cclass(tolua_S,"QCircle","quick::QCircle","quick::QVector",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QCircle");
    tolua_function(tolua_S,"_getToLuaClassName",tolua_openquick_tolua_quick_QCircle__getToLuaClassName00);
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QCircle___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QCircle___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QCircle_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QCircle_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QCircle_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QCircle_delete00);
    tolua_function(tolua_S,"sync",tolua_openquick_tolua_quick_QCircle_sync00);
    tolua_function(tolua_S,"isPointInside",tolua_openquick_tolua_quick_QCircle_isPointInside00);
    tolua_variable(tolua_S,"radius",tolua_get_quick__QCircle_radius,tolua_set_quick__QCircle_radius);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QColor","quick::QColor","",tolua_collect_quick__QColor);
   #else
   tolua_cclass(tolua_S,"QColor","quick::QColor","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QColor");
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QColor___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QColor___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QColor_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QColor_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QColor_new00_local);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QColor_new01);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QColor_new01_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QColor_new01_local);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QColor_new02);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QColor_new02_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QColor_new02_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QColor_delete00);
    tolua_function(tolua_S,"set",tolua_openquick_tolua_quick_QColor_set00);
    tolua_function(tolua_S,"set",tolua_openquick_tolua_quick_QColor_set01);
    tolua_function(tolua_S,"toCCC4F",tolua_openquick_tolua_quick_QColor_toCCC4F00);
    tolua_variable(tolua_S,"r",tolua_get_quick__QColor_unsigned_r,tolua_set_quick__QColor_unsigned_r);
    tolua_variable(tolua_S,"g",tolua_get_quick__QColor_unsigned_g,tolua_set_quick__QColor_unsigned_g);
    tolua_variable(tolua_S,"b",tolua_get_quick__QColor_unsigned_b,tolua_set_quick__QColor_unsigned_b);
    tolua_variable(tolua_S,"a",tolua_get_quick__QColor_unsigned_a,tolua_set_quick__QColor_unsigned_a);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QDirector","quick::QDirector","",tolua_collect_quick__QDirector);
   #else
   tolua_cclass(tolua_S,"QDirector","quick::QDirector","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QDirector");
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QDirector___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QDirector___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QDirector_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QDirector_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QDirector_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QDirector_delete00);
    tolua_function(tolua_S,"_updateDisplayInfo",tolua_openquick_tolua_quick_QDirector__updateDisplayInfo00);
    tolua_variable(tolua_S,"_currentScene",tolua_get_quick__QDirector__currentScene_ptr,tolua_set_quick__QDirector__currentScene_ptr);
    tolua_variable(tolua_S,"_transitionScene",tolua_get_quick__QDirector__transitionScene_ptr,tolua_set_quick__QDirector__transitionScene_ptr);
    tolua_variable(tolua_S,"_transitionTime",tolua_get_quick__QDirector__transitionTime,tolua_set_quick__QDirector__transitionTime);
    tolua_variable(tolua_S,"_transitionType",tolua_get_quick__QDirector__transitionType,tolua_set_quick__QDirector__transitionType);
    tolua_variable(tolua_S,"_overlayScene",tolua_get_quick__QDirector__overlayScene_ptr,tolua_set_quick__QDirector__overlayScene_ptr);
    tolua_variable(tolua_S,"_overlayTransitionScene",tolua_get_quick__QDirector__overlayTransitionScene_ptr,tolua_set_quick__QDirector__overlayTransitionScene_ptr);
    tolua_variable(tolua_S,"_overlayTransitionTime",tolua_get_quick__QDirector__overlayTransitionTime,tolua_set_quick__QDirector__overlayTransitionTime);
    tolua_variable(tolua_S,"_overlayTransitionType",tolua_get_quick__QDirector__overlayTransitionType,tolua_set_quick__QDirector__overlayTransitionType);
    tolua_variable(tolua_S,"_modalOverlay",tolua_get_quick__QDirector__modalOverlay,tolua_set_quick__QDirector__modalOverlay);
    tolua_variable(tolua_S,"nodesColor",tolua_get_quick__QDirector_nodesColor,tolua_set_quick__QDirector_nodesColor);
    tolua_variable(tolua_S,"addNodesToScene",tolua_get_quick__QDirector_addNodesToScene,tolua_set_quick__QDirector_addNodesToScene);
    tolua_variable(tolua_S,"isAlphaInherited",tolua_get_quick__QDirector_isAlphaInherited,tolua_set_quick__QDirector_isAlphaInherited);
    tolua_function(tolua_S,"drawLine",tolua_openquick_tolua_quick_QDirector_drawLine00);
    tolua_function(tolua_S,"cleanupTextures",tolua_openquick_tolua_quick_QDirector_cleanupTextures00);
    tolua_function(tolua_S,"startRendering",tolua_openquick_tolua_quick_QDirector_startRendering00);
    tolua_variable(tolua_S,"displayWidth",tolua_get_quick__QDirector_displayWidth,tolua_set_quick__QDirector_displayWidth);
    tolua_variable(tolua_S,"displayHeight",tolua_get_quick__QDirector_displayHeight,tolua_set_quick__QDirector_displayHeight);
    tolua_variable(tolua_S,"displayCenterX",tolua_get_quick__QDirector_displayCenterX,tolua_set_quick__QDirector_displayCenterX);
    tolua_variable(tolua_S,"displayCenterY",tolua_get_quick__QDirector_displayCenterY,tolua_set_quick__QDirector_displayCenterY);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QEventListener","quick::QEventListener","",tolua_collect_quick__QEventListener);
   #else
   tolua_cclass(tolua_S,"QEventListener","quick::QEventListener","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QEventListener");
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QEventListener_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QEventListener_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QEventListener_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QEventListener_delete00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"key",0);
  tolua_beginmodule(tolua_S,"key");
   tolua_constant(tolua_S,"back",key::back);
   tolua_constant(tolua_S,"menu",key::menu);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_cclass(tolua_S,"QFilterData","quick::QFilterData","",NULL);
   tolua_beginmodule(tolua_S,"QFilterData");
    tolua_variable(tolua_S,"name",tolua_get_quick__QFilterData_name,tolua_set_quick__QFilterData_name);
    tolua_variable(tolua_S,"x",tolua_get_quick__QFilterData_x,tolua_set_quick__QFilterData_x);
    tolua_variable(tolua_S,"y",tolua_get_quick__QFilterData_y,tolua_set_quick__QFilterData_y);
    tolua_variable(tolua_S,"angle",tolua_get_quick__QFilterData_angle,tolua_set_quick__QFilterData_angle);
    tolua_variable(tolua_S,"intensity",tolua_get_quick__QFilterData_intensity,tolua_set_quick__QFilterData_intensity);
    tolua_variable(tolua_S,"contrast",tolua_get_quick__QFilterData_contrast,tolua_set_quick__QFilterData_contrast);
    tolua_variable(tolua_S,"sensitivity",tolua_get_quick__QFilterData_sensitivity,tolua_set_quick__QFilterData_sensitivity);
    tolua_variable(tolua_S,"smoothing",tolua_get_quick__QFilterData_smoothing,tolua_set_quick__QFilterData_smoothing);
    tolua_variable(tolua_S,"radius",tolua_get_quick__QFilterData_radius,tolua_set_quick__QFilterData_radius);
    tolua_variable(tolua_S,"scale",tolua_get_quick__QFilterData_scale,tolua_set_quick__QFilterData_scale);
    tolua_variable(tolua_S,"spacing",tolua_get_quick__QFilterData_spacing,tolua_set_quick__QFilterData_spacing);
    tolua_variable(tolua_S,"lineWidth",tolua_get_quick__QFilterData_lineWidth,tolua_set_quick__QFilterData_lineWidth);
    tolua_variable(tolua_S,"exposure",tolua_get_quick__QFilterData_exposure,tolua_set_quick__QFilterData_exposure);
    tolua_variable(tolua_S,"color",tolua_get_quick__QFilterData_color,tolua_set_quick__QFilterData_color);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QFont","quick::QFont","",tolua_collect_quick__QFont);
   #else
   tolua_cclass(tolua_S,"QFont","quick::QFont","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QFont");
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QFont___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QFont___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QFont_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QFont_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QFont_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QFont_delete00);
    tolua_function(tolua_S,"initFromFntFile",tolua_openquick_tolua_quick_QFont_initFromFntFile00);
    tolua_variable(tolua_S,"height",tolua_get_quick__QFont_height,tolua_set_quick__QFont_height);
    tolua_variable(tolua_S,"fileName",tolua_get_quick__QFont_fileName,tolua_set_quick__QFont_fileName);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QLabel","quick::QLabel","quick::QNode",tolua_collect_quick__QLabel);
   #else
   tolua_cclass(tolua_S,"QLabel","quick::QLabel","quick::QNode",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QLabel");
    tolua_function(tolua_S,"_getToLuaClassName",tolua_openquick_tolua_quick_QLabel__getToLuaClassName00);
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QLabel___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QLabel___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QLabel_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QLabel_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QLabel_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QLabel_delete00);
    tolua_function(tolua_S,"init",tolua_openquick_tolua_quick_QLabel_init00);
    tolua_function(tolua_S,"sync",tolua_openquick_tolua_quick_QLabel_sync00);
    tolua_function(tolua_S,"isPointInside",tolua_openquick_tolua_quick_QLabel_isPointInside00);
    tolua_variable(tolua_S,"text",tolua_get_quick__QLabel_text,tolua_set_quick__QLabel_text);
    tolua_variable(tolua_S,"font",tolua_get_quick__QLabel_font_ptr,tolua_set_quick__QLabel_font_ptr);
    tolua_variable(tolua_S,"hAlignment",tolua_get_quick__QLabel_hAlignment,tolua_set_quick__QLabel_hAlignment);
    tolua_variable(tolua_S,"vAlignment",tolua_get_quick__QLabel_vAlignment,tolua_set_quick__QLabel_vAlignment);
    tolua_variable(tolua_S,"textTouchableBorder",tolua_get_quick__QLabel_textTouchableBorder,tolua_set_quick__QLabel_textTouchableBorder);
    tolua_variable(tolua_S,"textBorderTop",tolua_get_quick__QLabel_textBorderTop,tolua_set_quick__QLabel_textBorderTop);
    tolua_variable(tolua_S,"textBorderBottom",tolua_get_quick__QLabel_textBorderBottom,tolua_set_quick__QLabel_textBorderBottom);
    tolua_variable(tolua_S,"textBorderLeft",tolua_get_quick__QLabel_textBorderLeft,tolua_set_quick__QLabel_textBorderLeft);
    tolua_variable(tolua_S,"textBorderRight",tolua_get_quick__QLabel_textBorderRight,tolua_set_quick__QLabel_textBorderRight);
    tolua_variable(tolua_S,"textXScale",tolua_get_quick__QLabel_textXScale,tolua_set_quick__QLabel_textXScale);
    tolua_variable(tolua_S,"textYScale",tolua_get_quick__QLabel_textYScale,tolua_set_quick__QLabel_textYScale);
    tolua_variable(tolua_S,"xText",tolua_get_quick__QLabel_xText,tolua_set_quick__QLabel_xText);
    tolua_variable(tolua_S,"yText",tolua_get_quick__QLabel_yText,tolua_set_quick__QLabel_yText);
    tolua_variable(tolua_S,"wText",tolua_get_quick__QLabel_wText,tolua_set_quick__QLabel_wText);
    tolua_variable(tolua_S,"hText",tolua_get_quick__QLabel_hText,tolua_set_quick__QLabel_hText);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QLines","quick::QLines","quick::QVector",tolua_collect_quick__QLines);
   #else
   tolua_cclass(tolua_S,"QLines","quick::QLines","quick::QVector",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QLines");
    tolua_function(tolua_S,"_getToLuaClassName",tolua_openquick_tolua_quick_QLines__getToLuaClassName00);
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QLines___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QLines___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QLines_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QLines_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QLines_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QLines_delete00);
    tolua_function(tolua_S,"_appendPoint",tolua_openquick_tolua_quick_QLines__appendPoint00);
    tolua_function(tolua_S,"_appendFinalise",tolua_openquick_tolua_quick_QLines__appendFinalise00);
    tolua_function(tolua_S,"_appendReallocBuffers",tolua_openquick_tolua_quick_QLines__appendReallocBuffers00);
    tolua_function(tolua_S,"sync",tolua_openquick_tolua_quick_QLines_sync00);
    tolua_function(tolua_S,"isPointInside",tolua_openquick_tolua_quick_QLines_isPointInside00);
    tolua_function(tolua_S,"isClosed",tolua_openquick_tolua_quick_QLines_isClosed00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QNode","quick::QNode","quick::QBaseObject",tolua_collect_quick__QNode);
   #else
   tolua_cclass(tolua_S,"QNode","quick::QNode","quick::QBaseObject",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QNode");
    tolua_function(tolua_S,"_getToLuaClassName",tolua_openquick_tolua_quick_QNode__getToLuaClassName00);
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QNode___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QNode___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QNode_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QNode_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QNode_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QNode_delete00);
    tolua_function(tolua_S,"_createCCNode",tolua_openquick_tolua_quick_QNode__createCCNode00);
    tolua_function(tolua_S,"_isChild",tolua_openquick_tolua_quick_QNode__isChild00);
    tolua_function(tolua_S,"_setParent",tolua_openquick_tolua_quick_QNode__setParent00);
    tolua_function(tolua_S,"_addChild",tolua_openquick_tolua_quick_QNode__addChild00);
    tolua_function(tolua_S,"_removeChild",tolua_openquick_tolua_quick_QNode__removeChild00);
    tolua_function(tolua_S,"_getNumChildren",tolua_openquick_tolua_quick_QNode__getNumChildren00);
    tolua_variable(tolua_S,"_alphaInternal",tolua_get_quick__QNode__alphaInternal,tolua_set_quick__QNode__alphaInternal);
    tolua_variable(tolua_S,"_timersPaused",tolua_get_quick__QNode__timersPaused,tolua_set_quick__QNode__timersPaused);
    tolua_variable(tolua_S,"_tweensPaused",tolua_get_quick__QNode__tweensPaused,tolua_set_quick__QNode__tweensPaused);
    tolua_variable(tolua_S,"_timersTimeScale",tolua_get_quick__QNode__timersTimeScale,tolua_set_quick__QNode__timersTimeScale);
    tolua_variable(tolua_S,"_tweensTimeScale",tolua_get_quick__QNode__tweensTimeScale,tolua_set_quick__QNode__tweensTimeScale);
    tolua_function(tolua_S,"sync",tolua_openquick_tolua_quick_QNode_sync00);
    tolua_function(tolua_S,"reverseSync",tolua_openquick_tolua_quick_QNode_reverseSync00);
    tolua_function(tolua_S,"visit",tolua_openquick_tolua_quick_QNode_visit00);
    tolua_function(tolua_S,"setColor",tolua_openquick_tolua_quick_QNode_setColor00);
    tolua_function(tolua_S,"setColor",tolua_openquick_tolua_quick_QNode_setColor01);
    tolua_function(tolua_S,"isPointInside",tolua_openquick_tolua_quick_QNode_isPointInside00);
    tolua_function(tolua_S,"getPointInWorldSpace",tolua_openquick_tolua_quick_QNode_getPointInWorldSpace00);
    tolua_function(tolua_S,"getPointInLocalSpace",tolua_openquick_tolua_quick_QNode_getPointInLocalSpace00);
    tolua_function(tolua_S,"pauseTimers",tolua_openquick_tolua_quick_QNode_pauseTimers00);
    tolua_function(tolua_S,"resumeTimers",tolua_openquick_tolua_quick_QNode_resumeTimers00);
    tolua_function(tolua_S,"setTimersTimeScale",tolua_openquick_tolua_quick_QNode_setTimersTimeScale00);
    tolua_function(tolua_S,"getTimersTimeScale",tolua_openquick_tolua_quick_QNode_getTimersTimeScale00);
    tolua_function(tolua_S,"pauseTweens",tolua_openquick_tolua_quick_QNode_pauseTweens00);
    tolua_function(tolua_S,"resumeTweens",tolua_openquick_tolua_quick_QNode_resumeTweens00);
    tolua_function(tolua_S,"setTweensTimeScale",tolua_openquick_tolua_quick_QNode_setTweensTimeScale00);
    tolua_function(tolua_S,"getTweensTimeScale",tolua_openquick_tolua_quick_QNode_getTweensTimeScale00);
    tolua_function(tolua_S,"setGLProgram",tolua_openquick_tolua_quick_QNode_setGLProgram00);
    tolua_function(tolua_S,"getGLProgram",tolua_openquick_tolua_quick_QNode_getGLProgram00);
    tolua_variable(tolua_S,"name",tolua_get_quick__QNode_name,tolua_set_quick__QNode_name);
    tolua_variable(tolua_S,"x",tolua_get_quick__QNode_x,tolua_set_quick__QNode_x);
    tolua_variable(tolua_S,"y",tolua_get_quick__QNode_y,tolua_set_quick__QNode_y);
    tolua_variable(tolua_S,"w",tolua_get_quick__QNode_w,tolua_set_quick__QNode_w);
    tolua_variable(tolua_S,"h",tolua_get_quick__QNode_h,tolua_set_quick__QNode_h);
    tolua_variable(tolua_S,"xScale",tolua_get_quick__QNode_xScale,tolua_set_quick__QNode_xScale);
    tolua_variable(tolua_S,"yScale",tolua_get_quick__QNode_yScale,tolua_set_quick__QNode_yScale);
    tolua_variable(tolua_S,"xSkew",tolua_get_quick__QNode_xSkew,tolua_set_quick__QNode_xSkew);
    tolua_variable(tolua_S,"ySkew",tolua_get_quick__QNode_ySkew,tolua_set_quick__QNode_ySkew);
    tolua_variable(tolua_S,"rotation",tolua_get_quick__QNode_rotation,tolua_set_quick__QNode_rotation);
    tolua_variable(tolua_S,"xAnchor",tolua_get_quick__QNode_xAnchor,tolua_set_quick__QNode_xAnchor);
    tolua_variable(tolua_S,"yAnchor",tolua_get_quick__QNode_yAnchor,tolua_set_quick__QNode_yAnchor);
    tolua_variable(tolua_S,"isVisible",tolua_get_quick__QNode_isVisible,tolua_set_quick__QNode_isVisible);
    tolua_variable(tolua_S,"color",tolua_get_quick__QNode_color,tolua_set_quick__QNode_color);
    tolua_variable(tolua_S,"alpha",tolua_get_quick__QNode_alpha,tolua_set_quick__QNode_alpha);
    tolua_variable(tolua_S,"zOrder",tolua_get_quick__QNode_zOrder,tolua_set_quick__QNode_zOrder);
    tolua_variable(tolua_S,"physics",tolua_get_quick__QNode_physics_ptr,tolua_set_quick__QNode_physics_ptr);
    tolua_variable(tolua_S,"clipX",tolua_get_quick__QNode_clipX,tolua_set_quick__QNode_clipX);
    tolua_variable(tolua_S,"clipY",tolua_get_quick__QNode_clipY,tolua_set_quick__QNode_clipY);
    tolua_variable(tolua_S,"clipW",tolua_get_quick__QNode_clipW,tolua_set_quick__QNode_clipW);
    tolua_variable(tolua_S,"clipH",tolua_get_quick__QNode_clipH,tolua_set_quick__QNode_clipH);
    tolua_variable(tolua_S,"debugDraw",tolua_get_quick__QNode_debugDraw,tolua_set_quick__QNode_debugDraw);
    tolua_variable(tolua_S,"debugDrawColor",tolua_get_quick__QNode_debugDrawColor,tolua_set_quick__QNode_debugDrawColor);
    tolua_variable(tolua_S,"isTouchable",tolua_get_quick__QNode_isTouchable,tolua_set_quick__QNode_isTouchable);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QNodeGLProgram","quick::QNodeGLProgram","quick::QBaseObject",tolua_collect_quick__QNodeGLProgram);
   #else
   tolua_cclass(tolua_S,"QNodeGLProgram","quick::QNodeGLProgram","quick::QBaseObject",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QNodeGLProgram");
    tolua_function(tolua_S,"_getToLuaClassName",tolua_openquick_tolua_quick_QNodeGLProgram__getToLuaClassName00);
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QNodeGLProgram___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QNodeGLProgram___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QNodeGLProgram_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QNodeGLProgram_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QNodeGLProgram_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QNodeGLProgram_delete00);
    tolua_function(tolua_S,"initWithVertexShaderByteArray",tolua_openquick_tolua_quick_QNodeGLProgram_initWithVertexShaderByteArray00);
    tolua_function(tolua_S,"initWithVertexShaderFilename",tolua_openquick_tolua_quick_QNodeGLProgram_initWithVertexShaderFilename00);
    tolua_function(tolua_S,"addAttribute",tolua_openquick_tolua_quick_QNodeGLProgram_addAttribute00);
    tolua_function(tolua_S,"link",tolua_openquick_tolua_quick_QNodeGLProgram_link00);
    tolua_function(tolua_S,"use",tolua_openquick_tolua_quick_QNodeGLProgram_use00);
    tolua_function(tolua_S,"updateUniforms",tolua_openquick_tolua_quick_QNodeGLProgram_updateUniforms00);
    tolua_function(tolua_S,"setUniformLocationWith1i",tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith1i00);
    tolua_function(tolua_S,"setUniformLocationWith1f",tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith1f00);
    tolua_function(tolua_S,"setUniformLocationWith2f",tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith2f00);
    tolua_function(tolua_S,"setUniformLocationWith3f",tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith3f00);
    tolua_function(tolua_S,"setUniformLocationWith4f",tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith4f00);
    tolua_function(tolua_S,"setUniformLocationWith2fv",tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith2fv00);
    tolua_function(tolua_S,"setUniformLocationWith3fv",tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith3fv00);
    tolua_function(tolua_S,"setUniformLocationWith4fv",tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWith4fv00);
    tolua_function(tolua_S,"setUniformLocationWithMatrix4fv",tolua_openquick_tolua_quick_QNodeGLProgram_setUniformLocationWithMatrix4fv00);
    tolua_function(tolua_S,"setUniformsForBuiltins",tolua_openquick_tolua_quick_QNodeGLProgram_setUniformsForBuiltins00);
    tolua_function(tolua_S,"setUniformForModelViewProjectionMatrix",tolua_openquick_tolua_quick_QNodeGLProgram_setUniformForModelViewProjectionMatrix00);
    tolua_function(tolua_S,"getUniformLocation",tolua_openquick_tolua_quick_QNodeGLProgram_getUniformLocation00);
    tolua_function(tolua_S,"mapTextureToUniform",tolua_openquick_tolua_quick_QNodeGLProgram_mapTextureToUniform00);
    tolua_function(tolua_S,"vertexShaderLog",tolua_openquick_tolua_quick_QNodeGLProgram_vertexShaderLog00);
    tolua_function(tolua_S,"fragmentShaderLog",tolua_openquick_tolua_quick_QNodeGLProgram_fragmentShaderLog00);
    tolua_function(tolua_S,"programLog",tolua_openquick_tolua_quick_QNodeGLProgram_programLog00);
    tolua_function(tolua_S,"reset",tolua_openquick_tolua_quick_QNodeGLProgram_reset00);
    tolua_function(tolua_S,"getProgram",tolua_openquick_tolua_quick_QNodeGLProgram_getProgram00);
    tolua_function(tolua_S,"_createCCGLProgram",tolua_openquick_tolua_quick_QNodeGLProgram__createCCGLProgram00);
    tolua_variable(tolua_S,"m_CCProgram",tolua_get_quick__QNodeGLProgram_m_CCProgram_ptr,tolua_set_quick__QNodeGLProgram_m_CCProgram_ptr);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_function(tolua_S,"MainLuaPrecompileFile",tolua_openquick_tolua_quick_MainLuaPrecompileFile00);
   tolua_function(tolua_S,"MainLuaLoadFile",tolua_openquick_tolua_quick_MainLuaLoadFile00);
   tolua_function(tolua_S,"MainLuaDoFile",tolua_openquick_tolua_quick_MainLuaDoFile00);
   tolua_function(tolua_S,"MainGetVersionString",tolua_openquick_tolua_quick_MainGetVersionString00);
   tolua_function(tolua_S,"startFileConcat",tolua_openquick_tolua_quick_startFileConcat00);
   tolua_function(tolua_S,"endFileConcat",tolua_openquick_tolua_quick_endFileConcat00);
   tolua_function(tolua_S,"isFileConcatInProgress",tolua_openquick_tolua_quick_isFileConcatInProgress00);
   tolua_function(tolua_S,"MainOutputFlush",tolua_openquick_tolua_quick_MainOutputFlush00);
   tolua_function(tolua_S,"MainPrint",tolua_openquick_tolua_quick_MainPrint00);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QParticles","quick::QParticles","quick::QNode",tolua_collect_quick__QParticles);
   #else
   tolua_cclass(tolua_S,"QParticles","quick::QParticles","quick::QNode",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QParticles");
    tolua_function(tolua_S,"_getToLuaClassName",tolua_openquick_tolua_quick_QParticles__getToLuaClassName00);
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QParticles___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QParticles___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QParticles_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QParticles_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QParticles_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QParticles_delete00);
    tolua_cclass(tolua_S,"modeGravityStruct","quick::QParticles::modeGravityStruct","",NULL);
    tolua_beginmodule(tolua_S,"modeGravityStruct");
     tolua_variable(tolua_S,"gravity",tolua_get_quick__QParticles__modeGravityStruct_gravity,tolua_set_quick__QParticles__modeGravityStruct_gravity);
     tolua_variable(tolua_S,"speed",tolua_get_quick__QParticles__modeGravityStruct_speed,tolua_set_quick__QParticles__modeGravityStruct_speed);
     tolua_variable(tolua_S,"speedVar",tolua_get_quick__QParticles__modeGravityStruct_speedVar,tolua_set_quick__QParticles__modeGravityStruct_speedVar);
     tolua_variable(tolua_S,"tangentialAccel",tolua_get_quick__QParticles__modeGravityStruct_tangentialAccel,tolua_set_quick__QParticles__modeGravityStruct_tangentialAccel);
     tolua_variable(tolua_S,"tangentialAccelVar",tolua_get_quick__QParticles__modeGravityStruct_tangentialAccelVar,tolua_set_quick__QParticles__modeGravityStruct_tangentialAccelVar);
     tolua_variable(tolua_S,"radialAccel",tolua_get_quick__QParticles__modeGravityStruct_radialAccel,tolua_set_quick__QParticles__modeGravityStruct_radialAccel);
     tolua_variable(tolua_S,"radialAccelVar",tolua_get_quick__QParticles__modeGravityStruct_radialAccelVar,tolua_set_quick__QParticles__modeGravityStruct_radialAccelVar);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"modeRadialStruct","quick::QParticles::modeRadialStruct","",NULL);
    tolua_beginmodule(tolua_S,"modeRadialStruct");
     tolua_variable(tolua_S,"startRadius",tolua_get_quick__QParticles__modeRadialStruct_startRadius,tolua_set_quick__QParticles__modeRadialStruct_startRadius);
     tolua_variable(tolua_S,"startRadiusVar",tolua_get_quick__QParticles__modeRadialStruct_startRadiusVar,tolua_set_quick__QParticles__modeRadialStruct_startRadiusVar);
     tolua_variable(tolua_S,"endRadius",tolua_get_quick__QParticles__modeRadialStruct_endRadius,tolua_set_quick__QParticles__modeRadialStruct_endRadius);
     tolua_variable(tolua_S,"endRadiusVar",tolua_get_quick__QParticles__modeRadialStruct_endRadiusVar,tolua_set_quick__QParticles__modeRadialStruct_endRadiusVar);
     tolua_variable(tolua_S,"rotatePerSecond",tolua_get_quick__QParticles__modeRadialStruct_rotatePerSecond,tolua_set_quick__QParticles__modeRadialStruct_rotatePerSecond);
     tolua_variable(tolua_S,"rotatePerSecondVar",tolua_get_quick__QParticles__modeRadialStruct_rotatePerSecondVar,tolua_set_quick__QParticles__modeRadialStruct_rotatePerSecondVar);
    tolua_endmodule(tolua_S);
    tolua_function(tolua_S,"setAtlas",tolua_openquick_tolua_quick_QParticles_setAtlas00);
    tolua_function(tolua_S,"addParticle",tolua_openquick_tolua_quick_QParticles_addParticle00);
    tolua_function(tolua_S,"stop",tolua_openquick_tolua_quick_QParticles_stop00);
    tolua_function(tolua_S,"reset",tolua_openquick_tolua_quick_QParticles_reset00);
    tolua_function(tolua_S,"isFull",tolua_openquick_tolua_quick_QParticles_isFull00);
    tolua_function(tolua_S,"isActive",tolua_openquick_tolua_quick_QParticles_isActive00);
    tolua_function(tolua_S,"getNumParticles",tolua_openquick_tolua_quick_QParticles_getNumParticles00);
    tolua_function(tolua_S,"update",tolua_openquick_tolua_quick_QParticles_update00);
    tolua_function(tolua_S,"sync",tolua_openquick_tolua_quick_QParticles_sync00);
    tolua_function(tolua_S,"syncReverse",tolua_openquick_tolua_quick_QParticles_syncReverse00);
    tolua_variable(tolua_S,"modeGravity",tolua_get_quick__QParticles_modeGravity,tolua_set_quick__QParticles_modeGravity);
    tolua_variable(tolua_S,"modeRadial",tolua_get_quick__QParticles_modeRadial,tolua_set_quick__QParticles_modeRadial);
    tolua_variable(tolua_S,"totalParticles",tolua_get_quick__QParticles_totalParticles,tolua_set_quick__QParticles_totalParticles);
    tolua_variable(tolua_S,"particleCount",tolua_get_quick__QParticles_particleCount,tolua_set_quick__QParticles_particleCount);
    tolua_variable(tolua_S,"emitterMode",tolua_get_quick__QParticles_emitterMode,tolua_set_quick__QParticles_emitterMode);
    tolua_variable(tolua_S,"emitterRate",tolua_get_quick__QParticles_emitterRate,tolua_set_quick__QParticles_emitterRate);
    tolua_variable(tolua_S,"duration",tolua_get_quick__QParticles_duration,tolua_set_quick__QParticles_duration);
    tolua_variable(tolua_S,"sourcePos",tolua_get_quick__QParticles_sourcePos,tolua_set_quick__QParticles_sourcePos);
    tolua_variable(tolua_S,"sourcePosVar",tolua_get_quick__QParticles_sourcePosVar,tolua_set_quick__QParticles_sourcePosVar);
    tolua_variable(tolua_S,"life",tolua_get_quick__QParticles_life,tolua_set_quick__QParticles_life);
    tolua_variable(tolua_S,"lifeVar",tolua_get_quick__QParticles_lifeVar,tolua_set_quick__QParticles_lifeVar);
    tolua_variable(tolua_S,"angle",tolua_get_quick__QParticles_angle,tolua_set_quick__QParticles_angle);
    tolua_variable(tolua_S,"angleVar",tolua_get_quick__QParticles_angleVar,tolua_set_quick__QParticles_angleVar);
    tolua_variable(tolua_S,"startSize",tolua_get_quick__QParticles_startSize,tolua_set_quick__QParticles_startSize);
    tolua_variable(tolua_S,"startSizeVar",tolua_get_quick__QParticles_startSizeVar,tolua_set_quick__QParticles_startSizeVar);
    tolua_variable(tolua_S,"endSize",tolua_get_quick__QParticles_endSize,tolua_set_quick__QParticles_endSize);
    tolua_variable(tolua_S,"endSizeVar",tolua_get_quick__QParticles_endSizeVar,tolua_set_quick__QParticles_endSizeVar);
    tolua_variable(tolua_S,"startColor",tolua_get_quick__QParticles_startColor,tolua_set_quick__QParticles_startColor);
    tolua_variable(tolua_S,"startColorVar",tolua_get_quick__QParticles_startColorVar,tolua_set_quick__QParticles_startColorVar);
    tolua_variable(tolua_S,"endColor",tolua_get_quick__QParticles_endColor,tolua_set_quick__QParticles_endColor);
    tolua_variable(tolua_S,"endColorVar",tolua_get_quick__QParticles_endColorVar,tolua_set_quick__QParticles_endColorVar);
    tolua_variable(tolua_S,"startSpin",tolua_get_quick__QParticles_startSpin,tolua_set_quick__QParticles_startSpin);
    tolua_variable(tolua_S,"startSpinVar",tolua_get_quick__QParticles_startSpinVar,tolua_set_quick__QParticles_startSpinVar);
    tolua_variable(tolua_S,"endSpin",tolua_get_quick__QParticles_endSpin,tolua_set_quick__QParticles_endSpin);
    tolua_variable(tolua_S,"endSpinVar",tolua_get_quick__QParticles_endSpinVar,tolua_set_quick__QParticles_endSpinVar);
    tolua_variable(tolua_S,"alphaModifiesColor",tolua_get_quick__QParticles_alphaModifiesColor,tolua_set_quick__QParticles_alphaModifiesColor);
    tolua_function(tolua_S,"_initWithPlist",tolua_openquick_tolua_quick_QParticles__initWithPlist00);
    tolua_function(tolua_S,"_initWithNumber",tolua_openquick_tolua_quick_QParticles__initWithNumber00);
    tolua_variable(tolua_S,"_atlas",tolua_get_quick__QParticles__atlas_ptr,tolua_set_quick__QParticles__atlas_ptr);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"QSim","quick::physics::QSim","",tolua_collect_quick__physics__QSim);
    #else
    tolua_cclass(tolua_S,"QSim","quick::physics::QSim","",NULL);
    #endif
    tolua_beginmodule(tolua_S,"QSim");
     tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_physics_QSim___tostring00);
     tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_physics_QSim___serialize00);
     tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_physics_QSim_new00);
     tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_physics_QSim_new00_local);
     tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_physics_QSim_new00_local);
     tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_physics_QSim_delete00);
     tolua_function(tolua_S,"_addNode",tolua_openquick_tolua_quick_physics_QSim__addNode00);
     tolua_function(tolua_S,"_removeNode",tolua_openquick_tolua_quick_physics_QSim__removeNode00);
     tolua_function(tolua_S,"getPhysicsHz",tolua_openquick_tolua_quick_physics_QSim_getPhysicsHz00);
     tolua_function(tolua_S,"_destroyJoint",tolua_openquick_tolua_quick_physics_QSim__destroyJoint00);
     tolua_function(tolua_S,"_destroyOnlyJoint",tolua_openquick_tolua_quick_physics_QSim__destroyOnlyJoint00);
     tolua_function(tolua_S,"_destroyBody",tolua_openquick_tolua_quick_physics_QSim__destroyBody00);
     tolua_function(tolua_S,"setScale",tolua_openquick_tolua_quick_physics_QSim_setScale00);
     tolua_function(tolua_S,"getGravity",tolua_openquick_tolua_quick_physics_QSim_getGravity00);
     tolua_function(tolua_S,"setGravity",tolua_openquick_tolua_quick_physics_QSim_setGravity00);
     tolua_function(tolua_S,"pause",tolua_openquick_tolua_quick_physics_QSim_pause00);
     tolua_function(tolua_S,"resume",tolua_openquick_tolua_quick_physics_QSim_resume00);
     tolua_function(tolua_S,"setTimeScale",tolua_openquick_tolua_quick_physics_QSim_setTimeScale00);
     tolua_function(tolua_S,"getTimeScale",tolua_openquick_tolua_quick_physics_QSim_getTimeScale00);
     tolua_function(tolua_S,"setIterations",tolua_openquick_tolua_quick_physics_QSim_setIterations00);
     tolua_function(tolua_S,"setAllowSleeping",tolua_openquick_tolua_quick_physics_QSim_setAllowSleeping00);
     tolua_variable(tolua_S,"debugDraw",tolua_get_quick__physics__QSim_debugDraw,tolua_set_quick__physics__QSim_debugDraw);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
    tolua_cclass(tolua_S,"QContact","quick::physics::QContact","",NULL);
    tolua_beginmodule(tolua_S,"QContact");
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"QJoint","quick::physics::QJoint","",tolua_collect_quick__physics__QJoint);
    #else
    tolua_cclass(tolua_S,"QJoint","quick::physics::QJoint","",NULL);
    #endif
    tolua_beginmodule(tolua_S,"QJoint");
     tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_physics_QJoint_new00);
     tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_physics_QJoint_new00_local);
     tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_physics_QJoint_new00_local);
     tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_physics_QJoint_delete00);
     tolua_function(tolua_S,"_sync",tolua_openquick_tolua_quick_physics_QJoint__sync00);
     tolua_function(tolua_S,"getNodeA",tolua_openquick_tolua_quick_physics_QJoint_getNodeA00);
     tolua_function(tolua_S,"getNodeB",tolua_openquick_tolua_quick_physics_QJoint_getNodeB00);
     tolua_function(tolua_S,"getAnchorA",tolua_openquick_tolua_quick_physics_QJoint_getAnchorA00);
     tolua_function(tolua_S,"getAnchorB",tolua_openquick_tolua_quick_physics_QJoint_getAnchorB00);
     tolua_function(tolua_S,"get_isActive",tolua_openquick_tolua_quick_physics_QJoint_get_isActive00);
     tolua_function(tolua_S,"set_isActive",tolua_openquick_tolua_quick_physics_QJoint_set_isActive00);
     tolua_function(tolua_S,"get_isCollideConnected",tolua_openquick_tolua_quick_physics_QJoint_get_isCollideConnected00);
     tolua_function(tolua_S,"set_isCollideConnected",tolua_openquick_tolua_quick_physics_QJoint_set_isCollideConnected00);
     tolua_function(tolua_S,"getReactionForce",tolua_openquick_tolua_quick_physics_QJoint_getReactionForce00);
     tolua_function(tolua_S,"getReactionTorque",tolua_openquick_tolua_quick_physics_QJoint_getReactionTorque00);
     tolua_function(tolua_S,"destroy",tolua_openquick_tolua_quick_physics_QJoint_destroy00);
     tolua_variable(tolua_S,"isActive",tolua_get_quick__physics__QJoint_isActive,tolua_set_quick__physics__QJoint_isActive);
     tolua_variable(tolua_S,"isCollideConnected",tolua_get_quick__physics__QJoint_isCollideConnected,tolua_set_quick__physics__QJoint_isCollideConnected);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"QJointDistance","quick::physics::QJointDistance","quick::physics::QJoint",tolua_collect_quick__physics__QJointDistance);
    #else
    tolua_cclass(tolua_S,"QJointDistance","quick::physics::QJointDistance","quick::physics::QJoint",NULL);
    #endif
    tolua_beginmodule(tolua_S,"QJointDistance");
     tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_physics_QJointDistance_new00);
     tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_physics_QJointDistance_new00_local);
     tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_physics_QJointDistance_new00_local);
     tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_physics_QJointDistance_delete00);
     tolua_function(tolua_S,"_init",tolua_openquick_tolua_quick_physics_QJointDistance__init00);
     tolua_function(tolua_S,"_sync",tolua_openquick_tolua_quick_physics_QJointDistance__sync00);
     tolua_variable(tolua_S,"frequency",tolua_get_quick__physics__QJointDistance_frequency,tolua_set_quick__physics__QJointDistance_frequency);
     tolua_variable(tolua_S,"dampingRatio",tolua_get_quick__physics__QJointDistance_dampingRatio,tolua_set_quick__physics__QJointDistance_dampingRatio);
     tolua_variable(tolua_S,"length",tolua_get_quick__physics__QJointDistance_length,tolua_set_quick__physics__QJointDistance_length);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"QJointRevolute","quick::physics::QJointRevolute","quick::physics::QJoint",tolua_collect_quick__physics__QJointRevolute);
    #else
    tolua_cclass(tolua_S,"QJointRevolute","quick::physics::QJointRevolute","quick::physics::QJoint",NULL);
    #endif
    tolua_beginmodule(tolua_S,"QJointRevolute");
     tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_physics_QJointRevolute_new00);
     tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_physics_QJointRevolute_new00_local);
     tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_physics_QJointRevolute_new00_local);
     tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_physics_QJointRevolute_delete00);
     tolua_function(tolua_S,"_init",tolua_openquick_tolua_quick_physics_QJointRevolute__init00);
     tolua_function(tolua_S,"_sync",tolua_openquick_tolua_quick_physics_QJointRevolute__sync00);
     tolua_variable(tolua_S,"lowerAngle",tolua_get_quick__physics__QJointRevolute_lowerAngle,tolua_set_quick__physics__QJointRevolute_lowerAngle);
     tolua_variable(tolua_S,"upperAngle",tolua_get_quick__physics__QJointRevolute_upperAngle,tolua_set_quick__physics__QJointRevolute_upperAngle);
     tolua_variable(tolua_S,"limitEnabled",tolua_get_quick__physics__QJointRevolute_limitEnabled,tolua_set_quick__physics__QJointRevolute_limitEnabled);
     tolua_variable(tolua_S,"maxMotorTorque",tolua_get_quick__physics__QJointRevolute_maxMotorTorque,tolua_set_quick__physics__QJointRevolute_maxMotorTorque);
     tolua_variable(tolua_S,"motorSpeed",tolua_get_quick__physics__QJointRevolute_motorSpeed,tolua_set_quick__physics__QJointRevolute_motorSpeed);
     tolua_variable(tolua_S,"motorEnabled",tolua_get_quick__physics__QJointRevolute_motorEnabled,tolua_set_quick__physics__QJointRevolute_motorEnabled);
     tolua_variable(tolua_S,"motorTorque",tolua_get_quick__physics__QJointRevolute_motorTorque,tolua_set_quick__physics__QJointRevolute_motorTorque);
     tolua_variable(tolua_S,"jointSpeed",tolua_get_quick__physics__QJointRevolute_jointSpeed,tolua_set_quick__physics__QJointRevolute_jointSpeed);
     tolua_variable(tolua_S,"jointAngle",tolua_get_quick__physics__QJointRevolute_jointAngle,tolua_set_quick__physics__QJointRevolute_jointAngle);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"QJointPrismatic","quick::physics::QJointPrismatic","quick::physics::QJoint",tolua_collect_quick__physics__QJointPrismatic);
    #else
    tolua_cclass(tolua_S,"QJointPrismatic","quick::physics::QJointPrismatic","quick::physics::QJoint",NULL);
    #endif
    tolua_beginmodule(tolua_S,"QJointPrismatic");
     tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_physics_QJointPrismatic_new00);
     tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_physics_QJointPrismatic_new00_local);
     tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_physics_QJointPrismatic_new00_local);
     tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_physics_QJointPrismatic_delete00);
     tolua_function(tolua_S,"_init",tolua_openquick_tolua_quick_physics_QJointPrismatic__init00);
     tolua_function(tolua_S,"_sync",tolua_openquick_tolua_quick_physics_QJointPrismatic__sync00);
     tolua_variable(tolua_S,"limitEnabled",tolua_get_quick__physics__QJointPrismatic_limitEnabled,tolua_set_quick__physics__QJointPrismatic_limitEnabled);
     tolua_variable(tolua_S,"lowerTranslation",tolua_get_quick__physics__QJointPrismatic_lowerTranslation,tolua_set_quick__physics__QJointPrismatic_lowerTranslation);
     tolua_variable(tolua_S,"upperTranslation",tolua_get_quick__physics__QJointPrismatic_upperTranslation,tolua_set_quick__physics__QJointPrismatic_upperTranslation);
     tolua_variable(tolua_S,"motorEnabled",tolua_get_quick__physics__QJointPrismatic_motorEnabled,tolua_set_quick__physics__QJointPrismatic_motorEnabled);
     tolua_variable(tolua_S,"maxMotorForce",tolua_get_quick__physics__QJointPrismatic_maxMotorForce,tolua_set_quick__physics__QJointPrismatic_maxMotorForce);
     tolua_variable(tolua_S,"motorSpeed",tolua_get_quick__physics__QJointPrismatic_motorSpeed,tolua_set_quick__physics__QJointPrismatic_motorSpeed);
     tolua_variable(tolua_S,"motorForce",tolua_get_quick__physics__QJointPrismatic_motorForce,tolua_set_quick__physics__QJointPrismatic_motorForce);
     tolua_variable(tolua_S,"jointTranslation",tolua_get_quick__physics__QJointPrismatic_jointTranslation,tolua_set_quick__physics__QJointPrismatic_jointTranslation);
     tolua_variable(tolua_S,"jointSpeed",tolua_get_quick__physics__QJointPrismatic_jointSpeed,tolua_set_quick__physics__QJointPrismatic_jointSpeed);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"QJointFriction","quick::physics::QJointFriction","quick::physics::QJoint",tolua_collect_quick__physics__QJointFriction);
    #else
    tolua_cclass(tolua_S,"QJointFriction","quick::physics::QJointFriction","quick::physics::QJoint",NULL);
    #endif
    tolua_beginmodule(tolua_S,"QJointFriction");
     tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_physics_QJointFriction_new00);
     tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_physics_QJointFriction_new00_local);
     tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_physics_QJointFriction_new00_local);
     tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_physics_QJointFriction_delete00);
     tolua_function(tolua_S,"_init",tolua_openquick_tolua_quick_physics_QJointFriction__init00);
     tolua_function(tolua_S,"_sync",tolua_openquick_tolua_quick_physics_QJointFriction__sync00);
     tolua_variable(tolua_S,"maxForce",tolua_get_quick__physics__QJointFriction_maxForce,tolua_set_quick__physics__QJointFriction_maxForce);
     tolua_variable(tolua_S,"maxTorque",tolua_get_quick__physics__QJointFriction_maxTorque,tolua_set_quick__physics__QJointFriction_maxTorque);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"QJointWheel","quick::physics::QJointWheel","quick::physics::QJoint",tolua_collect_quick__physics__QJointWheel);
    #else
    tolua_cclass(tolua_S,"QJointWheel","quick::physics::QJointWheel","quick::physics::QJoint",NULL);
    #endif
    tolua_beginmodule(tolua_S,"QJointWheel");
     tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_physics_QJointWheel_new00);
     tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_physics_QJointWheel_new00_local);
     tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_physics_QJointWheel_new00_local);
     tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_physics_QJointWheel_delete00);
     tolua_function(tolua_S,"_init",tolua_openquick_tolua_quick_physics_QJointWheel__init00);
     tolua_function(tolua_S,"_sync",tolua_openquick_tolua_quick_physics_QJointWheel__sync00);
     tolua_variable(tolua_S,"motorEnabled",tolua_get_quick__physics__QJointWheel_motorEnabled,tolua_set_quick__physics__QJointWheel_motorEnabled);
     tolua_variable(tolua_S,"motorSpeed",tolua_get_quick__physics__QJointWheel_motorSpeed,tolua_set_quick__physics__QJointWheel_motorSpeed);
     tolua_variable(tolua_S,"maxMotorTorque",tolua_get_quick__physics__QJointWheel_maxMotorTorque,tolua_set_quick__physics__QJointWheel_maxMotorTorque);
     tolua_variable(tolua_S,"springFrequency",tolua_get_quick__physics__QJointWheel_springFrequency,tolua_set_quick__physics__QJointWheel_springFrequency);
     tolua_variable(tolua_S,"springDampingRatio",tolua_get_quick__physics__QJointWheel_springDampingRatio,tolua_set_quick__physics__QJointWheel_springDampingRatio);
     tolua_variable(tolua_S,"motorTorque",tolua_get_quick__physics__QJointWheel_motorTorque,tolua_set_quick__physics__QJointWheel_motorTorque);
     tolua_variable(tolua_S,"jointTranslation",tolua_get_quick__physics__QJointWheel_jointTranslation,tolua_set_quick__physics__QJointWheel_jointTranslation);
     tolua_variable(tolua_S,"jointSpeed",tolua_get_quick__physics__QJointWheel_jointSpeed,tolua_set_quick__physics__QJointWheel_jointSpeed);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"QJointWeld","quick::physics::QJointWeld","quick::physics::QJoint",tolua_collect_quick__physics__QJointWeld);
    #else
    tolua_cclass(tolua_S,"QJointWeld","quick::physics::QJointWeld","quick::physics::QJoint",NULL);
    #endif
    tolua_beginmodule(tolua_S,"QJointWeld");
     tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_physics_QJointWeld_new00);
     tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_physics_QJointWeld_new00_local);
     tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_physics_QJointWeld_new00_local);
     tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_physics_QJointWeld_delete00);
     tolua_function(tolua_S,"_init",tolua_openquick_tolua_quick_physics_QJointWeld__init00);
     tolua_function(tolua_S,"_sync",tolua_openquick_tolua_quick_physics_QJointWeld__sync00);
     tolua_variable(tolua_S,"frequency",tolua_get_quick__physics__QJointWeld_frequency,tolua_set_quick__physics__QJointWeld_frequency);
     tolua_variable(tolua_S,"dampingRatio",tolua_get_quick__physics__QJointWeld_dampingRatio,tolua_set_quick__physics__QJointWeld_dampingRatio);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"QJointPulley","quick::physics::QJointPulley","quick::physics::QJoint",tolua_collect_quick__physics__QJointPulley);
    #else
    tolua_cclass(tolua_S,"QJointPulley","quick::physics::QJointPulley","quick::physics::QJoint",NULL);
    #endif
    tolua_beginmodule(tolua_S,"QJointPulley");
     tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_physics_QJointPulley_new00);
     tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_physics_QJointPulley_new00_local);
     tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_physics_QJointPulley_new00_local);
     tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_physics_QJointPulley_delete00);
     tolua_function(tolua_S,"_init",tolua_openquick_tolua_quick_physics_QJointPulley__init00);
     tolua_function(tolua_S,"_sync",tolua_openquick_tolua_quick_physics_QJointPulley__sync00);
     tolua_variable(tolua_S,"ratio",tolua_get_quick__physics__QJointPulley_ratio,tolua_set_quick__physics__QJointPulley_ratio);
     tolua_variable(tolua_S,"lengthA",tolua_get_quick__physics__QJointPulley_lengthA,tolua_set_quick__physics__QJointPulley_lengthA);
     tolua_variable(tolua_S,"lengthB",tolua_get_quick__physics__QJointPulley_lengthB,tolua_set_quick__physics__QJointPulley_lengthB);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"QJointTouch","quick::physics::QJointTouch","quick::physics::QJoint",tolua_collect_quick__physics__QJointTouch);
    #else
    tolua_cclass(tolua_S,"QJointTouch","quick::physics::QJointTouch","quick::physics::QJoint",NULL);
    #endif
    tolua_beginmodule(tolua_S,"QJointTouch");
     tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_physics_QJointTouch_new00);
     tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_physics_QJointTouch_new00_local);
     tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_physics_QJointTouch_new00_local);
     tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_physics_QJointTouch_delete00);
     tolua_function(tolua_S,"_init",tolua_openquick_tolua_quick_physics_QJointTouch__init00);
     tolua_function(tolua_S,"_sync",tolua_openquick_tolua_quick_physics_QJointTouch__sync00);
     tolua_function(tolua_S,"setTarget",tolua_openquick_tolua_quick_physics_QJointTouch_setTarget00);
     tolua_variable(tolua_S,"dampingRatio",tolua_get_quick__physics__QJointTouch_dampingRatio,tolua_set_quick__physics__QJointTouch_dampingRatio);
     tolua_variable(tolua_S,"frequency",tolua_get_quick__physics__QJointTouch_frequency,tolua_set_quick__physics__QJointTouch_frequency);
     tolua_variable(tolua_S,"maxForce",tolua_get_quick__physics__QJointTouch_maxForce,tolua_set_quick__physics__QJointTouch_maxForce);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"QJointGear","quick::physics::QJointGear","quick::physics::QJoint",tolua_collect_quick__physics__QJointGear);
    #else
    tolua_cclass(tolua_S,"QJointGear","quick::physics::QJointGear","quick::physics::QJoint",NULL);
    #endif
    tolua_beginmodule(tolua_S,"QJointGear");
     tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_physics_QJointGear_new00);
     tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_physics_QJointGear_new00_local);
     tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_physics_QJointGear_new00_local);
     tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_physics_QJointGear_delete00);
     tolua_function(tolua_S,"_init",tolua_openquick_tolua_quick_physics_QJointGear__init00);
     tolua_function(tolua_S,"_sync",tolua_openquick_tolua_quick_physics_QJointGear__sync00);
     tolua_variable(tolua_S,"ratio",tolua_get_quick__physics__QJointGear_ratio,tolua_set_quick__physics__QJointGear_ratio);
     tolua_variable(tolua_S,"joint1",tolua_get_quick__physics__QJointGear_joint1_ptr,tolua_set_quick__physics__QJointGear_joint1_ptr);
     tolua_variable(tolua_S,"joint2",tolua_get_quick__physics__QJointGear_joint2_ptr,tolua_set_quick__physics__QJointGear_joint2_ptr);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"QJointRope","quick::physics::QJointRope","quick::physics::QJoint",tolua_collect_quick__physics__QJointRope);
    #else
    tolua_cclass(tolua_S,"QJointRope","quick::physics::QJointRope","quick::physics::QJoint",NULL);
    #endif
    tolua_beginmodule(tolua_S,"QJointRope");
     tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_physics_QJointRope_new00);
     tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_physics_QJointRope_new00_local);
     tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_physics_QJointRope_new00_local);
     tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_physics_QJointRope_delete00);
     tolua_function(tolua_S,"_init",tolua_openquick_tolua_quick_physics_QJointRope__init00);
     tolua_function(tolua_S,"_sync",tolua_openquick_tolua_quick_physics_QJointRope__sync00);
     tolua_variable(tolua_S,"maxLength",tolua_get_quick__physics__QJointRope_maxLength,tolua_set_quick__physics__QJointRope_maxLength);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"QNodeProps","quick::physics::QNodeProps","",tolua_collect_quick__physics__QNodeProps);
    #else
    tolua_cclass(tolua_S,"QNodeProps","quick::physics::QNodeProps","",NULL);
    #endif
    tolua_beginmodule(tolua_S,"QNodeProps");
     tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_physics_QNodeProps_new00);
     tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_physics_QNodeProps_new00_local);
     tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_physics_QNodeProps_new00_local);
     tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_physics_QNodeProps_delete00);
     tolua_function(tolua_S,"_addShapePoint",tolua_openquick_tolua_quick_physics_QNodeProps__addShapePoint00);
     tolua_function(tolua_S,"_init",tolua_openquick_tolua_quick_physics_QNodeProps__init00);
     tolua_function(tolua_S,"_sync",tolua_openquick_tolua_quick_physics_QNodeProps__sync00);
     tolua_function(tolua_S,"applyForce",tolua_openquick_tolua_quick_physics_QNodeProps_applyForce00);
     tolua_function(tolua_S,"applyForceToCenter",tolua_openquick_tolua_quick_physics_QNodeProps_applyForceToCenter00);
     tolua_function(tolua_S,"applyAngularImpulse",tolua_openquick_tolua_quick_physics_QNodeProps_applyAngularImpulse00);
     tolua_function(tolua_S,"setAngularVelocity",tolua_openquick_tolua_quick_physics_QNodeProps_setAngularVelocity00);
     tolua_function(tolua_S,"getAngularVelocity",tolua_openquick_tolua_quick_physics_QNodeProps_getAngularVelocity00);
     tolua_function(tolua_S,"applyTorque",tolua_openquick_tolua_quick_physics_QNodeProps_applyTorque00);
     tolua_function(tolua_S,"applyLinearImpulse",tolua_openquick_tolua_quick_physics_QNodeProps_applyLinearImpulse00);
     tolua_function(tolua_S,"applyLinearImpulseToCenter",tolua_openquick_tolua_quick_physics_QNodeProps_applyLinearImpulseToCenter00);
     tolua_function(tolua_S,"getMass",tolua_openquick_tolua_quick_physics_QNodeProps_getMass00);
     tolua_function(tolua_S,"getInertia",tolua_openquick_tolua_quick_physics_QNodeProps_getInertia00);
     tolua_function(tolua_S,"getWorldPoint",tolua_openquick_tolua_quick_physics_QNodeProps_getWorldPoint00);
     tolua_function(tolua_S,"getWorldCenter",tolua_openquick_tolua_quick_physics_QNodeProps_getWorldCenter00);
     tolua_function(tolua_S,"getLocalCenter",tolua_openquick_tolua_quick_physics_QNodeProps_getLocalCenter00);
     tolua_function(tolua_S,"getWorldVector",tolua_openquick_tolua_quick_physics_QNodeProps_getWorldVector00);
     tolua_function(tolua_S,"getLocalPoint",tolua_openquick_tolua_quick_physics_QNodeProps_getLocalPoint00);
     tolua_function(tolua_S,"getLocalVector",tolua_openquick_tolua_quick_physics_QNodeProps_getLocalVector00);
     tolua_function(tolua_S,"getLinearVelocityFromWorldPoint",tolua_openquick_tolua_quick_physics_QNodeProps_getLinearVelocityFromWorldPoint00);
     tolua_function(tolua_S,"getLinearVelocityFromLocalPoint",tolua_openquick_tolua_quick_physics_QNodeProps_getLinearVelocityFromLocalPoint00);
     tolua_function(tolua_S,"getLinearDamping",tolua_openquick_tolua_quick_physics_QNodeProps_getLinearDamping00);
     tolua_function(tolua_S,"setLinearDamping",tolua_openquick_tolua_quick_physics_QNodeProps_setLinearDamping00);
     tolua_function(tolua_S,"getAngularDamping",tolua_openquick_tolua_quick_physics_QNodeProps_getAngularDamping00);
     tolua_function(tolua_S,"setAngularDamping",tolua_openquick_tolua_quick_physics_QNodeProps_setAngularDamping00);
     tolua_function(tolua_S,"getGravityScale",tolua_openquick_tolua_quick_physics_QNodeProps_getGravityScale00);
     tolua_function(tolua_S,"setGravityScale",tolua_openquick_tolua_quick_physics_QNodeProps_setGravityScale00);
     tolua_function(tolua_S,"setLinearVelocity",tolua_openquick_tolua_quick_physics_QNodeProps_setLinearVelocity00);
     tolua_function(tolua_S,"getLinearVelocity",tolua_openquick_tolua_quick_physics_QNodeProps_getLinearVelocity00);
     tolua_function(tolua_S,"setTransform",tolua_openquick_tolua_quick_physics_QNodeProps_setTransform00);
     tolua_variable(tolua_S,"friction",tolua_get_quick__physics__QNodeProps_friction,tolua_set_quick__physics__QNodeProps_friction);
     tolua_variable(tolua_S,"density",tolua_get_quick__physics__QNodeProps_density,tolua_set_quick__physics__QNodeProps_density);
     tolua_variable(tolua_S,"restitution",tolua_get_quick__physics__QNodeProps_restitution,tolua_set_quick__physics__QNodeProps_restitution);
     tolua_variable(tolua_S,"radius",tolua_get_quick__physics__QNodeProps_radius,tolua_set_quick__physics__QNodeProps_radius);
     tolua_variable(tolua_S,"type",tolua_get_quick__physics__QNodeProps_type,tolua_set_quick__physics__QNodeProps_type);
     tolua_function(tolua_S,"get_isSensor",tolua_openquick_tolua_quick_physics_QNodeProps_get_isSensor00);
     tolua_function(tolua_S,"set_isSensor",tolua_openquick_tolua_quick_physics_QNodeProps_set_isSensor00);
     tolua_variable(tolua_S,"debugDraw",tolua_get_quick__physics__QNodeProps_debugDraw,tolua_set_quick__physics__QNodeProps_debugDraw);
     tolua_variable(tolua_S,"debugDrawColor",tolua_get_quick__physics__QNodeProps_debugDrawColor,tolua_set_quick__physics__QNodeProps_debugDrawColor);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QRect","quick::QRect","quick::QBaseObject",tolua_collect_quick__QRect);
   #else
   tolua_cclass(tolua_S,"QRect","quick::QRect","quick::QBaseObject",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QRect");
    tolua_function(tolua_S,"_getToLuaClassName",tolua_openquick_tolua_quick_QRect__getToLuaClassName00);
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QRect___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QRect___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QRect_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QRect_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QRect_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QRect_delete00);
    tolua_variable(tolua_S,"x",tolua_get_quick__QRect_x,tolua_set_quick__QRect_x);
    tolua_variable(tolua_S,"y",tolua_get_quick__QRect_y,tolua_set_quick__QRect_y);
    tolua_variable(tolua_S,"w",tolua_get_quick__QRect_w,tolua_set_quick__QRect_w);
    tolua_variable(tolua_S,"h",tolua_get_quick__QRect_h,tolua_set_quick__QRect_h);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QRectangle","quick::QRectangle","quick::QLines",tolua_collect_quick__QRectangle);
   #else
   tolua_cclass(tolua_S,"QRectangle","quick::QRectangle","quick::QLines",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QRectangle");
    tolua_function(tolua_S,"_getToLuaClassName",tolua_openquick_tolua_quick_QRectangle__getToLuaClassName00);
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QRectangle___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QRectangle___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QRectangle_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QRectangle_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QRectangle_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QRectangle_delete00);
    tolua_function(tolua_S,"sync",tolua_openquick_tolua_quick_QRectangle_sync00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"pixel_format",0);
  tolua_beginmodule(tolua_S,"pixel_format");
   tolua_constant(tolua_S,"RGBA8888",pixel_format::RGBA8888);
   tolua_constant(tolua_S,"RGB888",pixel_format::RGB888);
   tolua_constant(tolua_S,"RGB565",pixel_format::RGB565);
   tolua_constant(tolua_S,"A8",pixel_format::A8);
   tolua_constant(tolua_S,"I8",pixel_format::I8);
   tolua_constant(tolua_S,"AI88",pixel_format::AI88);
   tolua_constant(tolua_S,"RGBA4444",pixel_format::RGBA4444);
   tolua_constant(tolua_S,"RGB5A1",pixel_format::RGB5A1);
   tolua_constant(tolua_S,"PVRTC4",pixel_format::PVRTC4);
   tolua_constant(tolua_S,"PVRTC2",pixel_format::PVRTC2);
   tolua_constant(tolua_S,"AUTO",pixel_format::AUTO);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"file_format",0);
  tolua_beginmodule(tolua_S,"file_format");
   tolua_constant(tolua_S,"JPEG",file_format::JPEG);
   tolua_constant(tolua_S,"PNG",file_format::PNG);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QRenderTexture","quick::QRenderTexture","quick::QNode",tolua_collect_quick__QRenderTexture);
   #else
   tolua_cclass(tolua_S,"QRenderTexture","quick::QRenderTexture","quick::QNode",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QRenderTexture");
    tolua_function(tolua_S,"_getToLuaClassName",tolua_openquick_tolua_quick_QRenderTexture__getToLuaClassName00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QRenderTexture_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QRenderTexture_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QRenderTexture_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QRenderTexture_delete00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QRenderTexture___serialize00);
    tolua_function(tolua_S,"_getSprite",tolua_openquick_tolua_quick_QRenderTexture__getSprite00);
    tolua_function(tolua_S,"sync",tolua_openquick_tolua_quick_QRenderTexture_sync00);
    tolua_function(tolua_S,"begin",tolua_openquick_tolua_quick_QRenderTexture_begin00);
    tolua_function(tolua_S,"endToLua",tolua_openquick_tolua_quick_QRenderTexture_endToLua00);
    tolua_function(tolua_S,"finish",tolua_openquick_tolua_quick_QRenderTexture_finish00);
    tolua_function(tolua_S,"saveToFile",tolua_openquick_tolua_quick_QRenderTexture_saveToFile00);
    tolua_function(tolua_S,"setSprite",tolua_openquick_tolua_quick_QRenderTexture_setSprite00);
    tolua_function(tolua_S,"clear",tolua_openquick_tolua_quick_QRenderTexture_clear00);
    tolua_variable(tolua_S,"autodraw",tolua_get_quick__QRenderTexture_autodraw,tolua_set_quick__QRenderTexture_autodraw);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QScene","quick::QScene","quick::QNode",tolua_collect_quick__QScene);
   #else
   tolua_cclass(tolua_S,"QScene","quick::QScene","quick::QNode",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QScene");
    tolua_function(tolua_S,"_getToLuaClassName",tolua_openquick_tolua_quick_QScene__getToLuaClassName00);
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QScene___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QScene___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QScene_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QScene_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QScene_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QScene_delete00);
    tolua_function(tolua_S,"_init",tolua_openquick_tolua_quick_QScene__init00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QSprite","quick::QSprite","quick::QNode",tolua_collect_quick__QSprite);
   #else
   tolua_cclass(tolua_S,"QSprite","quick::QSprite","quick::QNode",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QSprite");
    tolua_function(tolua_S,"_getToLuaClassName",tolua_openquick_tolua_quick_QSprite__getToLuaClassName00);
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QSprite___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QSprite___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QSprite_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QSprite_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QSprite_new00_local);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QSprite_new01);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QSprite_new01_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QSprite_new01_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QSprite_delete00);
    tolua_function(tolua_S,"_play",tolua_openquick_tolua_quick_QSprite__play00);
    tolua_function(tolua_S,"sync",tolua_openquick_tolua_quick_QSprite_sync00);
    tolua_function(tolua_S,"pause",tolua_openquick_tolua_quick_QSprite_pause00);
    tolua_function(tolua_S,"setFrame",tolua_openquick_tolua_quick_QSprite_setFrame00);
    tolua_function(tolua_S,"setAnimation",tolua_openquick_tolua_quick_QSprite_setAnimation00);
    tolua_variable(tolua_S,"xFlip",tolua_get_quick__QSprite_xFlip,tolua_set_quick__QSprite_xFlip);
    tolua_variable(tolua_S,"yFlip",tolua_get_quick__QSprite_yFlip,tolua_set_quick__QSprite_yFlip);
    tolua_variable(tolua_S,"uvRect",tolua_get_quick__QSprite_uvRect,tolua_set_quick__QSprite_uvRect);
    tolua_variable(tolua_S,"blendMode",tolua_get_quick__QSprite_blendMode,tolua_set_quick__QSprite_blendMode);
    tolua_variable(tolua_S,"timeScale",tolua_get_quick__QSprite_timeScale,tolua_set_quick__QSprite_timeScale);
    tolua_variable(tolua_S,"debugDrawTextureRegion",tolua_get_quick__QSprite_debugDrawTextureRegion,tolua_set_quick__QSprite_debugDrawTextureRegion);
    tolua_variable(tolua_S,"raisesAnimEvents",tolua_get_quick__QSprite_raisesAnimEvents,tolua_set_quick__QSprite_raisesAnimEvents);
    tolua_variable(tolua_S,"filter",tolua_get_quick__QSprite_filter,tolua_set_quick__QSprite_filter);
    tolua_function(tolua_S,"getAtlas",tolua_openquick_tolua_quick_QSprite_getAtlas00);
    tolua_variable(tolua_S,"isPlaying",tolua_get_quick__QSprite_isPlaying,tolua_set_quick__QSprite_isPlaying);
    tolua_variable(tolua_S,"frame",tolua_get_quick__QSprite_frame,tolua_set_quick__QSprite_frame);
    tolua_variable(tolua_S,"animation",tolua_get_quick__QSprite_animation_ptr,tolua_set_quick__QSprite_animation_ptr);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"lsqlite3",0);
   tolua_beginmodule(tolua_S,"lsqlite3");
    tolua_function(tolua_S,"instantiate_lsqlite3_global",tolua_openquick_tolua_quick_lsqlite3_instantiate_lsqlite3_global00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QSystem","quick::QSystem","",tolua_collect_quick__QSystem);
   #else
   tolua_cclass(tolua_S,"QSystem","quick::QSystem","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QSystem");
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QSystem___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QSystem___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QSystem_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QSystem_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QSystem_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QSystem_delete00);
    tolua_function(tolua_S,"_sendTouchEvent",tolua_openquick_tolua_quick_QSystem__sendTouchEvent00);
    tolua_function(tolua_S,"_getMemoryStats",tolua_openquick_tolua_quick_QSystem__getMemoryStats00);
    tolua_variable(tolua_S,"_timersPaused",tolua_get_quick__QSystem__timersPaused,tolua_set_quick__QSystem__timersPaused);
    tolua_variable(tolua_S,"_timersTimeScale",tolua_get_quick__QSystem__timersTimeScale,tolua_set_quick__QSystem__timersTimeScale);
    tolua_function(tolua_S,"pauseTimers",tolua_openquick_tolua_quick_QSystem_pauseTimers00);
    tolua_function(tolua_S,"resumeTimers",tolua_openquick_tolua_quick_QSystem_resumeTimers00);
    tolua_function(tolua_S,"setTimersTimeScale",tolua_openquick_tolua_quick_QSystem_setTimersTimeScale00);
    tolua_function(tolua_S,"getTimersTimeScale",tolua_openquick_tolua_quick_QSystem_getTimersTimeScale00);
    tolua_function(tolua_S,"setFrameRateLimit",tolua_openquick_tolua_quick_QSystem_setFrameRateLimit00);
    tolua_variable(tolua_S,"gameTime",tolua_get_quick__QSystem_gameTime,tolua_set_quick__QSystem_gameTime);
    tolua_variable(tolua_S,"deltaTime",tolua_get_quick__QSystem_deltaTime,tolua_set_quick__QSystem_deltaTime);
    tolua_function(tolua_S,"quit",tolua_openquick_tolua_quick_QSystem_quit00);
    tolua_function(tolua_S,"yield",tolua_openquick_tolua_quick_QSystem_yield00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QTiledMapObject","quick::QTiledMapObject","",tolua_collect_quick__QTiledMapObject);
   #else
   tolua_cclass(tolua_S,"QTiledMapObject","quick::QTiledMapObject","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QTiledMapObject");
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QTiledMapObject_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QTiledMapObject_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QTiledMapObject_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QTiledMapObject_delete00);
    tolua_function(tolua_S,"getProperty",tolua_openquick_tolua_quick_QTiledMapObject_getProperty00);
    tolua_variable(tolua_S,"name",tolua_get_quick__QTiledMapObject_name,tolua_set_quick__QTiledMapObject_name);
    tolua_variable(tolua_S,"m_CCDict",tolua_get_quick__QTiledMapObject_m_CCDict_ptr,tolua_set_quick__QTiledMapObject_m_CCDict_ptr);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QTiledMapObjectGroup","quick::QTiledMapObjectGroup","",tolua_collect_quick__QTiledMapObjectGroup);
   #else
   tolua_cclass(tolua_S,"QTiledMapObjectGroup","quick::QTiledMapObjectGroup","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QTiledMapObjectGroup");
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QTiledMapObjectGroup_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QTiledMapObjectGroup_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QTiledMapObjectGroup_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QTiledMapObjectGroup_delete00);
    tolua_function(tolua_S,"getProperty",tolua_openquick_tolua_quick_QTiledMapObjectGroup_getProperty00);
    tolua_function(tolua_S,"getObjectNamed",tolua_openquick_tolua_quick_QTiledMapObjectGroup_getObjectNamed00);
    tolua_variable(tolua_S,"name",tolua_get_quick__QTiledMapObjectGroup_name,tolua_set_quick__QTiledMapObjectGroup_name);
    tolua_variable(tolua_S,"m_CCObject",tolua_get_quick__QTiledMapObjectGroup_m_CCObject_ptr,tolua_set_quick__QTiledMapObjectGroup_m_CCObject_ptr);
    tolua_variable(tolua_S,"m_TiledMapObjects",tolua_get_quick__QTiledMapObjectGroup_m_TiledMapObjects,tolua_set_quick__QTiledMapObjectGroup_m_TiledMapObjects);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QTiledMapLayer","quick::QTiledMapLayer","quick::QNode",tolua_collect_quick__QTiledMapLayer);
   #else
   tolua_cclass(tolua_S,"QTiledMapLayer","quick::QTiledMapLayer","quick::QNode",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QTiledMapLayer");
    tolua_function(tolua_S,"_getToLuaClassName",tolua_openquick_tolua_quick_QTiledMapLayer__getToLuaClassName00);
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QTiledMapLayer___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QTiledMapLayer___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QTiledMapLayer_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QTiledMapLayer_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QTiledMapLayer_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QTiledMapLayer_delete00);
    tolua_variable(tolua_S,"_activeQSprite",tolua_get_quick__QTiledMapLayer__activeQSprite_ptr,tolua_set_quick__QTiledMapLayer__activeQSprite_ptr);
    tolua_function(tolua_S,"sync",tolua_openquick_tolua_quick_QTiledMapLayer_sync00);
    tolua_function(tolua_S,"reverseSync",tolua_openquick_tolua_quick_QTiledMapLayer_reverseSync00);
    tolua_variable(tolua_S,"layerSize",tolua_get_quick__QTiledMapLayer_layerSize,tolua_set_quick__QTiledMapLayer_layerSize);
    tolua_variable(tolua_S,"mapTileSize",tolua_get_quick__QTiledMapLayer_mapTileSize,tolua_set_quick__QTiledMapLayer_mapTileSize);
    tolua_variable(tolua_S,"layerOrientation",tolua_get_quick__QTiledMapLayer_layerOrientation,tolua_set_quick__QTiledMapLayer_layerOrientation);
    tolua_function(tolua_S,"releaseMap",tolua_openquick_tolua_quick_QTiledMapLayer_releaseMap00);
    tolua_function(tolua_S,"_checkSpriteAtGridRef",tolua_openquick_tolua_quick_QTiledMapLayer__checkSpriteAtGridRef00);
    tolua_function(tolua_S,"_setActiveSpriteCCNode",tolua_openquick_tolua_quick_QTiledMapLayer__setActiveSpriteCCNode00);
    tolua_function(tolua_S,"getGIDAtGridRef",tolua_openquick_tolua_quick_QTiledMapLayer_getGIDAtGridRef00);
    tolua_function(tolua_S,"setGIDAtGridRef",tolua_openquick_tolua_quick_QTiledMapLayer_setGIDAtGridRef00);
    tolua_function(tolua_S,"_removeTileAtGridRef",tolua_openquick_tolua_quick_QTiledMapLayer__removeTileAtGridRef00);
    tolua_function(tolua_S,"getPosAtGridRef",tolua_openquick_tolua_quick_QTiledMapLayer_getPosAtGridRef00);
    tolua_function(tolua_S,"setupTiles",tolua_openquick_tolua_quick_QTiledMapLayer_setupTiles00);
    tolua_function(tolua_S,"getProperty",tolua_openquick_tolua_quick_QTiledMapLayer_getProperty00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QTiledMap","quick::QTiledMap","quick::QNode",tolua_collect_quick__QTiledMap);
   #else
   tolua_cclass(tolua_S,"QTiledMap","quick::QTiledMap","quick::QNode",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QTiledMap");
    tolua_function(tolua_S,"_getToLuaClassName",tolua_openquick_tolua_quick_QTiledMap__getToLuaClassName00);
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QTiledMap___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QTiledMap___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QTiledMap_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QTiledMap_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QTiledMap_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QTiledMap_delete00);
    tolua_function(tolua_S,"_getCCNodeNumChildren",tolua_openquick_tolua_quick_QTiledMap__getCCNodeNumChildren00);
    tolua_function(tolua_S,"_createQTiledMapLayer",tolua_openquick_tolua_quick_QTiledMap__createQTiledMapLayer00);
    tolua_function(tolua_S,"sync",tolua_openquick_tolua_quick_QTiledMap_sync00);
    tolua_function(tolua_S,"reverseSync",tolua_openquick_tolua_quick_QTiledMap_reverseSync00);
    tolua_variable(tolua_S,"mapSize",tolua_get_quick__QTiledMap_mapSize,tolua_set_quick__QTiledMap_mapSize);
    tolua_variable(tolua_S,"tileSize",tolua_get_quick__QTiledMap_tileSize,tolua_set_quick__QTiledMap_tileSize);
    tolua_variable(tolua_S,"mapOrientation",tolua_get_quick__QTiledMap_mapOrientation,tolua_set_quick__QTiledMap_mapOrientation);
    tolua_function(tolua_S,"init",tolua_openquick_tolua_quick_QTiledMap_init00);
    tolua_function(tolua_S,"getLayerNamed",tolua_openquick_tolua_quick_QTiledMap_getLayerNamed00);
    tolua_function(tolua_S,"getObjectGroupNamed",tolua_openquick_tolua_quick_QTiledMap_getObjectGroupNamed00);
    tolua_function(tolua_S,"getProperty",tolua_openquick_tolua_quick_QTiledMap_getProperty00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QTimer","quick::QTimer","",tolua_collect_quick__QTimer);
   #else
   tolua_cclass(tolua_S,"QTimer","quick::QTimer","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QTimer");
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QTimer_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QTimer_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QTimer_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QTimer_delete00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"ease",0);
  tolua_beginmodule(tolua_S,"ease");
   tolua_function(tolua_S,"linear",tolua_openquick_tolua_ease_linear00);
   tolua_function(tolua_S,"one",tolua_openquick_tolua_ease_one00);
   tolua_function(tolua_S,"zero",tolua_openquick_tolua_ease_zero00);
   tolua_function(tolua_S,"powIn",tolua_openquick_tolua_ease_powIn00);
   tolua_function(tolua_S,"powOut",tolua_openquick_tolua_ease_powOut00);
   tolua_function(tolua_S,"powInOut",tolua_openquick_tolua_ease_powInOut00);
   tolua_function(tolua_S,"expIn",tolua_openquick_tolua_ease_expIn00);
   tolua_function(tolua_S,"expOut",tolua_openquick_tolua_ease_expOut00);
   tolua_function(tolua_S,"expInOut",tolua_openquick_tolua_ease_expInOut00);
   tolua_function(tolua_S,"sineIn",tolua_openquick_tolua_ease_sineIn00);
   tolua_function(tolua_S,"sineOut",tolua_openquick_tolua_ease_sineOut00);
   tolua_function(tolua_S,"sineInOut",tolua_openquick_tolua_ease_sineInOut00);
   tolua_function(tolua_S,"elasticIn",tolua_openquick_tolua_ease_elasticIn00);
   tolua_function(tolua_S,"elasticIn",tolua_openquick_tolua_ease_elasticIn01);
   tolua_function(tolua_S,"elasticOut",tolua_openquick_tolua_ease_elasticOut00);
   tolua_function(tolua_S,"elasticOut",tolua_openquick_tolua_ease_elasticOut01);
   tolua_function(tolua_S,"elasticInOut",tolua_openquick_tolua_ease_elasticInOut00);
   tolua_function(tolua_S,"elasticInOut",tolua_openquick_tolua_ease_elasticInOut01);
   tolua_function(tolua_S,"bounceIn",tolua_openquick_tolua_ease_bounceIn00);
   tolua_function(tolua_S,"bounceOut",tolua_openquick_tolua_ease_bounceOut00);
   tolua_function(tolua_S,"bounceInOut",tolua_openquick_tolua_ease_bounceInOut00);
   tolua_function(tolua_S,"backIn",tolua_openquick_tolua_ease_backIn00);
   tolua_function(tolua_S,"backOut",tolua_openquick_tolua_ease_backOut00);
   tolua_function(tolua_S,"backInOut",tolua_openquick_tolua_ease_backInOut00);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QTween","quick::QTween","",tolua_collect_quick__QTween);
   #else
   tolua_cclass(tolua_S,"QTween","quick::QTween","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QTween");
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QTween_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QTween_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QTween_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QTween_delete00);
    tolua_variable(tolua_S,"target",tolua_get_quick__QTween_target_ptr,tolua_set_quick__QTween_target_ptr);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QVec2","quick::QVec2","",tolua_collect_quick__QVec2);
   #else
   tolua_cclass(tolua_S,"QVec2","quick::QVec2","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QVec2");
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QVec2___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QVec2___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QVec2_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QVec2_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QVec2_new00_local);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QVec2_new01);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QVec2_new01_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QVec2_new01_local);
    tolua_function(tolua_S,"Set",tolua_openquick_tolua_quick_QVec2_Set00);
    tolua_function(tolua_S,"Length",tolua_openquick_tolua_quick_QVec2_Length00);
    tolua_function(tolua_S,"Normalize",tolua_openquick_tolua_quick_QVec2_Normalize00);
    tolua_function(tolua_S,"isPointInsideTri",tolua_openquick_tolua_quick_QVec2_isPointInsideTri00);
    tolua_function(tolua_S,"GetNormal",tolua_openquick_tolua_quick_QVec2_GetNormal00);
    tolua_variable(tolua_S,"x",tolua_get_quick__QVec2_x,tolua_set_quick__QVec2_x);
    tolua_variable(tolua_S,"y",tolua_get_quick__QVec2_y,tolua_set_quick__QVec2_y);
    tolua_variable(tolua_S,"g_Zero",tolua_get_quick__QVec2_g_Zero,tolua_set_quick__QVec2_g_Zero);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"QVector","quick::QVector","quick::QNode",tolua_collect_quick__QVector);
   #else
   tolua_cclass(tolua_S,"QVector","quick::QVector","quick::QNode",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QVector");
    tolua_function(tolua_S,"_getToLuaClassName",tolua_openquick_tolua_quick_QVector__getToLuaClassName00);
    tolua_function(tolua_S,"__tostring",tolua_openquick_tolua_quick_QVector___tostring00);
    tolua_function(tolua_S,"__serialize",tolua_openquick_tolua_quick_QVector___serialize00);
    tolua_function(tolua_S,"new",tolua_openquick_tolua_quick_QVector_new00);
    tolua_function(tolua_S,"new_local",tolua_openquick_tolua_quick_QVector_new00_local);
    tolua_function(tolua_S,".call",tolua_openquick_tolua_quick_QVector_new00_local);
    tolua_function(tolua_S,"delete",tolua_openquick_tolua_quick_QVector_delete00);
    tolua_variable(tolua_S,"_strokeAlphaInternal",tolua_get_quick__QVector__strokeAlphaInternal,tolua_set_quick__QVector__strokeAlphaInternal);
    tolua_function(tolua_S,"sync",tolua_openquick_tolua_quick_QVector_sync00);
    tolua_variable(tolua_S,"strokeWidth",tolua_get_quick__QVector_strokeWidth,tolua_set_quick__QVector_strokeWidth);
    tolua_variable(tolua_S,"strokeColor",tolua_get_quick__QVector_strokeColor,tolua_set_quick__QVector_strokeColor);
    tolua_variable(tolua_S,"strokeAlpha",tolua_get_quick__QVector_strokeAlpha,tolua_set_quick__QVector_strokeAlpha);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
   tolua_module(tolua_S,"physics",0);
   tolua_beginmodule(tolua_S,"physics");
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"quick",0);
  tolua_beginmodule(tolua_S,"quick");
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_openquick_tolua (lua_State* tolua_S) {
 return tolua_openquick_tolua_open(tolua_S);
};
#endif


THIS_MAKEFILE := $(CURDIR)/$(word $(words $(MAKEFILE_LIST)),$(MAKEFILE_LIST))

ifndef COCOS_ROOT
COCOS_ROOT := $(realpath $(dir $(THIS_MAKEFILE))/..)/cocox2d-x
ifeq ($(wildcard $(COCOS_ROOT)),)
  $(error $$COCOS_ROOT not defined.  Either use git submodule init to fetch it or define it yourself)
endif
endif

TARGET = libOpenQuick.so

SOURCES = \
    QAnimate.cpp \
    QAnimation.cpp \
    QAtlas.cpp \
    QAudio.cpp \
    QBase.cpp \
    QCircle.cpp \
    QColor.cpp \
    QDirector.cpp \
    QFont.cpp \
    QLabel.cpp \
    QLines.cpp \
    QLsqlite3.cpp \
    QLuaHelpers.cpp \
    QMain.cpp \
    QNode.cpp \
    QParticles.cpp \
    QPhysics.cpp \
    QPhysicsContact.cpp \
    QPhysicsContactListener.cpp \
    QPhysicsJoint.cpp \
    QPhysicsJointDistance.cpp \
    QPhysicsJointRevolute.cpp \
    QPhysicsJointPrismatic.cpp \
    QPhysicsJointFriction.cpp \
    QPhysicsJointWheel.cpp \
    QPhysicsJointWeld.cpp \
    QPhysicsJointPulley.cpp \
    QPhysicsJointTouch.cpp \
    QPhysicsJointGear.cpp \
    QPhysicsJointRope.cpp \
    QPhysicsNodeProps.cpp \
    QRectangle.cpp \
    QScene.cpp \
    QSceneTextureBatch.cpp \
    QSprite.cpp \
    QSystem.cpp \
    QTiledMap.cpp \
    QTween.cpp \
    QVector.cpp \
    QVec2.cpp \
    ../openquick_tolua.cpp \
    ../sqlite3/sqlite3.c \
    ../sqlite3/lsqlite3.c

include $(COCOS_ROOT)/cocos2dx/proj.linux/cocos2dx.mk

CXXFLAGS += -Wno-uninitialized

SHAREDLIBS += -lcocos2d -lcocosdenshion
COCOS_LIBS = $(LIB_DIR)/libcocos2d.so $(LIB_DIR)/libcocosdenshion.so

INCLUDES += -I../include \
    -I$(COCOS_ROOT)/cocos2dx/platform \
    -I$(COCOS_ROOT)/CocosDenshion/include \
    -I$(COCOS_ROOT)/extensions \
    -I$(COCOS_ROOT)/external \
    -I$(COCOS_ROOT)/scripting/lua/lua \
    -I$(COCOS_ROOT)/scripting/lua/tolua \
    -I$(COCOS_ROOT)/external/chipmunk/include/chipmunk

STATICLIBS += $(LIB_DIR)/libbox2d.a

DEFINES += -DCC_ENABLE_CHIPMUNK_INTEGRATION=1

TARGET := ../lib/linux/$(TARGET)

all: $(TARGET)

$(TARGET): $(OBJECTS) $(CORE_MAKEFILE_LIST)
	@mkdir -p $(@D)
	$(LOG_LINK)$(CXX) $(CXXFLAGS) $(OBJECTS) -shared -o $@ $(SHAREDLIBS) $(STATICLIBS) $(LIBS)

$(OBJ_DIR)/%.o: ../%.cpp $(CORE_MAKEFILE_LIST)
	@mkdir -p $(@D)
	$(LOG_CXX)$(CXX) $(CXXFLAGS) $(INCLUDES) $(DEFINES) -c $< -o $@

$(OBJ_DIR)/%.o: ../%.c $(CORE_MAKEFILE_LIST)
	@mkdir -p $(@D)
	$(LOG_CC)$(CC) $(CCFLAGS) $(INCLUDES) $(DEFINES) -c $< -o $@

$(OBJ_DIR)/%.o: ../source/%.cpp $(CORE_MAKEFILE_LIST)
	@mkdir -p $(@D)
	$(LOG_CXX)$(CXX) $(CXXFLAGS) $(INCLUDES) $(DEFINES) -c $< -o $@

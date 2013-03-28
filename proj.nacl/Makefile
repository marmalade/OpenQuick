ifndef COCOS_ROOT
$(error $$COCOS_ROOT not defined)
endif

TARGET = libOpenQuick.a

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
    ../openquick_tolua.cpp
    #QLsqlite3.cpp \
    #../sqlite3/sqlite3.c \
    #../sqlite3/lsqlite3.c

include $(COCOS_ROOT)/cocos2dx/proj.nacl/cocos2dx.mk

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

CXXFLAGS += -Wno-uninitialized

ifdef DEBUG
TARGET := ../lib/nacl/Debug/$(TARGET)
else
TARGET := ../lib/nacl/Release/$(TARGET)
endif

all: $(TARGET)

$(TARGET): $(OBJECTS) $(CORE_MAKEFILE_LIST)
	@mkdir -p $(@D)
	$(LOG_AR)$(NACL_AR) $(ARFLAGS) $@ $(OBJECTS)

$(OBJ_DIR)/%.o: ../%.cpp $(CORE_MAKEFILE_LIST)
	@mkdir -p $(@D)
	$(LOG_CXX)$(NACL_CXX) -MMD $(CXXFLAGS) $(INCLUDES) $(DEFINES) -c $< -o $@

$(OBJ_DIR)/%.o: ../source/%.cpp $(CORE_MAKEFILE_LIST)
	@mkdir -p $(@D)
	$(LOG_CXX)$(NACL_CXX) -MMD $(CXXFLAGS) $(INCLUDES) $(DEFINES) -c $< -o $@

$(OBJ_DIR)/%.o: %.cpp $(CORE_MAKEFILE_LIST)
	@mkdir -p $(@D)
	$(LOG_CXX)$(NACL_CXX) -MMD $(CXXFLAGS) $(INCLUDES) $(DEFINES) -c $< -o $@

$(OBJ_DIR)/%.o: ../%.c $(CORE_MAKEFILE_LIST)
	@mkdir -p $(@D)
	$(LOG_CC)$(NACL_CC) -MMD $(CXXFLAGS) $(INCLUDES) $(DEFINES) -c $< -o $@

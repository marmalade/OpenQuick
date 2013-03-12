ifndef COCOS_ROOT
$(error $$COCOS_ROOT not defined)
endif

EXECUTABLE = HelloWorld

OPENQICK_ROOT = ../../..

INCLUDES += -I.. -I$(OPENQICK_ROOT)/include -I$(COCOS_ROOT)/CocosDenshion/include

RPATH_REL=
SOURCES = main.cpp ../AppDelegate.cpp

include $(COCOS_ROOT)/cocos2dx/proj.linux/cocos2dx.mk

SHAREDLIBS += -L$(OPENQICK_ROOT)/lib/linux -Wl,-rpath,$(abspath $(OPENQICK_ROOT))/lib/linux -lOpenQuick
SHAREDLIBS += -lcocos2d -lcocosdenshion -llua
COCOS_LIBS = $(LIB_DIR)/libcocos2d.so

$(TARGET): $(OBJECTS) $(STATICLIBS) $(COCOS_LIBS) $(CORE_MAKEFILE_LIST)
	@mkdir -p $(@D)
	$(LOG_LINK)$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@ $(SHAREDLIBS) $(STATICLIBS)

$(OBJ_DIR)/%.o: %.cpp $(CORE_MAKEFILE_LIST)
	@mkdir -p $(@D)
	$(LOG_CXX)$(CXX) $(CXXFLAGS) $(INCLUDES) $(DEFINES) $(VISIBILITY) -c $< -o $@

$(OBJ_DIR)/%.o: ../%.cpp $(CORE_MAKEFILE_LIST)
	@mkdir -p $(@D)
	$(LOG_CXX)$(CXX) $(CXXFLAGS) $(INCLUDES) $(DEFINES) $(VISIBILITY) -c $< -o $@

publish:
	cp -ar ../textures ../quicklua ../config.lua ../main.lua $(BIN_DIR)

run: publish

.PHONY: publish

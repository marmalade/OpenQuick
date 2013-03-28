ifndef COCOS_ROOT
$(error $$COCOS_ROOT not defined)
endif

APP_NAME = HelloWorld

OPENQICK_ROOT = ../../..

SOURCES = main.cpp ../AppDelegate.cpp

SHAREDLIBS = -L$(OPENQICK_ROOT)/lib/nacl/Debug -lOpenQuick
STATICLIBS = -lbox2d

include $(COCOS_ROOT)/cocos2dx/proj.nacl/cocos2dx.mk

INCLUDES += -I.. -I$(OPENQICK_ROOT)/include -I$(COCOS_ROOT)/CocosDenshion/include

TARGET = $(BIN_DIR)/$(APP_NAME)_$(NACL_ARCH).nexe
NMF = $(BIN_DIR)/$(APP_NAME).nmf


all: $(NMF)

$(TARGET): $(OBJECTS) $(LIB_DIR)/libcocos2d.a $(CORE_MAKEFILE_LIST)
	@mkdir -p $(@D)
	$(LOG_LINK)$(NACL_CXX) $(CXXFLAGS) $(LDFLAGS) $(OBJECTS) -o $@ $(SHAREDLIBS) $(STATICLIBS)

$(OBJ_DIR)/%.o: ../%.cpp $(CORE_MAKEFILE_LIST)
	@mkdir -p $(@D)
	$(LOG_CXX)$(NACL_CXX) -MMD $(CXXFLAGS) $(INCLUDES) $(DEFINES) -c $< -o $@

$(OBJ_DIR)/%.o: %.cpp $(CORE_MAKEFILE_LIST)
	@mkdir -p $(@D)
	$(LOG_CXX)$(NACL_CXX) -MMD $(CXXFLAGS) $(INCLUDES) $(DEFINES) -c $< -o $@

$(NMF): $(TARGET)
	$(NACL_SDK_ROOT)/tools/create_nmf.py -o $@ $(BIN_DIR)/*.nexe --objdump=i686-nacl-objdump -L$(NACL_SDK_ROOT)/toolchain/linux_x86_newlib/x86_64-nacl/lib/ -s $(BIN_DIR)

run: all
	mkdir -p Resources
	/bin/cp -ar ../../../quicklua/ ../textures ../*.lua ./Resources
	$(NACL_SDK_ROOT)/tools/httpd.py --no_dir_check

.PHONY: run

PLATFORM ?= linux

all:
	+$(MAKE) -C proj.$(PLATFORM)
	+$(MAKE) -C samples/HelloWorld/proj.$(PLATFORM)

clean:
	+$(MAKE) -C proj.$(PLATFORM) clean
	+$(MAKE) -C samples/HelloWorld/proj.$(PLATFORM) clean

run: all
	+$(MAKE) -C samples/HelloWorld/proj.$(PLATFORM) run

.PHONY: all clean

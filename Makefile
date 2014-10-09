all:
	+$(MAKE) -C proj.linux
	+$(MAKE) -C samples/HelloWorld/proj.linux

clean:
	+$(MAKE) -C proj.linux clean
	+$(MAKE) -C samples/HelloWorld/proj.linux clean

run: all
	+$(MAKE) -C samples/HelloWorld/proj.linux run

.PHONY: all clean

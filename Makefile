obj-m := MKof.o
KDIR := /usr/src/linux

all:
	$(MAKE) -C $(KDIR) M=$$PWD
clean:
	rm -rf built-in.o MKof.ko MKof.mod.* MKof.o Module.symvers modules.order

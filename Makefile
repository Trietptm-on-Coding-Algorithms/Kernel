obj-m += hello-1.o
obj-m += hello-2.o
obj-m += hello-3.o
obj-m += hello-4.o
obj-m += hello-5.o

obj-m += startstop.o
startstop-objs := start.o stop.o

default:
	make -C /lib/modules/$(shell uname -r)/build SUBDIRS=$(shell pwd) modules
	rm -rf ./*.mod.*
	rm -rf ./.*.cmd
	rm -rf ./*.o
	rm -rf ./Module.symvers
	rm -rf ./modules.order

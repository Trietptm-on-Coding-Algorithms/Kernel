obj-m += hello-1.o
obj-m += hello-2.o
obj-m += hello-3.o
obj-m += hello-4.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	rm -rf ./*.o
	rm -rf ./*.mod.*
	rm -rf ./Module.symvers
	rm -rf ./modules.order
	rm -rf ./.*.cmd

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

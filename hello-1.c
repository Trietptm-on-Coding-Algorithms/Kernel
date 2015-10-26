/*
*  Create by err0rless : 2015-10-21
*  hello-1.c : hello-1.ko
*  how to use printk()
*/
#include <linux/module.h> // Needed by all modules
#include <linux/kernel.h> // Needed for KERN_INFO

int init_moudle(void)
{
	printk(KERN_INFO "Hello, World! 1\n");
	// A non 0 return measn init_module failed;
	// module can not be loaded.
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "Good-Bye, World! 1\n");
}

/*
*  start.c - multi field module
*/
#include <linux/kernel.h>
#include <linux/module.h>

int init_module(void)
{
	printk(KERN_INFO "Hello, World - This is the kernel speaking\n");
	return 0;
}

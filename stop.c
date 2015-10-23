/*
*  stop.c - multi field module
*/
#include <linux/kernel.h>
#include <linux/module.h>

void cleanup_module(void)
{
	printk(KERN_INFO "Short is the life of a kernel module\n");
}

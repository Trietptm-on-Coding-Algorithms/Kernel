/*
*  Create by err0rless : 2015-10-21
*  hello-2.c
*  module_init(), module_exit()
*/

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hello_2_init(void)
{
	printk(KERN_INFO "Hello, World! 2\n");
	return 0;	
}

static void __exit hello_2_exit(void)
{
	printk(KERN_INFO "Good-Bye, World! 2\n");
}

module_init(hello_2_init);
module_exit(hello_2_exit);

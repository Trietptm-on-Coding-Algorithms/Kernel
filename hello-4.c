/*
*  Create by err0rless : 2015-10-21
*  hello-4.c
*  License Example
*
*  $ modinfo hello-4.ko // print information
*/

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#define DRIVER_AUTHOR "YoungHoo kim. <err0rless313@gmail.com>"
#define DRIVER_DESC   "A sample driver for license"

// module licenses.
MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);    // who wrote this module
MODULE_DESCRIPTION(DRIVER_DESC); // what does this module do
MODULE_SUPPORTED_DEVICE("testdevice");

static int __init init_hello_4(void)
{
	printk(KERN_INFO "Hello, World! 4\n");
	return 0;
}

static void __exit cleanup_hello_4(void)
{
	printk(KERN_INFO "Good-Bye, World! 4\n");
}

module_init(init_hello_4);
module_exit(cleanup_hello_4);

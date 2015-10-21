int myint = 3;
module_param(myint, int, 0);

int myintarray[2];
module_param_array(myintarray, int, NULL, 0);

int myshortarray[4];
int count;
mydule_param_array(myshortarray, short,0);

/*
*  Create by err0rless : 2015-10-21
*  hello-5.c
*/

#include <linux/module.h>
#include <linux/moduleparam.h> // module param
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/stat.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("err0rless");

static short int myshort = 1;
static int myint = 420;
static long mylong = 9999;
static char *mystring = "blah";
static int myintArray[2] = {-1, -1};
static int arr_argc = 0;

module_param(myshort, short, S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP);
MODUL_PARM_DESC(myshort, "A short integer");

module_param(myint, int, S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);
MODULE_PARM_DESC(mylong, "A long interger");

module_param(mystring, charp, 0000);
MODULE_PARM_DESC(mystring, "A character string");

module_param_array(myintArray, int, &arr_argc, 0000);
MODULE_PARM_DESC(myintArray, "An array of integers");

static int __init hello_5_init(void)
{
	int i;
	printk(KERN_INFO "Hello, World! 5\n");
	printk(KERN_INFO "myshort is a short integer.%hd\n", myshort);
	printk(KERN_INFO "myint is an int.%d\n", myint);
	printk(KERN_INFO "mylong is a long int.%ld\n", mylong);
	printk(KERN_INFO "mystring is a string.%s\n", mystring);

	for (i = 0; i < (sizeof(myintArray) / sizeof(int)); i++)
	{
		printk(KERN_INFO "myintArray[%d] = %d\n", i, myintArray[i]);
	}
	return 0;
}

static void __exit hello_5_exit(void)
{
	printk(KERN_INFO "Good-bye, World! 5\n");
}

module_init(hello_5_init);
module_exit(hello_5_exit);
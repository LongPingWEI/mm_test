/*
 * mm_test_main.c: define the mm_test module.
 */

#include <linux/module.h>

#include "mm_test.h"


struct kobject *allocpages_test_kobj = NULL;
struct kobject *kmalloc_test_kobj = NULL;
struct kobject *vmalloc_test_kobj = NULL;

static int __init mm_test_init(void)
{
	allocpages_test_kobj = allocpages_test_init(&(THIS_MODULE->mkobj).kobj);
	if (!allocpages_test_kobj)
		printk(KERN_ERR "mm_test: allocpages_test inited failed");

	kmalloc_test_kobj = kmalloc_test_init(&(THIS_MODULE->mkobj).kobj);
	if (!kmalloc_test_kobj)
		printk(KERN_ERR "mm_test: kmalloc_test inited failed");

	vmalloc_test_kobj = vmalloc_test_init(&(THIS_MODULE->mkobj).kobj);
	if (!vmalloc_test_kobj)
		printk(KERN_ERR "mm_test: vmalloc_test inited failed");

	printk(KERN_INFO "mm_test module inited!\n");
	return 0;
}

static void __exit mm_test_exit(void)
{
	allocpages_test_exit(allocpages_test_kobj);
	kmalloc_test_exit(kmalloc_test_kobj);
	vmalloc_test_exit(vmalloc_test_kobj);
	printk(KERN_INFO "mm_test module exited!\n");
}

module_init(mm_test_init);
module_exit(mm_test_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("LongPing.WEI");
MODULE_DESCRIPTION("mm_test module is designed to test the preference of \
	memory mangement in kernel");

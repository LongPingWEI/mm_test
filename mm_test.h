#ifndef __MM_TEST_H__
#define __MM_TEST_H__

#include <linux/kobject.h>

struct kobject *allocpages_test_init(struct kobject *parent);
void allocpages_test_exit(struct kobject *allocpages_test_kobj);

struct kobject *kmalloc_test_init(struct kobject *parent);
void kmalloc_test_exit(struct kobject *kmalloc_test_kobj);

struct kobject *vmalloc_test_init(struct kobject *parent);
void vmalloc_test_exit(struct kobject *vmalloc_test_kobj);

#endif
#include "mm_test.h"

struct kobject *kmalloc_test_init(struct kobject *parent)
{
	struct kobject *kobj = kobject_create_and_add("kmalloc_test", parent);
	return kobj;
}

void kmalloc_test_exit(struct kobject *kmalloc_test_kobj)
{
	if (kmalloc_test_kobj) {
		kobject_del(kmalloc_test_kobj);
		kobject_put(kmalloc_test_kobj);
	}
}

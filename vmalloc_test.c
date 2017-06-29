#include "mm_test.h"

struct kobject *vmalloc_test_init(struct kobject *parent)
{
	struct kobject *kobj = kobject_create_and_add("vmalloc_test", parent);
	return kobj;
}

void vmalloc_test_exit(struct kobject *vmalloc_test_kobj)
{
	if (vmalloc_test_kobj) {
		kobject_del(vmalloc_test_kobj);
		kobject_put(vmalloc_test_kobj);
	}
}
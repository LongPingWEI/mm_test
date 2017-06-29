#include "mm_test.h"

struct kobject *allocpages_test_init(struct kobject *parent)
{
	struct kobject *kobj = kobject_create_and_add("allocpages_test", parent);
	return kobj;
}

void allocpages_test_exit(struct kobject *allocpages_test_kobj)
{
	if (allocpages_test_kobj) {
		kobject_del(allocpages_test_kobj);
		kobject_put(allocpages_test_kobj);
	}
}
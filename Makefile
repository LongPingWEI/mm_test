obj-m := mm_test.o
mm_test-objs := mm_test_main.o allocpages_test.o kmalloc_test.o vmalloc_test.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules

.PHONY: clean
clean:
	rm -f *.o *.ko *~ *.mod.c *.order *.symvers *cmd *versions

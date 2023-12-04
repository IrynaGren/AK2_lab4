#include <hello1.h>

MODULE_AUTHOR("Gren Iryna");
MODULE_DESCRIPTION("AK2 Lab4 hello2.c");
MODULE_LICENSE("Dual BSD/GPL");

static uint value = 1;

module_param(value, uint, 0444);
MODULE_PARM_DESC(value, "My description");

static int __init hello2_init(void){
	pr_emerg("Calling print_hello() from hello2...\n");
	print_hello(value);
	return 0;
}

static void __exit hello2_exit(void){}

module_init(hello2_init);
module_exit(hello2_exit);

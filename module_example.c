#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init lkp_init()
{
	printk("<1>hello, kernel");
	return 0;
}
static void __exit lkp_exit()
{
	printk("<1>goobye,kernel");
}

module_init(lkp_init);
module_exit(lkp_exit);

MODULE_LICENSE("GPL");

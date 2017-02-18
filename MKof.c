#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Lab 1 module");
MODULE_AUTHOR("M. Kofman");

static int kaf = 0;
module_param(kaf, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
MODULE_PARM_DESC(kaf, "Number of your department");

static int facult = 0;
module_param(facult, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
MODULE_PARM_DESC(facult, "Number of your faculty");

static int __init my_init(void) {
	pr_alert("Hello, student of %d department of %d faculty\n",kaf,facult);
	return 0;
}

static void __exit my_exit(void) {
	pr_alert("Now, I'm dying...\n");
}

module_init(my_init);
module_exit(my_exit);

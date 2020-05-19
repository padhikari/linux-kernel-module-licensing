// kernel module with licensing and module documentation
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

#define DRIVER_AUTHOR "Pabitra Adhikari <pabitraadhikari@gmail.com>"
#define DRIVER_DESC "Kernel module licensing"

static int __init init_hello_kernel(void) {
  printk(KERN_INFO "Hello World 1.\n");
  return 0;
}
void __exit cleanup_hello_kernel(void) {
  printk(KERN_INFO "Goodbye world 1.\n");
}
module_init(init_hello_kernel);
module_exit(cleanup_hello_kernel);

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_SUPPORTED_DEVICE("testdevices");
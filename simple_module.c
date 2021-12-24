#include <linux/init.h>
#include <linux/module.h>

int simple_init(void) {

    printk(KERN_ERR "Simple module init: %s\n", __FUNCTION__);
    return 0;
}


void simple_exit(void) {

    printk(KERN_ERR "Simple module exit: %s\n", __FUNCTION__);
    return;
}

module_init(simple_init);
module_exit(simple_exit);

Make simple module using:
dmesg -c > /dev/null
make -C /lib/modules/$(uname -r)/build M=$PWD modules
insmod simple_module.ko
dmesg
rmmod simple_module
dmesg

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/syscalls.h>

/* system call to print hello world chun */

asmlinkage int sys_hello_world(void)
{
   printk("hello world chun \n");
   return 0;
} 

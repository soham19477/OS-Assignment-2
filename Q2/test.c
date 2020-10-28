/* Name: Soham Das
   Roll_Number: 2019477 */
#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
int main()
{
	 long int amma = syscall(440,getpid(),"a.txt");
	 printf("System call sys_sh_task_info returned %ld\n", amma);
	 return 0;
}

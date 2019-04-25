#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
	printf("Process ID of current process= %d\n",getpid());
	printf("Process ID of parent process= %d\n",getppid());
	printf("Real user ID of current process= %d\n",getuid());
	printf("Effective user ID of current process= %d\n",geteuid());
	printf("Real group ID of current process= %d\n",getgid());
	printf("Effective group ID of current process= %d\n",getegid());
	for(;;){sleep(1);}
	return 0;
}

#include<stdio.h> 
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main() 
{
	pid_t pid1 = fork();
	pid_t pid2 = fork();
	pid_t pid3 = fork();
	if (pid1 == 0)
	{
		printf("[son] pid %d from [parent] pid %d\n",getpid(),getppid()); 
		exit(0); 
	}
	if (pid2 == 0)
	{
		printf("[son] pid %d from [parent] pid %d\n",getpid(),getppid()); 
		exit(0); 
	}
	if (pid2 == 0)
	{
		printf("[son] pid %d from [parent] pid %d\n",getpid(),getppid()); 
		exit(0); 
	}
	wait(NULL);
	wait(NULL);
	wait(NULL); 
}



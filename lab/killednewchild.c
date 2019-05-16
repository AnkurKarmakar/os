#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
	pid_t pid;
	for(int i = 0;i<5; i++)
	{
		pid = fork();
		if(pid == 0)
		{
			printf("child is running.....processing \n");
			printf("child is exiting... \n");
		}
	}
}

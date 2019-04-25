#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main(int argv, char *argc[])
{
	pid_t pid=fork();
	if (pid == 0)
		execv(argc[2],NULL); 
}


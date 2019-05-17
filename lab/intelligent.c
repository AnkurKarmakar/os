// C program to demonstrate working of wait() 
#include<stdio.h> 
#include<sys/wait.h> 
#include<unistd.h> 

int main() 
{ 
  	int p1 =fork();
	if (p1== 0) 
		printf("HC: hello from child\n"); 
	else
	{ 
		printf("HP: hello from parent\n"); 
		wait(NULL); 
		printf("CT: child has terminated\n");
      printf("Recreating Child \n");
       p1 = fork();
	} 

	printf("Bye\n"); 
	return 0; 
} 

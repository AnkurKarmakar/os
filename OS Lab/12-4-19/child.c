#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
    pid_t pid=fork();
    if (pid==0) { 
        execv("./hello",NULL);
        exit(127); 
    }
    else {
        waitpid(pid,0,0);
    }
    return 0;
}



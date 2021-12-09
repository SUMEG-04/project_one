//Write a program to demonstrate fork where parent and child run different codes and parent 
//process should be executed first.
#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 

void forkexample() 
{ 

    // child process because return value zero 

    if (fork() == 0) 

        printf("Hello from Child!\n"); 

  

    // parent process because return value non-zero. 

    else

        printf("Hello from Parent!\n"); 
} 

int main() 
{ 

    forkexample(); 

    return 0; 
}

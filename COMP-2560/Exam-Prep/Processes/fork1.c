#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int pid;
    
    printf("Only one process\n");
    pid = fork();

    if (pid == -1){
        perror("Impossible to fork!");
        exit(1);
    }

    if(pid > 0){
        printf("I am the parent, pid=%d\n", getpid());
        printf("The value of the parentid=%d\n", getppid());
    }
    else{
        if(pid == 0){
            printf("I am the child, pid=%d\n", getpid());
            printf("The value of the parentid=%d\n", getppid());
        }
    }
    exit(0);
}
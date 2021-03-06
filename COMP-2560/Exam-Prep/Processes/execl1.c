#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(int argc, int *argv[]){
    int pid;
    printf("Before: Process id=%d\n", getpid());

    pid = fork();

    if(pid == 0){
        printf("I am the child %d\n", getpid());
        sleep(5);
        printf("Listing contents of the current directory... \n");
        execl("/bin/ls", "ls", "-l", "-t", (char *)0);
    }
    else{
        printf("I am the parent %d\n", getpid());
        int status;
        int term_pid = wait(&status);

        printf("Child %d has listed the content of current directory\n", term_pid);
        exit(1);
    }
}
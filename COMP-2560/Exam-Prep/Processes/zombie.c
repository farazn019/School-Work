#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>



int main(char *argc, char *argv[]){

    int pid = fork();

    //Parent process
    if (pid != 0){
        printf("I am the parent process, pid=%d\n", getpid());
        while(1){
            sleep(5);
        }
    }

    printf("I am the child process, pid=%d\n", getpid());
    exit(0);


    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int glb = 100;

int main(){

    int pid;
    int var = 88;

    printf("Before fork\n");
    pid = fork();

    if (pid < 0){
        perror("fork error!");
        exit(2);
    }

    if(pid == 0){
        glb++;
        var++;
    }
    else{
        sleep(2);
    }

    printf("pid=%d, glob=%d, var=%d\n", getpid(), glb, var);

}
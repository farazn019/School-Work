#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    alarm(4);

    int pid = fork();

    while(1) {
        alarm(4);
        if (pid == 0){
            printf("I am the child!\n");
        }
        else{
            printf("I am the parent\n");
        }

        sleep(1);
    }
}
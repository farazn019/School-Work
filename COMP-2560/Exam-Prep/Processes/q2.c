#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main(){

    int i;

    printf("before fork, my pid is %d\n", getpid());
    for(i = 0; i < 3; i++){
        if(fork() == 0){
            printf("Hi, I am the child. My pid is %d\n", getpid());
        }
    }

    return 0;
}
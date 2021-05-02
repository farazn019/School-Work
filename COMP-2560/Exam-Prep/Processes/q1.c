#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    printf("before fork, my pid id %d\n", getpid());
    fork();
    fork();
    fork();

    printf("done! my pid is %d\n", getpid());

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void AlarmHandler(int dummy){
    static int n = 0;

    if(n ++ < 6){
        printf("Beeping Beeping.\n");
        alarm(5);
    }
    else{
        exit(0);
    }
}

int main(int argc, char *argv[]){
    alarm(5);
    signal(SIGALRM, AlarmHandler);

    while(1){
        printf("Waiting for a signal.\n");
        pause();
    }
}
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

int main(int argc, char*argv[]){
    int i;

    void (*oldHandler1)();

    void (*oldHandler2)();

    oldHandler1 = signal(2, SIG_IGN);
    oldHandler2 = signal(24, SIG_IGN);
    
    for(i = 0; i < 5; i++){
        printf("I am not sensitive to CTRL-C and CTRL-Z.\n");
        sleep(1);
    }

    signal(2, oldHandler1);
    signal(24, oldHandler2);

    for(i = 0; i < 5; i++){
        printf("I am sensitive to Control C and Control Z.\n");
        sleep(1);
    }
}
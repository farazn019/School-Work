#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>


int main(int argc, char *argv[]){
    int i;

    void (*oldHandler1)();
    void (*oldHandler2)();

    oldHandler1 = signal(2, SIG_IGN);
    oldHandler2 = signal(24, SIG_IGN);

    if (fork() != 0){
        for (i = 1; i < 5; i++){
            printf("Parent: I am not sensitive to Control C and Control Z");
            sleep(1);
        }
    }
    else{
        while(1){
            printf("Child: I am not sensitive to Control C and Control Z.\n");
            sleep(1);
        }
    }
}
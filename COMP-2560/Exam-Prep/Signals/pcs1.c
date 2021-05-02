#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void myAlarmHandler(int);
void myAlarmHandler(int dummy){};
int main(int argc, char* arv[]){
    pid_t pid;
    if((pid = fork()) > 0){
        printf("My child should wait until I am done.\n");
        sleep(4);
        printf("Child, now you can do your job\n");
        kill(pid, SIGALRM);
        printf("Parent Exiting\n");
    }
    else{
        printf("I have to wait for my parent\n");
        signal(SIGALRM, myAlarmHandler);
        pause();
        printf("OK, now I can do my job.\n");
        sleep(2);
        printf("Child Exiting!\n");
    }
    exit(0);
}
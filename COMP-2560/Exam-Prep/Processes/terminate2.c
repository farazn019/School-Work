#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/wait.h>


int main(){
    int newpid;

    printf("Before: My pid is, %d\n", getpid());

    newpid = fork();

    if(newpid == -1){
        perror("There was an error in the pid.");
    }
    else if(newpid == 0){
        printf("I am the child pid %d, now sleeping...\n", getpid());
        sleep(5);
        exit(47);
    }
    else{
        printf("I am the parent %d\n", getpid());
        int status;
        int child_pid = wait(&status);
        printf("My child %d has terminated.\n", child_pid);
        printf("I have received the status=%d\n", status);
        int child_status = status >> 8;
        int signal = status & 0x7F;
        int core = status & 0x80;

        printf("Child Status = %d\nSignal Status = %d\nCore Status=%d\n", child_status, signal, core);
    }
}
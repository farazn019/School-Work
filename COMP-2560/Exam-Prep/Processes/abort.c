#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/wait.h>

int main(){
    int newpid;

    printf("Before: my pid is %d\n", getpid());
    if((newpid = fork()) == -1){
        perror("A fork error has occured.\n");
    }
    else if(newpid == 0){
        printf("I am the child %d now sleeping...\n", getpid());
        sleep(5);
        abort();
    }
    else{
        printf("I am the parent %d\n", getpid());
        int status;
        int child_pid = wait(&status);

        printf("My child %d has termianted.\n", child_pid);
        printf("I have received the status = %d\n", status);

        int child_status = status >> 8;
        int signal = status & 0x7F;
        int core = status & 0x80;

        printf("Child status = %d\nSignal status = %d\nCore status = %d\n", child_status, signal, core);
    }
}
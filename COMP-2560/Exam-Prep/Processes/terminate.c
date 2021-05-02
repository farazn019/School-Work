#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/wait.h>


int main(){
    int newpid;

    printf("before: my pid=%d\n", getpid());
    newpid = fork();
    if(newpid == -1){
        perror("fork error");
    }

    else if(newpid == 0){
        printf("I am the child process %d now sleeping...\n", getpid());
        sleep(2);
        printf("I am the child process. The child process (me) is now gone!\n");
        exit(47);
    }

    else{
        printf("I am the parent_pid=%d\n", getpid());
        sleep(10);
        printf("My child %d must be gone by now. So, I am leaving too...\n", newpid);
        printf("I am gone too!\n");
        exit(1);

    }
}
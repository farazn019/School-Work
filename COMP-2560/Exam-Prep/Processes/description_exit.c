#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>


void pr_exit(int status){
    if(WIFEXITED(status)){
        printf("Normal termination. Exit status = %d\n", WEXITSTATUS(status));
    }

    else if(WIFSIGNALED(status)){
        printf("Abnormal Termination. Signal Number = %d%s\n", WTERMSIG(status) #ifdef WCOREDUMP 
        WCOREDUMP(status) ? "Core file Generated\n": "Core file not generated\n" 
        #else 
        "");
        #endif
    }
    else if(WIFSTOPPED(status)){
        printf("Child stopped, Signal Number = %d\n", WSTOPSIG(status));
    }

}
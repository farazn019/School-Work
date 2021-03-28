#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t pid_one = fork();
    pid_t pid_two = fork();

    if(pid_one == 0 && pid_two > 0){
        sleep(2);
        printf("The pid of child one is, %d.\n", getpid());
        printf("The parent id of child one is, %d.\n", getppid());
    }
   
    if(pid_one > 0 && pid_two > 0){
        sleep(2);
        printf("The pid of the parent is, %d.\n", getpid());
        printf("The pid of child one is, %d.\nThe pid of child two is, %d.\n", pid_one, pid_two);
    }
   
    if(pid_two == 0 && pid_one > 0){
        sleep(2);
        printf("The pid of child two is, %d.\n", getpid());
        printf("The parent id of child two is, %d.\n", getppid());
    }
   
    int status = -1;
    //waitpid(pid_two, &status, WEXITED);
   
   
    return 0;
}
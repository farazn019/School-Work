#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
    int file = open("file.txt", O_CREAT | O_RDWR);

    //This will get the size of the file.
    int fileLength = lseek(file, 0, SEEK_END);
    lseek(file, 0, SEEK_SET); //Sets the position of the file back to the beginning.

    pid_t pidOne;
    pidOne = fork();
    wait(&pidOne);
    //printf("%ld", (long int)pidOne);

    if(pidOne == 0){
        char c[fileLength];
        read(file, c, fileLength);
        write(1, c, fileLength);
        close(file);
        sleep(5);
        printf("\nChild terminating\n");
        sleep(5);
        exit(20);
    }
    else{
        printf("My child has terminated\n");
        pid_t status,exit_status;
        wait(&status);
        exit_status = WEXITSTATUS(status);
        printf("Exit status of child: %d\n",exit_status);
    }


    return 0;
}
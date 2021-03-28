#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int main(){

    int fileOne = open("newFile1.txt", O_CREAT | O_RDWR);

    if( fileOne == -1 ) {
      perror("Error: ");
      return(-1);
   }

    int fileTwo = open("file.txt", O_RDONLY);

    printf("%d\n", fileOne);


    pid_t pid;
    pid = fork();


    if(pid != 0){
        pid_t pidTwo;
        wait(&pidTwo);
    }

    else{
        int fileLength = lseek(fileTwo, 0, SEEK_END);

        //printf("%d", fileLength);

        char buffer[fileLength];

        lseek(fileTwo, 0, SEEK_SET);

        read(fileTwo, &buffer, fileLength);
        write(fileOne, &buffer, fileLength);
        sleep(5);
        char* message = "Child terminating";
        write(fileTwo, message, 17);
        sleep(5);
        exit(20);

    }


    return 0;
}
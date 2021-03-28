#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char * argv[]){
    int fd1, fd2;
    char buffer;

    long int i = 0, fileSize = 0;

    fd1 = open(argv[1], O_RDONLY);
    fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0755);

    while(read(fd1, &buffer, 1) > 0){
        fileSize ++;
    }
    while(++i <= fileSize){
        lseek(fd1, -i, SEEK_END);
        read(fd1, &buffer, 1);
        write(fd2, &buffer, 1);
    }

    close(fd1);
    close(fd2);
}
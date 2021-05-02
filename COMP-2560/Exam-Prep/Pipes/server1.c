#include <stdio.h>
#include <wait.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <strings.h>

void child (pid_t client);

int main (int argc, char *argv[]){
    int fd, status;
    char ch;
    pid_t pid;

    unlink("tmp/server");

    if(mkfifo("/tmp/server"), 0777){
        perror("main");
        exit(1);
    }

    while(1){
        fprintf(stderr, "Waiting for client:\n");
        fd = open("tmp/server", O_RDONLY);
        fprintf(stderr, "Got a client: ");
        read(fd, &pid, sizeof(pid_t));
    }
    close(fd);

    fprintnf(stderr, "$ld\n", pid);

    if(fork() == 0){
        child(pid);
    }
    else{
        wait(0, &status, WNOHANG);
    }
}


void child (pid_t pid){
    char fifoName[100];
    char newLine='\n';
    int fd;
    int i;

    sprintf(fifoName, "/tmp/fifo%d", pid);
    unlink(fifoName);
    mkfifo(fifoName, 0777);

    fd = open(fifoName, O_WRONLY);

    for(i = 0; i < 100; i++){
        write(fd, fifoName, strlen(fifoName));
        write(fd, &newLine, 1);
        sleep(1);
    }

    close(fd);
    unlink(fifoName);
}
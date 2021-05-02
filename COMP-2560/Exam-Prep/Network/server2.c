#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netinet/in.h>
#include <sys/un.h>
#include <sys/socket.h>
#include "client2.c"

int main(int argc, char *argv[]){
    char buffer[100];

    int sd, cd;

    socklen_t len;
    struct sockaddr_in serverAddress, clientAddress;

    sd = socket(AF_INET, SOCK_STREAM, 0);
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = INADDR_ANY;
    serverAddress.sin_port = 7777;

    bind(sd, (struct sockaddr*)&serverAddress, sizeof(serverAddress));
    listen(sd, 5);


    while(1){
        len = sizeof(clientAddress);
        cd = accept(sd, (struct sockaddr*) &clientAddress, &len);

        if(fork() == 0){
            child(cd);
        }
        close(cd);
    }
}



void child(int sd){
    char line[255];

    while(1) {
        fprintf(stderr, "Enter a line to send to the client:\n");
        scanf("%s", line);
        write(sd, line, strlen(line) + 1);

        if(!read(sd, line, 255)){
            close(sd);
            exit(0);
        }

        fprintf(stderr, "Client sent bacl: %s\n", line);
    }
}
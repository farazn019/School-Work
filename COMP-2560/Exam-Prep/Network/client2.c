#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netinet/in.h>
#include <sys/un.h>
#include <sys/socket.h>


int main(int argc, char *argv[]){
    char buffer[100];

    int server;

    socklen_t len;
    struct sockaddr_in serverAddress;

    server = socket(AF_INET, SOCK_STREAM, 0);

    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = inet_addr(argv[1]);
    serverAddress.sin_port = 7777;

    connect(server, (struct sockaddr *) &serverAddress, sizeof(serverAddress));

    while(1){
        read(server, buffer, 255);
        fprintf(stderr, "Server's message: %s\n", buffer);
        scanf("%s", buffer);
        if(buffer[0]=='$'){
            close(server);  
            exit(0);
        }
    }
}
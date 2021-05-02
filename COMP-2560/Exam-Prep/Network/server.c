#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netinet/in.h>
#include <sys/un.h>
#include <sys/socket.h>

int main(int argc, char *argv[]){
    char buffer[100] = "Hello, here is my message\n";
    int sd, client;

    socklen_t len;

    struct sockaddr_in servAddress;
    struct sockaddr_in cliAddress;

    sd = socket(AF_INET, SOCK_STREAM, 0);
    servAddress.sin_family = AF_INET;
    servAddress.sin_addr.s_addr = INADDR_ANY;
    servAddress.sin_port = 7777;

    bind(sd, (struct sockaddr*)&servAddress, sizeof(servAddress));

    listen(sd, 5);

    while(1){
        len = sizeof(cliAddress);

        client = accept(sd, (struct sockaddr* ) &cliAddress, sizeof(cliAddress));
        write(client, buffer, strlen(buffer) + 1);
        close(client);
    }
}
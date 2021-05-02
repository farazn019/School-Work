#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int main(){
    int pid, fd, i;
    char c;

    if((fd=open("test.txt", O_RDWR | O_CREAT, 0644)) == -1){
        perror("test error!");
    }

    if((pid = fork()) < 0){
        perror("Fork error!\n");
        exit(1);
    }

    if(pid == 0){
        for(i = 65; i < 85; i++){
            c = i;
            write(fd, &c, 1);
        }
    }
    
    else{
        for(i = 0; i < 20; i++){
            c = 64;
        }
    }

    return(0);
}
/*
int main(){
int pid, fd, i;  char c;

if ( (fd =open("test",O_RDWR|O_CREAT, 0644)) == -1 ){  perror("test");
}

if( (pid = fork())< 0 ){
perror("fork");  exit(1);
}
if(pid == 0) // child
for( i =65; i < 85; i++){  c= i; write(fd, &c ,1);
}
else // parent
for( i = 0 ; i< 20; i++){  c= 64; // character @  write(fd, &c ,1);
}
return 0;
}*/
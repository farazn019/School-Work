#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>


int main(int argc, char *argv[]){

    int fileOne, fileTwo;
    fileOne = open(argv[1], O_RDONLY);
    fileTwo = open(argv[2], O_WRONLY);
    
    char character;
    int current_offset;
    
    current_offset = lseek(fileOne, 0, SEEK_END);

    while(current_offset > 0){
        read(fileOne, &character, 1); 
        write(fileTwo, &character, 1); 
        lseek(fileOne, -2, SEEK_CUR);   
        current_offset--;     
    }

    close(fileOne);
    close(fileTwo);
    return 0;
}






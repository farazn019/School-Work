#include <stdio.h>


int main(int argc, char *argv[]){
    FILE *file;
    file = fopen(argv[1], "r");

    fseek(file, 0, SEEK_END);
    int length = ftell(file);
    
    printf("There are %d characters in this file.", length);
    fclose(file);
    return 0;
}

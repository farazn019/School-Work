#include<stdio.h>

int main(int argc, char *argv[]){
    int length;
    long file_pointer;
    char readFromInputFile;
    char writeToOutputFile;

    FILE *fileOne;
    FILE *fileTwo;

    fileOne = fopen(argv[1], "r");
    fileTwo = fopen(argv[2], "w");

    fseek(fileOne, 0, SEEK_END);
    file_pointer = ftell(fileOne);

    int currentPosition = 0;

    while(file_pointer){
            currentPosition += 1;
            fseek(fileOne, -currentPosition, SEEK_END);
            readFromInputFile = fgetc(fileOne);
            fputc(readFromInputFile, fileTwo);
            fseek(fileOne, -2L, 1);
            file_pointer -= 1;
    }
    fclose(fileOne);
    fclose(fileTwo);
    return 0;
}
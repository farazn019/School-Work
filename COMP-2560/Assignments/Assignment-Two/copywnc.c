#include <stdio.h>


int main(int argc, char *argv[]){

    if(argc == 3){
        FILE * noCommentsFile;
        noCommentsFile = fopen(argv[2], "w+");

        char character;

        FILE * originalFile;
        originalFile = fopen(argv[1], "r");

        character = fgetc(originalFile);
        int singleLineComment = 0;
        int multiLineComment;
        while(character != EOF){
            if(character == '/' || character == '*'){

                singleLineComment += 1;
                if(singleLineComment == 2 && character == '/'){
                    while(character != '\n'){
                        character = fgetc(originalFile);

                        if(character == '\n'){
                            singleLineComment = 0;
                        }
                    }
                }

                if(character == '*' && singleLineComment >= 1){
                    printf("Made It\n");
                    int starFlag = 0, slashFlag = 0;

                    while (!starFlag || !slashFlag){
                        character = fgetc(originalFile);

                        if(character == '*'){starFlag = 1;}
                        if(character == '/'){slashFlag = 1;}
      
                        if(slashFlag == 1 && starFlag == 1){break;}
                    }
 
                }
            }

            if(character != '/' && character != '*'){
                fputc(character, noCommentsFile);
            }
            character = fgetc(originalFile);
        }

    }
    if(argc == 2){
        printf("There isn't a file that you want to copy this to? \nPlease enter the name of the file that should contain\nthe new .c file without any comments.\n");
    }
    else if(argc == 1){
        printf("Please enter two files with a .c extension.\nOne should contain the original file,\nand the second one should contain the code from\nthe original file and paste it without any comments.\n");
    }

    return 0;
}
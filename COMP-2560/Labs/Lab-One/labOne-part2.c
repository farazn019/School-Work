//Created by Faraz Naseem.... This is part two of the lab.

#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Recursive function.
void findFile(char *path, char *fileName){
    DIR *dpTwo;
    struct dirent *dirpTwo;
    dpTwo = opendir(path);
    
    while((dirpTwo = readdir(dpTwo)) != NULL){
        //printf("Made It\n");

        if(strcmp(dirpTwo->d_name, ".") != 0 && strcmp(dirpTwo->d_name, "..") != 0){


            if(strcmp(fileName, dirpTwo->d_name) == 0){
                printf("%s was found in %s\n", dirpTwo->d_name, path);
                if(dirpTwo->d_type == DT_DIR){
                    printf("This is a directory!\n");
                }
                else{
                    printf("This is a file!\n");
                }
            }
            
            if(dirpTwo->d_type == DT_DIR){
                findFile(dirpTwo->d_name, fileName);
            }

            if((strcmp(".", dirpTwo->d_name) == 0) || (strcmp("..", dirpTwo->d_name) == 0)){
                continue;
            }
        }
    }
    closedir(dpTwo);
}

//Main function
int main(int argc, char *argv[]){

    DIR *dp;
    struct dirent *dirp;


    if(argv[1]){
        findFile("./", argv[1]);
    }

}

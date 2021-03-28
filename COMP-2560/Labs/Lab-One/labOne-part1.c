//Created by Faraz Naseem.
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

//This is the main function.
int main(int argc, char *argv[]){
    DIR *dp;
    struct dirent *dirp;

   dp = opendir(".");

   int found = 0;
    
    if(argv[1]){
        while((dirp=readdir(dp)) != NULL){        
            if(strcmp(dirp->d_name, argv[1]) == 0){
                printf("%s", dirp->d_name);
                if(dirp->d_type == DT_DIR){
                    printf(" is a directory.\n");
                }
                else if(dirp->d_type == DT_REG){
                    printf(" is a file.\n");
                }
                found = 1;
            }
        }

        if((dirp=readdir(dp)) == NULL && found == 0){
            printf("Not found");
        }
    }
    
    closedir(dp);
    exit(0);
}


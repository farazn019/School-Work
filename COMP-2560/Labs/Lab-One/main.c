#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
/*
int main(int argc, char *argv[]){
    DIR *dp;
    struct dirent *dirp;
    char *fileName;


    if(argc==1)
        dp = opendir("./");
    else
        dp = opendir(argv[1]);

    scanf("%s", fileName);

    while((dirp=readdir(dp)) != NULL)
        if(strcmp(dirp->d_name, fileName) == 0)
            printf("%s", fileName);

    closedir(dp);
    exit(0);
}
*/

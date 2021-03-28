#include <stdio.h>
int main () { 

   FILE *fp;
   fp = fopen("file.txt", "w+");
   
   fprintf("This is c programming. \n", fp);

   fclose(fp);

   return(0);

}

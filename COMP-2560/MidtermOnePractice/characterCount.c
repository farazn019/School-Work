#include <stdio.h>



int main(int argc, char *argv[]){
	FILE *file;	
	char ch;
	int fileSize = -1;
	file = fopen(argv[1], "r");
	do{
		ch = getc(file);
		printf("%c\n", ch);
		fileSize ++;
	} while(ch != EOF);
	


}



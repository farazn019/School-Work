#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
	FILE *f1;
	int data[10], i;
	
	for(i = 0;i < 10; i++){
		data[i] = 10*i*i;
	}
	
	if(!(f1=fopen(argv[1], "w"))){
		printf("Could not create file");
		exit(1);
	}
	
	if(fwrite(data, sizeof(int), 10, f1) != 10){
		printf("Error on writing into the file.");
		exit(2);
	}
	fclose(f1);
}

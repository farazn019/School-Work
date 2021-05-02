#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>



int main(int argc, char *argv[]){
	
	printf("I am the parent process, my pid = %d\n", getpid());
	
	int pidOne, pidTwo, pidThree, pidFour;
	//First pid is created.
	if((pidOne=fork()) == 0){
		printf(".. I am a child process, my parent pid = %d, my pid = %d\n", getppid(), getpid());
		
		if((pidThree=fork()) == 0){
			printf(".. I am a child process, my parent pid = %d, my pid = %d\n", getppid(), getpid());
			exit(0);
		}
		exit(2);
	}
	
	//Second pid is created.
	if((pidTwo = fork()) == 0){
		printf(". I am a child process, parent pid = %d, my pid = %d\n", getppid(), getpid());
		if((pidFour=fork()) == 0){
			printf(". I am a child process, parent pid = %d, my pid = %d\n", getppid(), getpid());
			exit(1);
		}
		exit(3);
	}
	

	return 0;
}

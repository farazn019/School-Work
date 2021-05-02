#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int val = 10;

void handler(sig){
	val += 6;
	return;
}

int main(){
	int pid;
	signal(SIGCHLD, handler);
	if((pid=fork()) == 0){
		val -= 3;
		exit(0);
	}
	waitpid(pid, NULL, 0);
	printf("val=%d\n", val);
	exit(0);
}

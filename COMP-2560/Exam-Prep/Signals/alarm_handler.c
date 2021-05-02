#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void alarm_handler(int);

void alarm_handler(int dummy){
    printf("I got an alarm, I took care of signal %d\n", dummy);
    alarm(3);
}

int main(){
    signal(14, alarm_handler);
    alarm(3);

    while(1){
        printf("I am working\n");
        sleep(1);
    }
}
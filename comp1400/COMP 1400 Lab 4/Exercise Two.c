#include <stdio.h>


int main(){
    //This is exercise two
    int num;

    printf("Please enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("\n%d is even ", num);
    }
    else{
        printf("\n%d is odd ", num);
    }
}

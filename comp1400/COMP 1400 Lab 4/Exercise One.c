#include <stdio.h>


int main(){
    int numOne;
    int numTwo;

    scanf("%d", &numOne);
    scanf("%d", &numTwo);

    int remainderNumber = numOne % numTwo;

    printf("The remainder is, %d", remainderNumber);
}

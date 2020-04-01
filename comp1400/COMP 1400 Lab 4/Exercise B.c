#include <stdio.h>

int main(){
    int sumNumbers = 9*1 + 7*3 + 8*1 + 0*3 + 3*1 + 0*3 + 6*1 + 4*3 + 0*1 + 6*3 + 1*1 + 5*3;
    printf("The sum is, %d", sumNumbers);

    int remainderNumber = sumNumbers % 10;
    printf("\nThe remainder of %d after dividing by 10 is, ", sumNumbers, remainderNumber);

    int remainderSubtraction = 10 - remainderNumber;
    printf("\nThe remainder subtracted from 10 gives the value, %d.", remainderSubtraction);

    int check = remainderSubtraction * (10 - 3);
    printf("The value of 7(10 - 3) is, %d", check);
}

#include <stdio.h>


int main(){
    int ISBN1, ISBN2, ISBN3, ISBN4, ISBN5, ISBN6, ISBN7, ISBN8, ISBN9, ISBN10, ISBN11, ISBN12, ISBN13;

    printf("Please input a number for the first twelve digits of the ISBN number:\n");

    scanf("%1d, %1d, %1d, %1d, %1d, %1d, %1d, %1d, %1d, %1d, %1d, %1d ", &ISBN1, &ISBN2, &ISBN3, &ISBN4, &ISBN5, &ISBN6, &ISBN7, &ISBN8, &ISBN9, &ISBN10, &ISBN11, &ISBN12);

    int sumProducts = (ISBN1 * 1) + (ISBN2 * 3) + (ISBN3 * 1) + (ISBN4 * 3) + (ISBN5 * 1) + (ISBN6 * 3) + (ISBN7 * 1) + (ISBN8 * 3) + (ISBN9 * 1) + (ISBN10 * 3) + (ISBN11 * 1) + (ISBN12 * 3);
    printf("The sum is, %d\n", sumProducts);
    int remainderNumber = sumProducts % 10;
    printf("The remainder when we divide by 10 is, %d\n", remainderNumber);

    int subtractionRemainder = 10 - remainderNumber;
    printf("Remainder is subtracted from 10, %d.\n", subtractionRemainder);

    int checkDigit = 7*(subtractionRemainder);
    printf("Check Digit: %d\n", checkDigit);
}

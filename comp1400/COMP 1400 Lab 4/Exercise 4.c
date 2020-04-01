#include <stdio.h>
#define max(a,b,c)
#define min(a,b,c)

int main(){
    int a;
    int b;
    int c;

    printf("Please enter three values for the integers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if((a > b) && (a > c)){
        printf("\n%d is the largest number.", a);
    }
    else if ((b > a) && (b > c)){
        printf("\n%d is the largest number.", b);
    }
    else if ((c > a) && (c > b)){
        printf("\n%d is the largest number.", c);
    }

    if((a < b) && (a < c)){
        printf("\n%d is the smallest number.", a);
    }
    else if((b < a) && (b < c)){
        printf("\n%d is the smallest number.", b);
    }
    else if((c < a) && (c < b)){
        printf("\n%d is the smallest number.", c);
    }
}

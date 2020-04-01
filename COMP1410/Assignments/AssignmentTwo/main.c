//Created By Faraz Naseem..... March 27, 2020.

//All the necessary libraries are imported.
#include <stdio.h>
#include "xstring.h"


//Main Function.
int main() {

    //Variables and arrays are declared.
    char test [150];
    char c;
    char x;

    printf("Please enter a string of characters: ");
    scanf("%[^\n]s", test);


    printf("Please enter a character to test the function  Find First Occurrence: ");
    scanf(" %c", &c);

    printf("The first occurrence of  %c in %s is at index = %d \n", c, test, FindFirstOccurrence(c, test));

    printf("Please enter a character to test the function  Find Last Occurrence: ");
    scanf(" %c", &c);

    printf("The last occurrence of %c in %s is at index = %d \n", c, test, FindLastOccurrence(c, test));

    printf("The weight of the C String %s is = %d \n", test, GetStringWeight(test));


    
    ToUpperCase(test); //Upper Case function is called.
    printf("The uppercase version is = %s \n", test);

    
    ToLowerCase(test); //Lower Case function is called.
    printf("The lowercase version is = %s \n", test);

    
    ReverseString(test); //Reverse String function is called.
    printf("The reversed version is = %s \n", test);

    
    printf("Please enter the character you want to replaced when test the function Replace Character: ");
    scanf(" %c", &x);

    printf("Please enter the new  character you want insert when test the function Replace Character: ");
    scanf(" %c", &c);

    ReplaceCharacter(x, c, test); //Replace character function is called.
    printf("The new C String after deleting %c is %s \n", c, test);


    
    printf("Please enter the  character you want remove when test the function Remove Character: ");
    scanf(" %c", &c);
    RemoveCharacter(c, test); //Remove character function is called.

    printf("%s \n", test);

    return 0;
}
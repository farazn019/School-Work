//Created By Faraz Naseem...... March 27, 2020.

//All the necessary libraries are imported.
#include "xstring.h"
#include <stddef.h>


//This function find the first occurence of a specific character in a string.
int FindFirstOccurrence(char c , char *pStr ){
    int index = 0;
    while(*(pStr + index) != '\0'){
        index++;
    }
    int size = index;

    index = 0;
    while(*(pStr + index) != c){
        if((*(pStr + index) == c) || (index == size)){
            break;
        }
        else{
            index++;
        }
    }

    if(*(pStr + index) == c){
        return index + 1;
    }
    else{
        return -1;
    }

    free(pStr);

}


//This function finds the last occurence of a character in a string.
int FindLastOccurrence(char c, char *pStr){
    int sizeOf = 0;
    while(*(pStr + sizeOf) != '\0'){
        sizeOf++;
    }
    
    int size = 0;
    while(sizeOf != 0){
        if((*(pStr + sizeOf) == c) || (sizeOf <= size)){
            free(pStr);
            break;
        }
        else if(*(pStr + sizeOf) != c){
            sizeOf --;
        }
    }

    if(*(pStr + sizeOf) == c){
        free(pStr);
        return(sizeOf + 1);
    }
    else{
        free(pStr);
        return -1;
    }

}


//This function gets the weight of a string.
int GetStringWeight (char *pStr ){
    int index = 0;

    while(*(pStr + index) != '\0'){
        index++;
    }

    int sum = 0;

    for(int i = 0; i < index; i++){
        sum += pStr[i];
    }

    free(pStr);
    return sum;

}



//This function checks to see if a letter is in uppercase form.
int isUpper(char character){
    if(((character >= 65) && (character <= 90)) || ((character >= 97) && (character <= 122)) || (character == 32)){
        char upperCaseChar = character - 32;
        if((character != upperCaseChar) && ((upperCaseChar <= 64) || (upperCaseChar >= 91))){
            return 1; // Returns 1 if the letter is in uppercase form.
        }
        else{
            return 0; //Returns 0 if the letter is not in uppercase form.
        }
    }
    
    free(pStr);
    return 0;
}

//This function converts all the letters to uppercase form.
void ToUpperCase(char *pStr){
    int index = 0;

    while(*(pStr + index) != '\0'){
        if(isUpper(*(pStr + index)) == 1){
            index ++;
        }
        else if(isUpper(*(pStr + index)) == 0){
            if(*(pStr + index) >= 48 && *(pStr + index) <= 57){
                index ++;
            }
            else{
                *(pStr + index) -= 32;
            }
        }
    }

}



//This function checks to see if a letter is in lowercase form.
int isLower(char character){
    if(((character >= 65) && (character <= 90)) || ((character >= 97) && (character <= 122)) || (character == 32)){
        int lowerCaseCharacter = character + 32;
        if((lowerCaseCharacter != character) && ((lowerCaseCharacter > 128) || (lowerCaseCharacter == 64))){
            return 1; // Returns 1 if the letter is in lowercase form.
        }
        
        else{
            return 0; // Returns 0 if the letter is not in lowercase form.
        }
    }
    
    return 0;   
}

//Converts all the alphabet letters in the string to lower case.
void ToLowerCase(char *pStr){
    int index = 0;

    while(*(pStr + index) != '\0'){
        if(isLower(*(pStr + index)) == 1){
            
            index ++;
        }
        else if(isLower(*(pStr + index)) == 0){
            if(*(pStr + index) >= 48 && *(pStr + index) <= 57){
                index ++;
            }
            
            else{
                *(pStr + index) += 32;
            }
        }

    }
}

//Reverses all the letters in the string.
void ReverseString(char *pStr){
    int index = 0;
    int size = 0;
    while(*(pStr + index) != '\0'){
        size++;
        index++;
    }
    
    char reverse_pStr[size];
    for(int current_size = 0; current_size < size; current_size ++){
        reverse_pStr[size - current_size - 1] = pStr[current_size];
    }

    for(int i = 0; i < size; i++){
        *(pStr + i) = reverse_pStr[i];
    }
}

//Replaces all instances of the character x with the character c in the pStr string.
void ReplaceCharacter(char x , char c , char * pStr){
    int index = 0;
    int size = 0;
    while(*(pStr + index) != '\0'){
        size ++;
        index ++;
    }
    
    char pStr2[size];
    
    for(int i = 0; i < size; i++){
        if(*(pStr + i) == x){
            *(pStr2 + i) = c;
        }
        else{
            *(pStr2 + i) = *(pStr + i);
        }
    }
    
    for(int current_index = 0; current_index < size; current_index++){
        *(pStr + current_index) = pStr2[current_index];
    }
    
}


//Removes all instances of a specific character in a string.
void RemoveCharacter(char c, char str[]){
    int index = 0, size = 0;
    while(*(str + index) != '\0'){
        index++;
        size++;
    }
        
    char str2[size];
    
    int j = 0;
    for(int i = 0; i < size; i++){
        if(str[i] != c){
            str2[j] = str[i];
            j++;
        }
    }
    
    for(int l = 0; l < size; l++){
        str[l] = str2[l];
    }
    
}

//This file contains the code for the merge sort algorithm.

#include <iostream>


//This function merges two sub-arrays into one sorted array, with the array, leftIndex, middleIndex, and rightIndex all as input. 
void mergeArray(int arr[], int leftIndex, int middleIndex, int rightIndex){

    int numberOne = middleIndex - leftIndex + 1; //The numberOne variable is set to a value of the middleIndex - leftIndex  +1.
    int numberTwo = rightIndex - middleIndex; //The numberTwo variable is set to a value of the rightIndex - middleIndex.

    int leftSubArray[numberOne]; //The leftSubArray for the merge-sort algorithm is set to a size of, numberOne.
    int rightSubArray[numberTwo]; //The rightSubArray for the merge-sort algorithm is set to a size of, numberTwo.

    //This for-loop iterates through the left sub-array, and populates the left sub-array with array values from 0 to the middle index.
    for(int i = 0; i < numberOne; i++){
        leftSubArray[i] = arr[leftIndex + i];
    }
    //This for-loop iterates through the right sub-array, and populates the right sub-array with array values from middle index + 1 to the furthest right index.
    for(int j = 0; j < numberTwo; j++){
        rightSubArray[j] = arr[middleIndex + j + 1];
    }

    //Three array indices are all set to 0.
    int leftSubArrayIndex = 0;
    int rightSubArrayIndex = 0;
    int mergedSubArrayIndex = leftIndex;

    //While the left array index does not reach the middle and the right sub array index does not reach the middle, the final sorted array will merge.     
    while((leftSubArrayIndex < numberOne) && (rightSubArrayIndex < numberTwo)){
        if(leftSubArray[leftSubArrayIndex] <= rightSubArray[rightSubArrayIndex]){
            arr[mergedSubArrayIndex] = leftSubArray[leftSubArrayIndex];
            leftSubArrayIndex += 1; //leftSubArrayIndex is incremented by 1.
        }
        else{
            arr[mergedSubArrayIndex] = rightSubArray[rightSubArrayIndex];
            rightSubArrayIndex += 1; //rightSubArray index is incremented by 1.
        }
        mergedSubArrayIndex += 1; //The merged subArrayIndex is increased by 1.
    }

    while(leftSubArrayIndex < numberOne){
        arr[mergedSubArrayIndex] = leftSubArray[leftSubArrayIndex];
        leftSubArrayIndex += 1;
        mergedSubArrayIndex += 1;
    }

    while(rightSubArrayIndex < numberTwo){
        arr[mergedSubArrayIndex] = rightSubArray[rightSubArrayIndex];
        mergedSubArrayIndex += 1;
        rightSubArrayIndex += 1;

    }

}


//This is the mergeSort function, where the merge-sort algorithm is applied, with: an integer array, a leftIndex, and a rightIndex as input.
void mergeSort(int arr[], int leftIndex, int rightIndex){
    //If the leftIndex is less than rightIndex, then this if-statement will run, and the mergeSort algorithm is recursively called.
    if(leftIndex < rightIndex){
        int middleIndex = (leftIndex + rightIndex) / 2;
        mergeSort(arr, leftIndex, middleIndex);
        mergeSort(arr, middleIndex + 1, rightIndex);
        mergeArray(arr, leftIndex, middleIndex, rightIndex);
    }

}
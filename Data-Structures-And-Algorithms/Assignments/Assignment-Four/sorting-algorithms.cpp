//This file contains all the sorting algorithm, with the exception of merge sort.

#include <iostream>

//This function swaps the integer values.
void swap(int *numOne, int *numTwo){
    int temp = *numOne;
    *numOne = *numTwo;
    *numTwo = temp;
}

//This function partitions the array, with arr as input (integer array), along with lowIndex and highIndex as input values.
int partition(int arr[], int lowIndex, int highIndex){
    int pivotValue = arr[highIndex]; //The pivot value will be set to the last value in the array.
    int slowIndex = lowIndex - 1; //The slowIndex variable is declared as the lowIndex - 1.
    for(int i = lowIndex; i <= highIndex - 1; i++){
        //If the array at index i is less than or equal to the pivotValue, then the array values at index slowIndex + 1 and at index slowIndex are swapped. 
        if(arr[i] <= pivotValue){
            ++slowIndex; //Increments the slowIndex variable by 1 (left most index).
            swap(&arr[i], &arr[slowIndex]); //The array at index of value i and index of value slowIndex, have their values swapped.
        }

    }
    swap(&arr[slowIndex + 1], &arr[highIndex]); //This function swaps the integer values of the array at index slowIndex + 1 and highIndex.
    return(slowIndex + 1); //This function returns the slowIndex + 1, as the return value for the integer function.
}

/*
int partitionMiddle(int arr[], int lowIndex, int highIndex){
    int pivotIndex = (highIndex - lowIndex) / 2;
    int pivotValue = arr[pivotIndex]; //The pivot value will be set to the last value in the array.
    int slowIndex = lowIndex - 1;
    for(int i = lowIndex; i <= highIndex - 1; i++){
        if(arr[i] >= pivotValue){
            ++slowIndex; //Increments the slowIndex variable by 1 (left most index).
            swap(&arr[i], &arr[pivotIndex]);
        }

    }
    swap(&arr[slowIndex + 1], &arr[pivotIndex]);
    return(slowIndex + 1);
}*/


//This is the randomIndexFunction will compute a random index, with: an integer array, a lowIndex value, and a highIndex value as input
int randomIndexFunction(int arr[], int lowIndex, int highIndex){
    srand(time(NULL)); //This will compute a random integer with respect to the time.
    int random = lowIndex + rand() % (highIndex - lowIndex); //The random variable will be computed from an index of: 0 to the final index.
    swap(&arr[random], &arr[highIndex]); //The array at random index and array at highIndex are swapped.
    return partition(arr, lowIndex, highIndex); //This returns the partition function with the array, lowIndex value, and highIndex value as parameters.
}





//The quickSort function applies the quick-sort sorting algorithm at index size/2, as the pivot value, with arr as input, and lowIndex along with highIndex as input.
void quickSort(int arr[], int lowIndex, int highIndex){

    if(lowIndex >= highIndex){ return;}

    int lowIndexValue = lowIndex; //The lowIndexValue is set to the lowIndex.
    int highIndexValue = highIndex; //The highIndexValue is set to highIndex.
    int middleIndex = (highIndex + lowIndex) / 2; //The middle index is declared as lowIndex + highIndex / 2.
    int pivot = arr[middleIndex]; //The pivot value is set to the array at middleIndex.
    //While the lowIndexValue is less than or index than the highIndexValue, then the while-loop will execute.
    while(lowIndexValue <= highIndexValue){
        while(arr[lowIndexValue] < pivot){ ++lowIndexValue;} //If the array at index lowIndexValue is less than the pivot value, then the lowIndexValue is incremented by 1.
        while(pivot < arr[highIndexValue]){ --highIndexValue;} //If the pivot value is less than the array at highIndexValue, then the highIndexValue is decremented by 1.

        //If the highIndexValue is greater than or equal to lowIndexValue, then this if-statement will run.
        if(highIndexValue >= lowIndexValue){
            swap(&arr[lowIndexValue], &arr[highIndexValue]); //The array values at index lowIndexValue and index at highIndexValue are swapped.
            lowIndexValue += 1; //The lowIndexValue is incremented by 1.
            highIndexValue -= 1; //The highIndexValue is decremented by 1.
        }
    }
    /*
    //If the value of lowIndexValue is less than the parameter at highIndex, then the quicksort algorithm will run.
    if(lowIndexValue < highIndex){
        quickSort(arr, lowIndexValue, highIndex);
    }

    //If the value of highIndexValue is greater than the parameter at lowIndex, then the quicksort algorithm will run.
    if(lowIndex < highIndexValue){
        quickSort(arr, lowIndex, highIndexValue);
    }*/
    quickSort(arr, lowIndex, highIndexValue);
    quickSort(arr, lowIndexValue, highIndex);



}


//The quickSortRandomIndex function applies the quick-sort sorting algorithm at a random index.
void quickSortRandomIndex(int arr[], int lowIndex, int highIndex){
    //As long as the highIndex of the quicksort algorithm is greater than the lowIndex, this will be recursively called.
    if(lowIndex < highIndex){
        int randomIndex = randomIndexFunction(arr, lowIndex, highIndex); //The randomIndex variable is randomly calculated by calling the randomIndexFunction.
        quickSortRandomIndex(arr, lowIndex, randomIndex - 1); //The quickSortRandomIndex function is called at lowIndex(first index) and randomIndex - 1.
        quickSortRandomIndex(arr, randomIndex + 1, highIndex); //The quickSortRandomIndex function is called at randomIndex + 1 and highIndex (last index).
    }
}


//The bubbleSort function that applies the bubble sort algorithm, with an array as input, and the size of an array as input aswell.
void bubbleSort(int arr[], int size){
    //This is the outer-loop that iterates through the array.
    for(int i = 0; i < size; i++){
        //This for-loop is the inner loop that iterates through the array.
        for(int j = 0; j < size - 1 - i; j++){
            //If the array at index j is greater than index j + 1 (both being part of the internal for-loop), then we will swap them.
            if(arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]); //swap the array at indices j and j+1.
            }
        }
    }
}

//The selectionSort function applies the selection sort algorithm, with an array as input, and the size of an array as input aswell.
void selectionSort(int arr[], int size){
    int smallestIndex; //The smallestIndex variable is declared.
    //This is the outer-loop that iterates through the array.
    for(int i = 0; i < size; i++){
        smallestIndex = i; //The smallestIndex variable is set to 'i', which is the current index of the outer loop.
        //This for-loop is the inner loop that iterates through the array.
        for(int j = i  +1; j < size; j++){
            //The if-statement will check to see if the array at the inner index is less than the array at smallestIndex.
            if(arr[j] < arr[smallestIndex]){
                smallestIndex = j; //The smallestIndex variable value is set to the j variable.
            }
        }
        swap(&arr[smallestIndex], &arr[i]); //This will swap the array at index values of smallestIndex and j.
    }
}

//The insertionSort function applies the insertion sort algorithm, with an array as input, and the size of the array as input aswell.
void insertionSort(int arr[], int size){
    //Two integer values are declared: currentValue, j.
    int currentValue, j;
    //This is the outer loop of the array that iterates at index i, and this will compare with every value in the array starting from 0, up until index, i - 1. 
    for(int i = 1; i < size; i++){
        //The currentValue variable's value is set to arr at index i.
        currentValue = arr[i];
        j = i - 1; //The value of j is set to i - 1. This variable will be used as an index for the inner loop.
        while(j >= 0 && arr[j] > currentValue){
            arr[j + 1] = arr[j]; //The value of array at index j + 1, is set to the value of arr at index j.
            j -= 1; //The value of variable j is decreased by 1.
        }
        arr[j + 1] = currentValue; //The value of the array at index j + 1 is set to the value in the currentValue variable.
    }
}

//This function prints the array, with the array and the size of the array as input.
void printArray(int arr[], int size){
    //Iterates through the array and prints it.
    for(int current_index = 0; current_index < size; current_index++){
        std::cout << arr[current_index] << " "; //Prints the array at index current_index.
    }
    std::cout << std::endl;
}


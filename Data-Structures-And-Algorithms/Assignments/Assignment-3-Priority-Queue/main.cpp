//This file contains the code for the program to run through the main function in C++.

//The file "functions.cpp" is included, which contains the 4 data structure files along with the functions to call the data structures.
#include "functions.cpp"

//This is the main function
int main(){
    
    //All the test cases for the array queue are called here.
    arrayQueueTest1();
    arrayQueueTest2();

    //All the cases for the linked list queue are called here.
    linkedListQueueTest1();
    linkedListQueueTest2();

    //All the test cases for the array based priority queue are called here.
    arrayPriorityQueueTest1();
    arrayPriorityQueueTest2(); 
    arrayPriorityQueueTest3();

    //All the test cases for the linkedlist priority queue are called here.
    linkedListPriorityQueueTest1();
    linkedListPriorityQueueTest2();
    linkedListPriorityQueueTest3();
    
    return 0; //Returns 0 to successfuly terminate from the program.
}
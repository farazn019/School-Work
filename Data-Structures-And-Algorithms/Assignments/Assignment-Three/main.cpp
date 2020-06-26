#include <iostream>
#include "queue.cpp"


//The main function.
int main(){

    Queue myqueue = Queue (7); //Creates a queue which can hold 7 integer elements.

    //These statements all store the integers 1 through 7 (inclusive), in the queue.
    myqueue.enqueue(1);
    myqueue.enqueue(2);
    myqueue.enqueue(3);
    myqueue.enqueue(4);
    myqueue.enqueue(5);
    myqueue.enqueue(6);
    myqueue.enqueue(7);

    myqueue.printQueue(); //This prints the reversed queue.


    myqueue.enqueue(8); //This is just a test to see if a new element will really be added to the queue, and if the program is logically correct it will tell the user that they can't enter any more elements, because the queue is full.
    myqueue.reverseQueue(); //Reverses all the elements in the queue.
    myqueue.printQueue(); //Prints the queue with the elements reversed.
    
    return 0; //returns 0 for successful termination of program.
}

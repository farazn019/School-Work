//This file contains all the functions (test cases) that will be called in the main.cpp file.


//All the necessary import from the other files that contain the data structures are made here.
#include "linked-list-queue.cpp"
#include "array-priority-queue.cpp"
#include "array-queue.cpp"
#include "linked-list-priority-queue.cpp"


//This function calls the first array based queue test.
void arrayQueueTest1(){
    arrayQueue *array_queue = (arrayQueue*) new arrayQueue(10);
    array_queue->enqueue("Java");
    array_queue->enqueue("Python");
    array_queue->enqueue("XML");
    array_queue->enqueue("HTML");
    array_queue->enqueue("CSS");
    array_queue->enqueue("LISP");
    array_queue->display();
    array_queue->dequeue();
    array_queue->enqueue("JSON"); 
    array_queue->display();
}

//This function calls the second array based queue test.
void arrayQueueTest2(){
    arrayQueue *array_queue = (arrayQueue*) new arrayQueue(10);
    array_queue->enqueue("Russia");
    array_queue->enqueue("Canada");
    array_queue->enqueue("Australia");
    array_queue->enqueue("Brazil");
    std::cout << "\n\nThere are a total of, " << array_queue->getSize() << " countries in the meeting.";
    array_queue->display();
    array_queue->dequeue();
    std::cout << std::endl << "Now, there are a total of, " << array_queue->getSize() << " countries in the meeting.";
    array_queue->display();
    std::cout << std::endl << std::endl;
}


//This function calls the first linked list based queue test.
void linkedListQueueTest1(){
    queue * ll_queue = (queue*) new queue(8);
    ll_queue->enqueue("Java");
    ll_queue->enqueue("Python");
    ll_queue->enqueue("XML");
    ll_queue->enqueue("HTML");
    ll_queue->enqueue("CSS");
    ll_queue->enqueue("LISP");
    ll_queue->display();
    ll_queue->dequeue();
    ll_queue->enqueue("JSON");
    ll_queue->display();
    std::cout << std::endl << std::endl;
}

//This function calls the second linked list based queue test.
void linkedListQueueTest2(){
    queue* ll_queue = (queue*) new queue(7);
    ll_queue->enqueue("Amsterdam");
    ll_queue->enqueue("Berlin");
    ll_queue->enqueue("Munich");
    ll_queue->enqueue("Moscow");
    ll_queue->display();
    std::cout << "The number of cities in Europe that I have travelled to are: " << ll_queue->getSize();
    ll_queue->dequeue();
    std::cout << std::endl << "Now, the number of cities that I have been to are: " << ll_queue->getSize();
    ll_queue->enqueue("London");
    ll_queue->isFull();
    ll_queue->enqueue("Mannheim");
    ll_queue->display();
}

//This function calls the first array-based priority queue test.
void arrayPriorityQueueTest1(){
    array_pq* array = (array_pq*) new array_pq(7);
    array->enqueue("Java", 2);
    array->enqueue("Python", 1);
    array->enqueue("XML", 4);
    array->enqueue("HTML", 2);
    array->enqueue("CSS", 3);
    std::cout << "\n\nThere are " << array->getSize() << " languages in this queue.";
    array->display();
    array->dequeue();
    array->display();
    array->enqueue("JSON", 3);
    array->display();
}

//This function calls the second array-based priority queue test.
void arrayPriorityQueueTest2(){
    array_pq* array = (array_pq*) new array_pq(6);
    array->enqueue("Data Structures and Algorithms", 1);
    array->enqueue("OOP In Java", 3);
    array->enqueue("Computer Architecture 1", 4);
    array->enqueue("Stats For The Sciences", 2);
    std::cout << std::endl << "\n\nThe amount of courses that I am taking this semester is, " << array->getSize(); 
    array->display();
    array->dequeue();
    array->display();
    array->dequeue();
    array->isEmpty();
    array->display();
    std::cout << std::endl << std::endl;
}

//This function calls the second array-based priority queue test.
void arrayPriorityQueueTest3(){
    array_pq* array = (array_pq*) new array_pq(5);
    array->isEmpty();
    array->enqueue("GS Warriors");
    array->enqueue("LA Clippers"); 
    array->enqueue("LA Lakers");
    array->enqueue("Boston Celtics");
    array->enqueue("Portland Trail Blazers");
    array->isFull();
    std::cout << "The current size of the best NBA teams queue is, " << array->getSize() << " teams.";
    array->display();
    array->dequeue();
    array->display();
    array->enqueue("Houston Rockets");
    array->display();
}

//This function calls the first linked-list based priority queue test.
void linkedListPriorityQueueTest1(){
    linked_list_pq* ll = (linked_list_pq*) new linked_list_pq(7);
    ll->enqueue("Java", 2);
    ll->enqueue("Python", 1);
    ll->enqueue("XML", 4);
    ll->enqueue("HTML", 2);
    ll->enqueue("CSS", 3);
    std::cout << "\n\nThere are " << ll->getSize() << " languages in this priority queue.\n";
    ll->display();
    ll->dequeue();
    ll->display();
    ll->enqueue("JSON", 3);
    ll->display();
}

//This function calls the second linked-list based priority queue test.
void linkedListPriorityQueueTest2(){
    linked_list_pq* ll = (linked_list_pq*) new linked_list_pq(5);
    ll->enqueue("Monopoly", 2);
    ll->enqueue("Chess", 1);
    ll->enqueue("Checkers", 4);
    ll->enqueue("Uno", 2);
    ll->enqueue("Jenga", 3);
    std::cout << "\n\nThere are " << ll->getSize() << " board games in this priority queue.\n";
    ll->isFull();
    ll->display();
    ll->dequeue();
    ll->display();
    ll->enqueue("Game Of Life", 3);
    ll->display();
    ll->isEmpty();
}

//This function calls the third linked-list based priority queue test.
void linkedListPriorityQueueTest3(){
    linked_list_pq* ll = (linked_list_pq*) new linked_list_pq(9);
    ll->isEmpty();
    ll->enqueue("The Karamazov's Brother");
    ll->enqueue("War And Peace");
    ll->enqueue("Gulag Archipelago");
    ll->enqueue("Anna Karenina");
    ll->enqueue("Crime and Punishment");
    std::cout << "\n\nThere are " << ll->getSize() << " books in this priority queue.\n";
    ll->isFull();
    ll->display();
    ll->dequeue();
    ll->display();
    ll->enqueue("Dead Souls", 3);
    ll->display();
}

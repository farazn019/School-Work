//This file calls all the algorithms and their respective data structures, if any.
#include <iostream>

//The other files are imported here.
#include "priority-queue.cpp"
#include "sorting-algorithms.cpp"
#include "merge-sort.cpp"

//This is the main function
int main(){

    //This will print out the priority queue by sorting all of the elements with the selection sort algorithm.
    {
        //The results for queue (sorting by selection sort) one are printed here:
        std::cout << "The results for queue one are:\n";
        priority_queue* queue = new priority_queue(); //A new priority queue is declared.
        queue->addElement(10);
        queue->addElement(9);
        queue->addElement(8);
        queue->addElement(7);
        queue->addElement(6);
        queue->addElement(5);
        queue->addElement(4);
        queue->addElement(3);
        queue->addElement(2);
        queue->addElement(1);

        //The unsorted list is printed here.
        std::cout << "\nThe results of the unsorted priority queue is: ";
        queue->printList();

        //The sorted list is printed here.
        queue->selectionSort();
        std::cout << "\nThe results of this priority queue by sorting (selection sort) the elements is: ";
        queue->printList();

        //The list after dequeing an element is printed here.
        queue->dequeue();
        std::cout << "\nThe results of this priority queue after removing an element is: ";
        queue->printList();
        std::cout << "\n\n" << std::endl;

        //The results for queue (sorting by selection sort) two are printed here:
        std::cout << "The results for queue two are:\n"; 
        priority_queue* queueTwo = new priority_queue(); //A new priority queue is declared.
        queueTwo->addElement(14);
        queueTwo->addElement(25);
        queueTwo->addElement(12);
        queueTwo->addElement(11);
        queueTwo->addElement(13);
        queueTwo->addElement(5);
        queueTwo->addElement(36);
        queueTwo->addElement(7);

        //The unsorted list is printed here.
        std::cout << "\nThe results of the unsorted priority queue is: ";
        queueTwo->printList();

        //The sorted list is printed here.
        queueTwo->selectionSort();
        std::cout << "\nThe results of this priority queue by sorting (selection sort) the elements is: ";
        queueTwo->printList();

        //The list after dequeing an element is printed here.
        queueTwo->dequeue();
        std::cout << "\nThe results of this priority queue after removing an element is: ";
        queueTwo->printList();
        std::cout << "\n\n" << std::endl;

        //The results for queue (sorting by selection sort) three are printed here:
        std::cout << "The results for queue three are:\n";
        priority_queue* queueThree = new priority_queue(); //A new priority queue is declared.
        queueThree->addElement(38);
        queueThree->addElement(17);
        queueThree->addElement(3);
        queueThree->addElement(82);
        queueThree->addElement(9);
        queueThree->addElement(15);
        queueThree->addElement(43);

        //The unsorted list is printed here.
        std::cout << "\nThe results of the unsorted priority queue is: ";
        queueThree->printList();

        //The sorted list is printed here.
        queueThree->selectionSort();
        std::cout << "\nThe results of this priority queue by sorting (selection sort) the elements is: ";
        queueThree->printList();

        //The list after dequeing an element is printed here.
        queueThree->dequeue();
        std::cout << "\nThe results of this priority queue after removing an element is: ";
        queueThree->printList();
        std::cout << "\n\n" << std::endl;

        //The results for queue (sorting by selection sort) four are printed here:
        std::cout << "The results for queue four are:\n";
        priority_queue* queueFour = new priority_queue(); //A new priority queue is declared.
        queueFour->addElement(38);
        queueFour->addElement(17);
        queueFour->addElement(3);
        queueFour->addElement(82);
        queueFour->addElement(9);
        queueFour->addElement(15);
        queueFour->addElement(43);

        //The unsorted list is printed here.
        std::cout << "\nThe results of the unsorted priority queue is: ";
        queueFour->printList();

        //The sorted list is printed here.
        queueFour->selectionSort();
        std::cout << "\nThe results of this priority queue by sorting (selection sort) the elements is: ";
        queueFour->printList();

        //The list after dequeing an element is printed here.
        queueFour->dequeue();
        std::cout << "\nThe results of this priority queue after removing an element is: ";
        queueFour->printList();
        std::cout << "\n\n" << std::endl;
    }

    //This will print out the priority queue by sorting all of the elements in the priority queue using the insertion sort algorithm.
    {
        //The results for queue (sorting by insertion sort) one are printed here:
        std::cout << "The results for queue one are:\n";
        priority_queue* queue = new priority_queue(); //A new priority queue is declared.
        queue->addElement(10);
        queue->addElement(9);
        queue->addElement(8);
        queue->addElement(7);
        queue->addElement(6);
        queue->addElement(5);
        queue->addElement(4);
        queue->addElement(3);
        queue->addElement(2);
        queue->addElement(1);

        //The unsorted list is printed here.
        std::cout << "\nThe results of the unsorted priority queue is: ";
        queue->printList();

        //The sorted list is printed here.
        queue->insertionSort();
        std::cout << "\nThe results of this priority queue by sorting (insertion sort) the elements is: ";
        queue->printList();

        //The list after dequeing an element is printed here.
        queue->dequeue();
        std::cout << "\nThe results of this priority queue after removing an element is: ";
        queue->printList();
        std::cout << "\n\n" << std::endl;

        //The results for queue (sorting by insertion sort) two are printed here:
        std::cout << "The results for queue two are:\n";
        priority_queue* queueTwo = new priority_queue(); //A new priority queue is declared.
        queueTwo->addElement(14);
        queueTwo->addElement(25);
        queueTwo->addElement(12);
        queueTwo->addElement(11);
        queueTwo->addElement(13);
        queueTwo->addElement(5);
        queueTwo->addElement(36);
        queueTwo->addElement(7);

        //The unsorted list is printed here.
        std::cout << "\nThe results of the unsorted priority queue is: ";
        queueTwo->printList();

        //The sorted list is printed here.
        queueTwo->insertionSort();
        std::cout << "\nThe results of this priority queue by sorting (insertion sort) the elements is: ";
        queueTwo->printList();

        //The list after dequeing an element is printed here.
        queueTwo->dequeue();
        std::cout << "\nThe results of this priority queue after removing an element is: ";
        queueTwo->printList();
        std::cout << "\n\n" << std::endl;

        //The results for queue (sorting by insertion sort) three are printed here:
        std::cout << "The results for queue three are:\n";
        priority_queue* queueThree = new priority_queue(); //A new priority queue is declared.
        queueThree->addElement(38);
        queueThree->addElement(17);
        queueThree->addElement(3);
        queueThree->addElement(82);
        queueThree->addElement(9);
        queueThree->addElement(15);
        queueThree->addElement(43);

        //The unsorted list is printed here.
        std::cout << "\nThe results of the unsorted priority queue is: ";
        queueThree->printList();

        //The sorted list is printed here.
        queueThree->insertionSort();
        std::cout << "\nThe results of this priority queue by sorting (insertion sort) the elements is: ";
        queueThree->printList();

        //The list after dequeing an element is printed here.
        queueThree->dequeue();
        std::cout << "\nThe results of this priority queue after removing an element is: ";
        queueThree->printList();
        std::cout << "\n\n" << std::endl;

        //The results for queue (sorting by insertion sort) four are printed here:
        std::cout << "The results for queue four are:\n";
        priority_queue* queueFour = new priority_queue(); //A new priority queue is declared.
        queueFour->addElement(38);
        queueFour->addElement(17);
        queueFour->addElement(3);
        queueFour->addElement(82);
        queueFour->addElement(9);
        queueFour->addElement(15);
        queueFour->addElement(43);

        //The unsorted list is printed here.
        std::cout << "\nThe results of the unsorted priority queue is: ";
        queueFour->printList();

        //The sorted list is printed here.
        queueFour->insertionSort();
        std::cout << "\nThe results of this priority queue by sorting (insertion sort) the elements is: ";
        queueFour->printList();

        //The list after dequeing an element is printed here.
        queueFour->dequeue();
        std::cout << "\nThe results of this priority queue after removing an element is: ";
        queueFour->printList();
        std::cout << "\n\n" << std::endl;
    }


      
    //Four arrays are declared and initalized here.
    int arrOne[] = {14, 25, 12, 11, 13, 5, 36, 7};
    int arrTwo[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arrThree[] = {38, 17, 3, 82, 9, 15, 43};
    int arrFour[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //The sizes of all four of the arrays is computed.
    int sizeOfArrayOne = sizeof(arrOne)/sizeof(arrOne[0]);
    int sizeOfArrayTwo = sizeof(arrTwo)/sizeof(arrTwo[0]);
    int sizeOfArrayThree = sizeof(arrThree)/sizeof(arrThree[0]);
    int sizeOfArrayFour = sizeof(arrFour)/sizeof(arrFour[0]);

    //The selection sort algorithm is applied to all 4 of the arrays.
    std::cout << std::endl << "\n\nThe selection sort algorithm for arrays 1 through 4 gives the results:\n";
    selectionSort(arrOne, sizeOfArrayOne - 1);
    selectionSort(arrTwo, sizeOfArrayTwo - 1);
    selectionSort(arrThree, sizeOfArrayThree - 1);
    selectionSort(arrFour, sizeOfArrayFour - 1);
    printArray(arrOne, sizeOfArrayOne);
    printArray(arrTwo, sizeOfArrayTwo);
    printArray(arrThree, sizeOfArrayThree);
    printArray(arrFour, sizeOfArrayFour);

    //The insertion sort algorithm is applied to all 4 of the arrays.
    std::cout << std::endl << "\n\nThe insertion sort algorithm for arrays 1 through 4 gives the results:\n";
    insertionSort(arrOne, sizeOfArrayOne - 1);
    insertionSort(arrTwo, sizeOfArrayTwo - 1);
    insertionSort(arrThree, sizeOfArrayThree - 1);
    insertionSort(arrFour, sizeOfArrayFour - 1);
    printArray(arrOne, sizeOfArrayOne);
    printArray(arrTwo, sizeOfArrayTwo);
    printArray(arrThree, sizeOfArrayThree);
    printArray(arrFour, sizeOfArrayFour);

    //The bubble sort algorithm is applied to all 4 of the arrays.
    std::cout << std::endl << "\n\nThe bubble sort algorithm for arrays 1 through 4 gives the results:\n";
    bubbleSort(arrOne, sizeOfArrayOne - 1);
    bubbleSort(arrTwo, sizeOfArrayTwo - 1);
    bubbleSort(arrThree, sizeOfArrayThree - 1);
    bubbleSort(arrFour, sizeOfArrayFour - 1);
    printArray(arrOne, sizeOfArrayOne);
    printArray(arrTwo, sizeOfArrayTwo);
    printArray(arrThree, sizeOfArrayThree);
    printArray(arrFour, sizeOfArrayFour);


    //The quick sort algorithm with the pivot always at the middle is applied to all 4 of the arrays.
    std::cout << std::endl << "\n\nThe quick sort algorithm with the pivot always being the middle index for arrays 1 through 4 gives the results:\n";
    quickSort(arrOne, 0, sizeOfArrayOne - 1);
    printArray(arrOne, sizeOfArrayOne);
    quickSort(arrTwo, 0, sizeOfArrayTwo - 1);
    printArray(arrTwo, sizeOfArrayTwo);
    quickSort(arrThree, 0, sizeOfArrayThree - 1);
    printArray(arrThree, sizeOfArrayThree);
    quickSort(arrFour, 0, sizeOfArrayFour - 1);
    printArray(arrFour, sizeOfArrayFour);

    //The quick sort algorithm with the pivot always at a random index is applied to all 4 of the arrays.
    std::cout << std::endl << "\n\nThe quick sort algorithm with the pivot always being a random index for arrays 1 through 4 gives the results:\n";
    quickSortRandomIndex(arrOne, 0, sizeOfArrayOne - 1);
    printArray(arrOne, sizeOfArrayOne);
    quickSortRandomIndex(arrTwo, 0, sizeOfArrayTwo - 1);
    printArray(arrTwo, sizeOfArrayTwo);
    quickSortRandomIndex(arrThree, 0, sizeOfArrayThree - 1);
    printArray(arrThree, sizeOfArrayThree);
    quickSortRandomIndex(arrFour, 0, sizeOfArrayFour - 1);
    printArray(arrFour, sizeOfArrayFour);

    //The merge sort algorithm is applied to all 4 of the arrays.
    std::cout << std::endl << "\n\nThe merge sort algorithm with the pivot always being a random index for arrays 1 through 4 gives the results:\n";
    mergeSort(arrOne, 0, sizeOfArrayOne - 1);
    printArray(arrOne, sizeOfArrayOne);
    mergeSort(arrTwo, 0, sizeOfArrayTwo - 1);
    printArray(arrTwo, sizeOfArrayTwo);
    mergeSort(arrThree, 0, sizeOfArrayThree - 1);
    printArray(arrThree, sizeOfArrayThree);
    mergeSort(arrFour, 0, sizeOfArrayFour - 1);
    printArray(arrFour, sizeOfArrayFour);


    return 0; //The main function returns 0, to signify successful termination.
}
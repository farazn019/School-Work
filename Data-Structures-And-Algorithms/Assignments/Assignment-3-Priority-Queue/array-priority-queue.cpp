//This file holds the code for the array-based priority queue.


#include <iostream>

//This class holds the code for the array-based priority queue.
class array_pq{
    //The private variables are held in here.
    private:
        int *arrayTracker, size_limit, current_size = 0;
        std::string *array;
    public:

        //This is a constructor for the array-based priority queue.
        array_pq(int size_limit){
            this->size_limit = size_limit; //Sets the size limit (number of elements) of the priority queue.
            array = new std::string[this->size_limit]; //Sets the  size of the string array to the size limit, that was declared in the preivous line.
            arrayTracker = new int[this->size_limit]; //Sets the arrayTracker array to the same size as the string array. This array holds the priority values.
 
        }

        //This function computes the size of the array(s).
        int getSize(){
            return(this->current_size); //Returns the size of the array.
        }


        //This function determines if the array is full, and it will return eitheir a true or false value.
        bool isFull(){
            //If the current size is equal to the size limit, then true will be returned.
            if(this->getSize() == this->size_limit){
                std::cout << "\nYes, the priority queue is full!\n"; //Prints a message to the user that the priority queue is full.
                return(true); //returns true
            }
            //If the current size is not equal to the size limit, then false will be returned.
            else{
                std::cout << "\nNo, the priority queue is not full!\n"; //Prints a message to the user telling them that the priority queue is not full.
                return(false); //returns false
            }
        }

        //This function determines if the array is empty, and it will return a boolean value of eitheir true or false.
        bool isEmpty(){
            //If the size of the array is zero, then this block will run, and the function will return a value of true.
            if(this->getSize() == 0){
                return(true); //returns true
            }
            //If the size of the array is not zero, then this block will run, and the function will return a value of false.
            else{
                return(false); //returns false
            }
        }

        //This function adds a value to the end of the arrays.
        void enqueue(std::string element, int priority = 10){
            //If the current size of the arrays are equal to the size limit (in other words, if they are full), then the new element will not be added to the priority queue.
            if(this->current_size == this->size_limit){
                std::cout << std::endl << "We can not enter any more elements, because the priority queue is full!"; //Prints a message telling the user that the priority queue is full.
            }
            //If the array still has space (so, if it's not full), then there will be an element added to the end.
            else{
                array[this->getSize()] = element; //Adds an element to the end of the string array
                arrayTracker[this->getSize()] = priority; //Adds an element to the end of the priority tracker array
                this->current_size += 1; //Increases the current size of both arrays by 1.
            }
        }

        //This function swaps the values of the arrays.
        void swap(std::string *stringValueOne, std::string *stringValueTwo, int *intValueOne, int *intValueTwo){


            //Temporary variables to hold string and integer values
            std::string stringTemp; 
            int intTemp;

            //Swapping of the string elements is done here.
            stringTemp = *stringValueOne;
            *stringValueOne = *stringValueTwo;
            *stringValueTwo = stringTemp;

            //Swapping of the integer elements is done here.
            intTemp = *intValueOne;
            *intValueOne = *intValueTwo;
            *intValueTwo = intTemp;

        }

        //This function sorts the elements of the arrays.
        void sort(){
            for(int i = 0; i < this->current_size; i++){
                for(int j = 0; j < this->current_size - 1; j++){
                    //If the priority of the next element in the priority array is greater than the current one, then the values of the array are swapped.
                    if(this->arrayTracker[j + 1] < this->arrayTracker[j]){
                        swap(&this->array[j], &this->array[j+1], &this->arrayTracker[j], &this->arrayTracker[j+1]);
                    }
                }
            }
        }

        //This function prints the peak (element at index 0), of the array.
        void peak(){
            std::cout << std::endl << "The peak of the priority queue is, " << array[0];
        }

        //This function prints all the elements of the array
        void display(){
            //Before the elements are printed they must be set in order, from highest to lowest priority (1 -> 10).
            this->sort();
            //Prints the first element of the array.
            std::cout << std::endl << array[0];
            //Prints every other element of the array after the first one.
            for(int i = 1; i < this->current_size; i++){
                std::cout << " -> " << array[i];
            }
        }

        //This function removes an element at the highest priority (in other words, it removes the element from the array that is located at index 0).
        void dequeue(){
            //If the size of the array is zero, then there is nothing to remove, and a message is given to the user telling them that.
            if(this->getSize() == 0){
                std::cout << std::endl << "There is nothing in the priority queue to remove";
            }
            //If the size of the array is greater than zero, then there is something that can be removed.
            else{
                //Before we can remove an elements from the array, we must sort them.
                this->sort();
                //Sets the current element's value to the next element in the priority queue.
                for(int i = 0; i < this->current_size - 1; i++){
                    array[i] = array[i + 1];
                }
                //Decreases the size of the priority queue by 1.
                this->current_size -= 1;
            }
        }
};

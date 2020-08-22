//This file holds the code for the array-based queue.

#include <iostream>

//This holds the code for the array-based queue data structure.
class arrayQueue{
    //All the private variables are held here, which are local to only this class.
    private:
        std::string *array;
        int current_size = 0;
        int maximum_size;
    
    //All the public variables / getter and setter methods / all other methods are created here. 
    public:
        //The constructor for this class.
        arrayQueue(int max_size){
            this->maximum_size = max_size; //the maximum size of the array is set (number of elements in the array).
            array = new std::string[max_size]; //the string array is set to the maximum size of the array 
        }

        //This function determines if the array-based queue is empty or not (returns true or false).
        bool isEmpty(){
            //If the size of the queue is zero, then the function will return true.
            if(this->current_size == 0){
                std::cout << std::endl << "Yes, the queue is empty!"; //Prints a message to the user telling them that the queue is empty.
                return(true); //returns true
            }
            //If the size of the queue is not zero, then the function will return false.
            else{
                std::cout << std::endl << "No, the queue is not empty!"; //Prints a message to the user telling them that the queue is not empty.
                return(false); //returns false
            }
        }

        //This function returns the current size of the array (number of elements that the array holds).
        int getSize(){
            return(this->current_size); //returns the current size of the array.
        }

        //This function returns a boolean value (true or false), determining if the array is full
        bool isFull(){
            //If the current size is equal to the maximum size (if the array is full), then the function will return true.
            if(this->current_size == this->maximum_size){
                std::cout << std::endl << "Yes, the queue is full!\n"; //Prints a message telling the user that the queue is full.
                return(true); //The function returns a value of true.
            }
            //If the current size is not equal to the maximum size (the array is not full), then the function will return false.
            else{
                std::cout << std::endl << "No, the queue is not full!\n"; //Prints a message telling the user that the queue is not full.
                return(false); //The function returns a value of false.
            }
        }

        //This function will append an element to the end of the array based queue.
        void enqueue(std::string data){
            //If the current size of the array is less than the maximum size, then a value will be added to the end of the array.
            if(this->current_size < this->maximum_size){
                array[this->current_size] = data;//The data value is added to the very end of the string array.
                this->current_size++; //The size of the array is increased by 1.
            }
            //If the current size is equal to the maximum size (the array is full), then nothing will be added to the end of the array.
            else if(this->current_size == this->maximum_size){
                std::cout << std::endl << "Oh No! You have reached the queue limit of, " << this->maximum_size; //Prints a message to the user telling them that the maximum size of the array has been reached.
            }
        }

        //This function will print all the elements in the array
        void display(){
            //If the size of the array is set to 0, then none of the array values will be printed, because there is nothing in the array to print.
            if(this->current_size == 0){
                std::cout << std::endl << "Nothing to print!"; //Prints a message telling the user that there is nothing to print from the array.
            }
            //If the size of the array is not zero, then all the array values will be printed.
            else{
                //Prints the first element of the array (at index 0).
                std::cout << std::endl << array[0];
                //Iterates through every element after the one at index 0, and prints them.
                for(int i = 1; i < this->current_size; i++){
                    std::cout << "->" << array[i]; 
                }
            }
        }

        //This function will remove the element at the peak (index 0).
        void dequeue(){
            //If the current size of the array is zero (so there is nothing in the array to print).
            if(this->current_size == 0){
                std::cout << std::endl << "There is nothing in the queue to remove!"; //Prints a message telling the user that there is nothing to print from the array, because it is empty.
            }
            //If the current size of the array is not zero (not empty).
            else{
                //If the current size is greater than 1, then the first element of the array will be removed.
                if(this->current_size > 1){
                    //Iterates through the array (starting at index 0), and sets the current element to the next element.
                    for(int i = 1; i < this->current_size; i++){
                        array[i - 1] = array[i];
                    }
                    this->current_size -= 1; //Reduces the current size of the array by 1.
                }
                //If the current size of the array is only 1 (so the array only has 1 element), then the size of the array will be set to zero, thus removing the array.
                else if(this->current_size == 1){
                    this->current_size -= 1; //Reduces the size of the array by 1.
                }
            }
        }

        //This function prints the first element of the array.
        void peek(){
            //If the size of the array is greater than 0, then there is indeed something to print.
            if(this->getSize() > 0){
                std::cout << std::endl << "The peek of the queue is, " << array[0]; //Prints the first element of the array.
            }
            //If the size of the array is not greater than 0 (so, the size of the array is equal to 0).
            else{
                std::cout << std::endl << "The queue does not have a peak, because there is nothing in the queue."; //Tells the user that the size of the array is 0, so there is nothing to print in this queue.
            }
        }
};


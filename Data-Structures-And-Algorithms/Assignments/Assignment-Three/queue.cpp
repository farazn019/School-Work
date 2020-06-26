#include <iostream>


//This is the queue class.
class Queue{
    //These variables are private for security measures.
    private:
        int numberOfElements; //The number of elements in the queue is specified here.        
        int dataValue; //The datavalue of type integer is declared here.
        int *arr = NULL; //A dynamic array of type null is specified here.
        int front; //The front of the array.
        int rear; //The rear of the array.
        int currentSize = 0; //The currentSize of the array which will be incremented as elements are added, is initally set to a value of 0.

    //Public variables and methods are here.
    public:
        
        //This is the constructor for the queue. The user will be asked to specify the size of the queue.
        Queue(int n){
            numberOfElements = n; //number of elements (size of queue) is set to be the variable 'n'
            front = 0;
            rear = 0;
            arr = new int[numberOfElements];
        }

        void setCurrentSize(int size) {currentSize = size;} //Sets the number of elements currently in the array.

        int getCurrentSize() {return currentSize;} //Gets the number of elements currently in the array.
        //This method adds an integer value to the queue.
        void enqueue(int value){
            dataValue = value;
            //If the numberOfElements is equal to the size of the list that we initialized, then
            if((numberOfElements != getCurrentSize()) && (numberOfElements > 1)){

                if(currentSize < numberOfElements){
                    arr[currentSize] = value;
                }
                
                currentSize += 1; //Increments the size by 1.
                setCurrentSize(currentSize); //The current size of the queue is set to the currentSize + 1
                rear = currentSize; //The rear pointer points to the last element.
            }

            //This is the case when the size of the queue is only 1.
            else if((numberOfElements == 1) && (numberOfElements != getCurrentSize())){
                arr[currentSize] = value;
                currentSize += 1;
                setCurrentSize(currentSize);
                front = currentSize;
                rear = currentSize;
            }

            //Checks to see if the queue if full
            else if(numberOfElements == getCurrentSize() ){
                //If the queue is full, it will give an error message to the user.
                std::cout << "Sorry, can't store any more elements. The queue is full!" << std::endl;
            }
            
        }

        //Prints the elements in the queue.
        void printQueue(){
            int i;
            for(i = 0; i < currentSize - 1; i++){
                std::cout << arr[i] << " <-- ";
            }
            std::cout << arr[i];
            std::cout << std::endl;
        }
        
        //Reverses the queue.
        void reverseQueue(){
            int tempArr[currentSize];
            for(int i = 0; i < currentSize; i++){
                tempArr[i] = arr[i];
            }
            for(int j = (currentSize - 1), k = 0; j >= 0; j--){
                arr[k] = tempArr[j];
                k++;
            }
            
        }
};
//This file is the linked list implementation of a queue
#include <iostream>

//This class contains the code/blueprint for creating each node of the linked list.
class node{
    //Private variables.
    private:
        std::string value;
        int sizeQueue;
    //Public variables and methods.
    public:

        //Getter methods.
        std::string getValue(){return(this->value);}
        int getSizeQueue(){return (this->sizeQueue);}

        //Setter methods.
        void setValue(std::string stringValue){this->value = stringValue;}
        void setSizeQueue(int size) {this->sizeQueue = size;}


        node *nextNode;//A reference to the next node in the linked list.
};

//This is the queue for linked lists.
class queue{
    //This holds all the private variables and the head node.
    private:
        node *head = (node*) new node; //The head node for the linked list.
        int current_size = 0; //This variable hold the current size of the queue.
        int queueSize;//This will hold the maximum size for the queue.
    //This holds all the public variables and all the setter/getter functions and other methods.
    public:

        //The constructor prompts the user for the size of the queue.
        queue(int sizeQueue){
            this->queueSize = sizeQueue; 
        }

        //This will add a node to the end of the queue.
        void enqueue(std::string data){
            node *current = head; //The current node will initally point to the head of the linked list queue.
            //If the current size of the linked list is less than the maximum size, then this if-statement will run.
            if(this->current_size < this->queueSize){
                if(current->getValue() == ""){
                    //If the head is empty, then the data will be set in the head node, and the head will be pointed to NULL.
                    current->setValue(data);
                    current->nextNode = NULL;
                }


                else{
                    //If the head already has a data value, then there will be a new node created on the heap.
                    node *newNode = (node*) new node;
                    //This while-loop will iterate through all the nodes in the linked-list.
                    while(current->nextNode != NULL){
                        current = current->nextNode;
                    }
                    //The memory allocated on the heap to newNode will have it's data value set with the setValue function.
                    newNode->setValue(data);
                    //The previous last node will now point to the newest node that was created. 
                    current->nextNode = newNode;
                    current = newNode; //The current node will now be the newNode that was created.
                }

                this->current_size += 1;//The size of the linked list is increased by 1.
            }

            //If the size of the queue had reached it's limit then a message will be printed to the user telling them that there can be no more nodes added to the queue.
            else if(this->current_size == this->queueSize){
                std::cout << std::endl << "The size of the queue has exceeded it's limit of, " << this->queueSize << ". Sorry, can't add additional elements." << std::endl;
            }
        }

        //This function removes the head/top of the linked list.
        void dequeue(){
            //If the size of the list is greater than 0, then the program will commence with the process to remove the node.
            if(this->current_size > 0){
                //The current node is head.
                node *current = head;
                head = head->nextNode; //head is now the next node after the current one, due to the fact that the current node is going to be removed.
                current = NULL; //The value of the current node is set to NULL.
                delete(current); //The current node is deleted.
                this->current_size -= 1; //The size of the linked list is reduced by 1.
            }
            //If the size of the linked list is not greater than 0 (so there is nothing in the linked list), then this else block will commence.
            else{
                std::cout << std::endl << "Error! There is nothing to remove from the queue!"; //A message will be printed to the user telling them that there is nothing to print.
            }
        }

        //Returns the head/top of the queue.
        void peek(){
            std::cout << std::endl << "The peak of the queue is, " << head->getValue();
        }

        //This function prints all the elements in the linked list.
        void display(){
            node *currentNode = head; //Has a reference to the head.
            //If the head is NULL, then there is nothing to print
            if(currentNode == NULL){
                std::cout << "There are no nodes in the linked list!"; //Tells the user that there are no nodes in the list, so cant print anything.
            }
            else{
                //Iterates through the linked list, until the next value in the node of the linked list is NULL.
                while(currentNode->nextNode != NULL){
                    //Prints the current value, and then goes to the next node in the linked list, through a pointer to the next node.
                    std::cout << currentNode->getValue() << " -> ";
                    currentNode = currentNode->nextNode;
                }
                //Prints the final value of the linked list.
                std::cout<<currentNode->getValue() << "\n";
            }
        }

        //This function will determine if the linked list is empty.
        bool isEmpty(){
            //If the head contains nothing for it's data value, then this if-statement block will run.
            if(head->getValue() == ""){
                std::cout << std::endl << "Yes, the queue is indeed empty.\n"; //Tells the user that the queue is empty.
                return(true); //returns true
            }
            else{
                std::cout << std::endl << "No, the queue is not empty.\n"; //Tells the user that the queue is not empty.
                return(false); //returns false.
            }
        }

        //This functions determines if the queue is full or not. It returns a boolean value.
        bool isFull(){
            //If the current size is equivalent to the queue size, then the function will return true, and a corresponding message will be printed.
            if(this->current_size == this->queueSize){
                std::cout << std::endl << "The queue is full!\n"; //Tells the user that the queue is full
                return(true); // returns true
            }
            //If the current size is less than the queue size, then the function will return false, and a corresponding message will be printed.
            else{
                std::cout << std::endl << "The queue is not full!\n"; //Tells the user that the queue is not full
                return(false); //returns false
            }
        }

        //This function returns the size of the linked list (number of nodes).
        int getSize(){
            //If the linked list is empty, it will return zero.
            if(this->current_size == 0){
                return(0);
            }
            //If the linked list is not empty, it will return the number of nodes in the linked list.
            else{
                return(this->current_size);
            }
        }


};

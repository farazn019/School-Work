#include <iostream>

//This Node class holds each data and pointer to the next element, for the priority queue data structure.
class Node{
    //All the private variables are stored here.
    private:
        std::string element;
        int priority;
    
    //All the public getter/setter methods, pointer to previous and next nodes, along with other methods are made public.
    public:
        void setElement(std::string elementData){ this->element = elementData;} //This method sets the element of the current node.
        void setPriority(int priorityData) { this->priority = priorityData;} //This method sets the priority of the current node.

        std::string getElement(){ return(this->element);} //This method gets/retrieves the value of the current element.

        int getPriority(){return(this->priority);} //This method gets/retrieves the current priority of the node. 

        Node *nextNode; //A pointer to the next node in the priority queue.
        Node *previousNode; //A pointer to the previous node in the priority queue.
};

//This contains the code for the linked list priority queue.
class linked_list_pq{

    //All the private variables and object are declared here.
    private:
        Node *head = (Node*) new Node; //A head node is declared here.
        int current_size = 0, max_size;
    
    //All the public variables / getters,setter methods / and various other methods are declared here.
    public:

        //The constructor method for the class is declared here.
        linked_list_pq(int size_limit){
            this->max_size = size_limit; //The max size of the priority queue is declared here.
        }

        //This function determines if the priority queue is empty or not (return a true or false value).
        bool isEmpty(){
            //If the size of the priority queue is zero, then the function will return true, so the priority queue is empty.
            if(this->current_size == 0){
                return(true); //returns true
            }
            //If the size of the priority queue is not zero, then the function will return false, so the priority queue is not empty.
            else{
                return(false); //returns false.
            }
        }

        //This function determines if the priority queue is full or not (returns a true or false value).
        bool isFull(){
            //If the current size is equal to the max size then the function returns true.
            if(this->current_size == this->max_size){
                return(true); //returns true
            }
            //If the current size is not equal to the max size then the function will return false.
            else{
                return(false); //returns false
            }
        }

        //This function will add a node to the end of the priority queue.
        void enqueue(std::string element, int priority = 10){
            //If the current size is equal to the max size, then the user will not be able to add more nodes to the priority queue.
            if(this->current_size == this->max_size){
                std::cout << std::endl << "Sorry, can't add any more elements to the priority queue.\n"; //Prints a message to the user telling them that more elements can't be added to the queue.
            }
            //If the current size is less than the max size, then the user will be able to add a new node to the priority queue.
            else if(this->current_size < this->max_size){
                //If the head is empty, then instead of creating a new node, the existing head node will be set to the values that are passed into the enqueue function as parameters.
                if(head->getElement() == ""){
                    head->setPriority(priority); //Sets the priority of the head node to the integer priority value.
                    head->setElement(element); //Sets the element of the head node to the string element.
                    head->nextNode = NULL; //The nextNode pointer is set to NULL, because there is nothing next to point at.
                    head->previousNode = NULL; //The previousNode pointer is set to NULL, because there is nothing previous to point at.
                }
                //If the head is not empty, then a new node will be created, and populated with the data values passed into the enqueue function.
                else{
                    Node *current = head; //A current node points to the head node. 
                    Node *newNode = (Node*) new Node; //A newNode is created on the heap.
                    //This while loop iterates through the all the elements in the node, to get to the final node in the priority queue.
                    while(current->nextNode != NULL){
                        current = current->nextNode;
                    }

                    newNode->setElement(element); //A string value of the newNode element is set to the element value.
                    newNode->setPriority(priority); //An integer value of the newNode priority is set to the priority value.
                    newNode->previousNode = current; //The newNode's previousNode pointer points to the final node in the linked list.
                    newNode->nextNode = NULL; //The newNode's nextNode pointer points to a value of NULL.
                    current->nextNode = newNode; //The final node of the linked list points to the newly created node (newNode), by doing so, the newNode node is now the final node of the linked list.
                }
                this->current_size += 1; //Increases the current size of the priority queue by 1.
            }
        }

        //This function computes the size of the priority queue.
        int getSize(){
            //If the priority queue is empty (has 0 nodes), then the function will return a value of 0.
            if(this->isEmpty() == true){
                return(0); //returns 0.
            }
            //If the priority queue is not empty (has more than 0 nodes), then the function will return the number of nodes in the priority queue.
            else{
                return(this->current_size); //returns the number of nodes in the priority queue.
            }
        }

        //This function prints all the nodes of the priority queue.
        void display(){
            Node *current = head; //A reference to the head node.
            //Iterates through every node in the priority queue, and prints their string value (element value).
            while(current->nextNode != NULL){
                //Prints the string value of the current node.
                std::cout << current->getElement() << " -> ";
                current = current->nextNode; //The current node points to the next node.
            }
            //Prints the final node string value of the priority queue.
            std::cout << current->getElement() << std::endl;
        }

        //This function removes the node with the highest priority from the priority queue.
        void dequeue(){
            //If the size of the priority queue is 0, then a message will be printed to the user telling them that there is nothing to remove.
            if(this->getSize() == 0){
                std::cout << std::endl << "There is nothing to remove from the priority queue."; //Prints a message telling the user that there is nothing to print.
            }
            //If the size is greater than 0, and the priority queue is not empty, then the node with the highest priority is removed.
            else{
                Node *current = head; //A reference to the head node of the priority queue.
                Node *remove = head; //The remove node will remove the node from the priority queue.
                Node *previousNode; //The purpose of this node is to connect the nodes that were in between the node that is being removed.

                //Iterates through all the elements in the linked-list based priority queue.
                while(current->nextNode != NULL){
                    current = current->nextNode;
                    //This if-statement will find the node with the highest priority (1).
                    if(remove->getPriority() > current->getPriority()){
                        remove = current;
                        previousNode = remove->previousNode; //The previousNode node points to the node that is before the remove node.
                    }
                }

                //If the head node is the one with the highest priority, then it will be removed.
                if(remove == head){
                    current = head->nextNode; //The current node points to the node after the head node.
                    free(remove); //The remove node is freed from the heap, and removed from the linked-list based priority queue.
                    head = current; //The head node now becomes the current node (the one after the head node).

                }
                //This is the case when the remove node is not the head node.
                else if(remove != head){
                    previousNode->nextNode = remove->nextNode; //The previousNode's nextNode pointer will point to the remove node's nextNode pointer.
                    remove->nextNode->previousNode = previousNode; //The node after the node that is removed, previousNode pointer points to previousNode.
                    free(remove); //The remove node is freed from the heap, and removed from the linked-list based priority queue.
                }
                this->current_size -= 1; //The size of current size is decreased by 1.
            }
        }

        //This function prints the node with the highest priority.
        void peak(){
            Node *current = head; //The current node points to the head node.
            int value = current->getPriority(); //The value variable holds the priority value of the current node.
            //This will iterate through all the nodes in the priority queue.
            while(current->nextNode != NULL){
                //This if-statement will find the node with the highest priority (1).
                if(current->getPriority() > current->nextNode->getPriority()){
                    value = current->nextNode->getPriority(); //The value variable holds the node with the highest priority (1).
                }
                current = current->nextNode; //The current node points to the next node after the current node.
            }
            std::cout << std::endl << "The peak value is, " << value << '.' << std::endl; //Prints the peak value of the priority queue.
        }

};


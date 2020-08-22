//This is the file for the priority queue.

#include <iostream>


//This is the node class for the linked-list based priority queue.
class node{
    //This holds the private variables for the linked list.
    private:
        int value; //This holds the integer data value for the node.
        int priorityNumber; //This holds the priority number for the node.

    //This holds all the public methods for the each node.
    public:
        void setValue(int value){ this->value = value;} //This sets the data value for a node.
        void setPriorityNumber(int value){ this->priorityNumber = value;} //This sets the priority number for a node.
        int getValue(){return(this->value);} //This returns the data value for a node.
        int getPriorityNumber(){ return(this->priorityNumber);} //This returns the priority number for a node.
        node *next; //Pointer to the next node.
        node *previousNode; //A pointer to the previous node of the priority queue.
};

//This is the priority queue class, that implements the linked-list based priority queue.
class priority_queue{

    //This declares all the variables for the priority queue.
    private:
        int size = 0; //The inital value of the priority queue is set to zero.
        int priorityNumber; //The inital priorityNumber is set to zero.
        node *head = new node; //A head node is created on the heap memory.
        node *finalNode; //A pointer to the final node is declared.

    //This declares all the variables and methods for the priority queue.
    public:
        //This declares the isEmpty function, to determine if a function is empty or not.
        bool isEmpty(){
            //If the size of the priority queue is zero, then it will return true.
            if(this->size == 0){
                return(true); //returns true
            }
            //If the size of the priority queue is not zero, then the function will return false.
            else{
                return(false); //returns false
            }
        }

        //This function computes the size of the linked list (number of nodes), and returns an integer value.
        int getSize(){
            //If the size of the function is zero, then the function will return 0.
            if(this->size == 0){
                return(0); //returns 0.
            }
            //If the size of the function is not zero, then the function will return the number of nodes in the linked-list based priority queue.
            else{
                return(this->size); //returns the size of the linked list.
            }
        }

        //This function adds an element to the priority queue, and takes the data value as input.
        void addElement(int value){
            //If the size of the priority queue is zero, then the head will be populated with data values.
            if(this->size == 0){
                head->setValue(value); //This sets the data value for the head node.
                priorityNumber = this->size + 1; //The priority number is set to the size of the priority-queue + 1. 
                head->setPriorityNumber(priorityNumber); //The priority number of the node is set to the priorityNumber variable in the line above.
                head->previousNode = NULL; //The previousNode pointer is set to NULL, because there is nothing previous to point at.
                head->next = NULL; //The next value of the node is set to NULL.
            }
            //If the size of the priority queue is greater than or equal to 1, then a new node will be declared and populated with the data value as input.
            else if(this->size >= 1){
                node *current = head; //The current node is set to head.

                //This while loop iterates through the linked-list based priority queue.
                while(current->next != NULL){
                    current = current->next;
                }

                node *newNode = new node; //Creates a new node.
                newNode->setValue(value); //Sets the data value of the new node as the input value given to the function.
                priorityNumber = this->size + 1; //Sets the value of the priorityNumber variable to the linked-list based priority queue to the size of the priority queue + 1.
                newNode->setPriorityNumber(priorityNumber); //Sets the new node's priority number to the priority number in the line above.
                newNode->previousNode = current; //The newNode's previousNode pointer points to the final node in the linked list.                
                current->next = newNode; //Sets the next value of the current node to the new node.
                newNode->next = NULL; //Sets the next value of the newNode to NULL.
                current = newNode; //Sets the current node value to the new node.
                finalNode = newNode; //The final node value is set to the new node.
            }
            this->size += 1;  //Increases the size of the priority queue by 1.
        }

        //This function will print the values in the linked-list based priority queue.
        void printList(){
            node *current = head; //The current node is set to head.
            //If the priority queue is not empty, then it will print the linked-list based priority queue.
            if(!this->isEmpty()){
                //Iterates through the linked list and prints out the values of each node.
                while(current->next!=NULL){
                    std::cout << current->getValue() << " -> "; //Prints the value of the node, based on it's priority in the linked list.
                    current = current->next; //Sets the current value of the node to the next value in the priority queue.
                }
                std::cout << current->getValue() << std::endl; //Prints the values of the final node in the linked-list based priority queue.
            }
        }

        //This function swaps the integer values of two nodes.
        void swap(node *nodeOne, node *nodeTwo){
            node *temp = new node;
            temp->setValue(nodeOne->getValue());
            nodeOne->setValue(nodeTwo->getValue());
            nodeTwo->setValue(temp->getValue());
        }

        //This function creates the code for bubble sort.
        void bubbleSort(){
            node *current = head; //The current node is set to head.
            node *firstNode = head; //The firstNode node is set to head.
            //If the size of the priority queue is greater than 1, then the priority queue will be sorted.
            if(this->getSize() > 1){
                node *secondNode = head->next; //The secondNode node is set to the node after head.
                //If the current node isn't NULL, then iteration through the linked-list based priority queue will take place.
                while(current != NULL){
                    firstNode = head; //firstNode is set to head.
                    secondNode = head->next; //secondNode is set to the node after the head node.
                    //If the second node isn't null, then we will compare the values between firstNode and secondNode, along with iterating through the linked-list based priority queue.
                    while(secondNode != NULL){
                        //Checks to see if the value of the firstNode is greater than the value of the secondNode.
                        if(secondNode->getValue() < firstNode->getValue()){
                            swap(secondNode, firstNode); //Swaps the values between firstNode and secondNode.
                        }
                        firstNode = firstNode->next; //firstNode is set to the next value in the linked list.
                        secondNode = secondNode->next; //secondNode is set to the next value in the linked list.
                    }
                    current = current->next; //The current node is set to the next node after current.
                }
            }
            //If the size of the linked-list based priority queue isn't greater than 1, then nothing will happen.
            else{
                NULL;
            }
        }

        //This function contains the code for the selection-sort sorting algorithm, which applies the selection sort algorithm to a linked-list based priority queue.
        void selectionSort() { 
            node* currentNode = head; //The currentNode node points to the head.
            node* minimumNode = currentNode;  //The minimumNode node points to currentNode.
            node* leadNode = currentNode->next;  //The leadNode node points to the node after currentNode.
        
            // Outer loop that traverses as long as the value of currentNode is not NULL.
            while (currentNode != NULL) { 
                minimumNode = currentNode; 
                leadNode = currentNode->next; 
        
                // Inner loop that traverses as long as the leadNode is not NULL. 
                while (leadNode != NULL) { 
                    if (minimumNode->getValue() > leadNode->getValue()){minimumNode = leadNode; } 
                    leadNode = leadNode->next; //leadNode points to the node after leadNode.
                } 
                swap(currentNode, minimumNode); //The currentNode is swapped with the minimumNode.

                currentNode = currentNode->next;  //currentNode points to the node that comes after currentNode.
            } 
        } 

    
    //This function has the code for the insertion sort algorithm.
    void insertionSort() {
        //If the head node is NULL (0 nodes in the linked-list based priority queue) or the node after the head node is NULL (1 node in the linked-list based priority queue), then the function will not do anything.
        if(head == NULL || head->next == NULL) {
            return;
        }
        node *leadNode = head->next; //The leadNode is set to the node after the head node.
        //The while loop will execute as long as the leadNode is not NULL.
        while(leadNode != NULL) {
            int leadNodeData = leadNode->getValue(); //This variable contains the data value of the leadNode node.
            bool found = false; //This is a boolean variable, which will be eitheir true or false, if the node is found. Initally it is set to false.
            node *currentNode = head; //The currentNode ndoe is set to head.

            //while currentNode is not leadNode, comparisons between currentNode to all the nodes before leadNode will be made.
            while(currentNode != leadNode) {
                //If the value of currentNode is greater than leadNode, and the found variable is false, then this if-statement is run.
                if(currentNode->getValue() > leadNode->getValue() && found == false) {
                    leadNodeData = currentNode->getValue(); //The leadNodeData variable is set to the data value in the currentNode node. 
                    currentNode->setValue(leadNode->getValue()); //The currentNode's value is set as the value of the leadNode node.
                    found = true; //The found variable is set to true.
                    currentNode = currentNode->next; //The currentNode is set to the next node after the currentNode.
                } 
                //If the value of the currentNode is not greater than the leadNode, or the found variable is true, then this else-statement will run.
                else {
                    //If the found variable is set to true, then this if-statement will run.
                    if(found == true) {
                        int temp = leadNodeData; //The temp integer value is set to the value in leadNodeData.
                        leadNodeData = currentNode->getValue(); //The leadNodeData is set to the the value in currentNode.
                        currentNode->setValue(temp); //The currentNode is set to the value of the temp int value.
                    }
                    currentNode = currentNode->next; //The next node after currentNode, becomes the currentNode.
                }
        }
        currentNode->setValue(leadNodeData); //The data value of currentNode is set to leadNodeData.
        leadNode = leadNode->next; //The leadNode node is set to the next node after leadNode.
        }
    }

            //This function removes the node with the highest priority from the priority queue.
        void dequeue(){
            //If the size of the priority queue is 0, then a message will be printed to the user telling them that there is nothing to remove.
            if(this->getSize() == 0){
                std::cout << std::endl << "There is nothing to remove from the priority queue."; //Prints a message telling the user that there is nothing to print.
            }
            //If the size is greater than 0, and the priority queue is not empty, then the node with the highest priority is removed.
            else{
                node *current = head; //A reference to the head node of the priority queue.
                node *remove = head; //The remove node will remove the node from the priority queue.
                node *previousNode; //The purpose of this node is to connect the nodes that were in between the node that is being removed.

                //Iterates through all the elements in the linked-list based priority queue.
                while(current->next != NULL){
                    current = current->next;
                    //This if-statement will find the node with the highest priority (1).
                    if(remove->getPriorityNumber() > current->getPriorityNumber()){
                        remove = current;
                        previousNode = remove->previousNode; //The previousNode node points to the node that is before the remove node.
                    }
                }

                //If the head node is the one with the highest priority, then it will be removed.
                if(remove == head){
                    current = head->next; //The current node points to the node after the head node.
                    free(remove); //The remove node is freed from the heap, and removed from the linked-list based priority queue.
                    head = current; //The head node now becomes the current node (the one after the head node).

                }
                //This is the case when the remove node is not the head node.
                else if(remove != head){
                    previousNode->next = remove->next; //The previousNode's nextNode pointer will point to the remove node's nextNode pointer.
                    remove->next->previousNode = previousNode; //The node after the node that is removed, previousNode pointer points to previousNode.
                    free(remove); //The remove node is freed from the heap, and removed from the linked-list based priority queue.
                }
                this->size -= 1; //The size of current size is decreased by 1.
            }
        }
};
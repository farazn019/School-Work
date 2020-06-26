#include <iostream>

//These two global variables will hold the linked-list(string) that the user enters.
std::string userInput; //This holds all the characters that the user enters for the linked-list
int sizeUserInput; //Gets the size of the linked-list.


//This structure will be the blueprint for our linked-list.
struct node{
    std::string data; //The data that each node will hold will be of type string.
    node *next; //Pointer to the next node in the linked list.
};

//This initalizes the linked-list, by setting the head of the linked list to NULL.
void initalizeList(node **head){
    *head = NULL;
}

//This function computes the number of elements in the linked list.
int numberOfElementsInList(node **head){
    //This size variable will hold the size of the linked-list(number of nodes).
    int size = 0;
    node *current = *head;
    //Iterates through the linked list.
    while(current->next != NULL){
        ++size; //Increments the size by 1.
        current = current->next; //Iterates to the next node in the linked list.
    }
    //1 will be incremented to the size, because the termination condition in the while-loop was that current->next != NULL. So, the last node didnt get  counted.
    size += 1;
    return(size); //returns the size of the linked list.


}

//gets the string input from the user.
int getInput(node **head){
    //will take user input until they press 'enter'.
    std::getline(std::cin, userInput);
    int sizeUserInput = userInput.length(); //computes the number of characters that the user entered.
    return(sizeUserInput); //returns the number of items in the string
}


//This function will add a node to the end of the linked list.
void addNode(node **head, std::string stringData){  
    node *current = *head;//this node points to the head of the linked list.
    node* newNode = new(node); //this creates a new node on the heap.
    newNode->data = stringData; //this will set the data of the node to whatever the user enters in the function.
    
    //If the linked list has no elements in it, then the head will contain the first element.
    if(*head == NULL){
        *head = newNode;
    }
    //If the linked list already has items in it, then there will be new items added to the end.
    else{
        //Increments through the linked list.
        while(current->next != NULL){
            current = current->next;//Goes to the next item in the linked list.
        }        
        current->next = newNode; //the previous last node now points to the new node.
    }
}

//This function will print the list that the user enters.
void printList(node **head){
    //this node points to the head of the linked list.
    node *current = *head;
    //this iterates through the entire linked list.
    while(current != NULL){
        //prints the linked list.
        std::cout << current->data << " "; 
        current = current->next;
    }
    std::cout << std::endl; //clears the output stream (very important)
}

//This function searches for a specific element in the linked list.
int searchElement(node **head, std::string input){
    //this node points to the head of the linked list.
    node *current = *head;
    //this iterates through the entire linked list.
    while(current!= NULL){
        //if the element is found, then 1 is returned.
        if(current->data == input){
            return 1;
        }
        //goes to the next node in the linked list
        current = current->next;
    }
    return 0; //if the element is not found, then 0 is returned.
}




//This is the main function.
int main(){
    //a new head is dynamically allocated memory on the heap.
    node* head = (node*)malloc(sizeof(node));
    //the linked list is initalized.
    initalizeList(&head);
    
    //the variable 'size' will hold the size of the linked list.
    int size = getInput(&head);
    //this variable will combine all the different strings of the linked-list into 1 string.
    std::string currentStr;
    for(int index = 0; index < size; index++){
        currentStr = userInput.at(index);
        addNode(&head, currentStr);
    }


    
    std::string elements[size];
    for(int index = 0; index < size; index++){
        elements[index] = userInput.at(index);
    }

    node *newHead = new node;
    initalizeList(&newHead);
    std::string __char1;
    std::string __char2;
    int search_element;
    for(int outer_loop = 0; outer_loop < size; outer_loop++){
        //Edge-case for beginning of list.
        if(outer_loop == 0){
            __char1 = (1, userInput.at(0));
            addNode(&newHead, __char1); //The head of the linked list will be added.
        }
        else if(outer_loop >= 1){
            __char1 = (1, userInput.at(outer_loop));
        
            search_element = searchElement(&newHead, __char1);
            if(search_element == 0){
                addNode(&newHead, __char1);
            }
            
        }
    }

    //Outputs no if the elements in the list are repeated.
    if(numberOfElementsInList(&head) == numberOfElementsInList(&newHead)){
        std::cout << std::endl << "No" << std::endl;
    }
    //Outputs yes if the elements in the list are not repeated.
    else{
        std::cout << std::endl << "Yes" << std::endl; 
    }

    //The new linked list is printed, without any repeated items, if there were any to begin with.
    printList(&newHead);
    
    std::cout << std::endl << "Name: Faraz Naseem\tID:110009274" << std::endl;
    return 0; //Terminates out of the program successfully.
}
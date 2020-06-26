#include <iostream>


class Node{
	public:	
		int data;
		Node *next;
};

void initalizeList(Node **head){
	*head = NULL;
}

void addNodeBeginning(Node **head, int dataValue){
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = dataValue;
	newNode->next = NULL;
	Node *temp = *head;
	if(*head == NULL){
		std::cout << "There is no head for the linked list. So, this node will be the head or beginning of the Linked List." << std::endl;
		*head = newNode;
	}
	else if(*head != NULL){
		*head = newNode;
		(*head)->next = temp; 
	}	
}

void addNodeAtEnd(Node **head, int dataValue){
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = dataValue;
	newNode->next = NULL;

	Node *current = *head;
	
	while(current->next != NULL){
		current = current->next;
	}
	current->next = newNode;
}

void printList(Node **head){
	Node *currentNode = *head;
	while(currentNode->next != NULL){
		std::cout << currentNode->data << " -> ";
		currentNode = currentNode->next;
	}
	std::cout << currentNode->data << std::endl;
}

int getSize(Node **head){
	int size = 0;
	Node *current = *head;
	while(current->next != NULL){
		current = current->next;
		++size;
	}
	++size;
	return(size);
}


int insertAtIndex(Node **head, int data, int insertIndex){
	if(insertIndex > getSize(&head)){
		std::cout << std::endl << "Invalid operation, can not insert at this position! " << std::endl;
		return(-1);		
	}
	else{
		int currentIndex = 0;
		Node *newNode;
		Node *current = *head;
		while(current < insertIndex){
			current = current->next;
			++currentIndex;

		}
	}
}


void deleteAtPosition(Node **head, int pos){
	if(pos > getSize(&head)){
		std::cout << "Invalid! Out of range" << std::endl;	
	}
	else{
		int currentIndex = 0;
		Node *currentNode = *head;
		Node *previous;
		while(currentIndex < pos){
			++currentIndex;
			currentNode = currentNode->next;
			previous = currentNode;		
		}
		previous->next = currentNode->next;
		free(currentNode);
	}
}




int main(){
	Node* head = (Node*) malloc (sizeof(Node));
	initalizeList(&head);
	addNodeBeginning(&head, 1);
	addNodeAtEnd(&head, 2);
	addNodeAtEnd(&head,3);
	printList(&head);
	addNodeBeginning(&head, 0);
	printList(&head);
	return 0;
}

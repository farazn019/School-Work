#include <iostream>
#include "functions.cpp"

int main(){
    int userSelection;

    Node *headNode = (Node*)malloc(sizeof(Node)); //This command allocates memory on the heap for a head node. By typecasting it, we have made it a pointer node.
    initalizeList(&headNode); //This command initalizes the node, by setting it equal to NULL. As a result, we can change the values inside the node, as the program progresses.
    while(userSelection != 8){
        menu();
        std::cin >> userSelection;
        switch(userSelection){
            case 1:
                displayAllProducts(&headNode);
                break;
            
            case 2:
                int productID;
                std::cout << "Please enter the id of the product that you want to search for: ";
                std::cin >> productID;
                displayASingleProduct(&headNode, productID);
                break;
            
            case 3:
                std::cout << std::endl << std::endl << "There are " << sizeOfList(&headNode) << " items in the list" << std::endl;
                break;
            
            case 4:
                addNewProduct(&headNode);
                break;
            
            case 5:
                //If the head is not NULL (so there are legitimate data values for the head node), then the sorting function will be called.
                if(headNode != NULL){
                    //Call the sorting function
                    sortList(&headNode);
                }
                else{
                    std::cout << "There is nothing in the list to sort, please consider entering something." << std::endl;
                }
                break;
            
            case 6:
                //If the list is empty, then the user will be informed that the operation of deleting an item from the list is not possible.
                if(headNode == NULL){
                    std::cout << "Sorry, there are no items in this list. Please enter some: " << std::endl << std::endl;
                }
                //Then we ask the user if they would like to enter an item or not.

                //If the user's list actually has items in it, then this else block will be called.
                else{
                    int id_of_product;
                    std::cout << std::endl << "Please enter the ID of the product that you would like to delete from the list: ";
                    std::cin >> id_of_product;
                    deleteASingleProduct(&headNode, id_of_product);
                }
                break;

            case 7:
                if(sizeOfList(&headNode) == 0){
                    //This print statement tells the user that there is nothing to delete from their list.
                    std::cout << std::endl << "Sorry, but there is nothing to delete: " << std::endl;
                    //Now, we ask the user if they would like to add an item to the list.
                }
                else{
                    deleteAllProducts(&headNode);
                }
                break;
            
            case 8:
                break;

            default:
                std::cout << "\n\n\nSorry, that is improper input. Please enter a DIGIT from 1 to 8. The following are your options:\n";
                break;
            
        }
    }
}

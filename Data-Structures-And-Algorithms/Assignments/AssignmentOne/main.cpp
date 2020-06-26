//Created By Faraz Naseem...... June 2, 2020...... Main Page

#include <iostream>
#include <limits>
#include <iomanip>
#include "functions.cpp"
#include <typeinfo>


//This is the main function.
int main(){
    int userSelection; //This variable holds the user's input for their option from the menu.
    Node *headNode = (Node*)malloc(sizeof(Node)); //This command allocates memory on the heap for a head node. By typecasting it, we have made it a pointer node.
    initalizeList(&headNode); //This command initalizes the node, by setting it equal to NULL. As a result, we can change the values inside the node, as the program progresses.
    while(userSelection != 8){
        //The menu function is called, and the different options the user can choose from are output to the console.
        menu();
        
        std::cin >> userSelection;
        
        //If the user enters an integer value, then this if-statement block will run.
        if(checkUserInputInt(userSelection) == true){
            switch(userSelection){
                //If the user decides to enter 1, then all the products in the list will be displayed.
                case 1:
                    displayAllProducts(&headNode);
                    break;
                
                //If the user decides to enter 2, then they themselves will have to choose what product they want to select based on the ID number, or the name of the product.
                case 2:
                    displayASingleProduct(&headNode);
                    break;
                
                //If the user decides to enter 3, then the size of the list will be output to the console.
                case 3:
                    std::cout << std::endl << std::endl << "There are " << sizeOfList(&headNode) << " items in the list" << std::endl;
                    break;
                
                //If the user decides to enter 4, then they will have to enter the data attributes for a new product.
                case 4:
                    addNewProduct(&headNode);
                    break;
                
                //If the user decides to enter 5, then the list will be sorted based on however, the user wants to sort the items in the list, with the limited options that the user is given.
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
                
                //If the user enters 6, then the user will delete a product based on the ID of the product.
                case 6:
                    //If the list is empty, then the user will be informed that the operation of deleting an item from the list is not possible.
                    if(headNode == NULL){
                        std::cout << "Sorry, there are no items in this list. Please enter some: " << std::endl << std::endl;
                    }
                    //If the user's list actually has items in it, then this else block will be called.
                    else{
                        deleteASingleProduct(&headNode);
                    }
                    break;

                //If the user enters 7, then all the products from the list will be deleted (if the list contains any, that is).
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
                //This is the exit condition. If the user decides to enter 8, then the user will exit out of the program.
                case 8:
                    break;

                //The user is informed that they aren't entering proper integer input. 
                default:
                    std::cout << "\n\n\nSorry, that is improper input. Please enter a DIGIT from 1 to 8. The following are your options:\n";
                    break;
            }
        }

        else{
            //Warning message displayed to the user, if input type is not of type integer.
            std::cout << std::endl << "WARNING! You are entering a value other than an integer. Please enter an integer type value between 1 and 8 inclusively. " << std::endl;
            std::cin.ignore(); //This will ignore the user input.
            std::cin.clear(); //This will clear the input stream from the user.
        }
    }
}

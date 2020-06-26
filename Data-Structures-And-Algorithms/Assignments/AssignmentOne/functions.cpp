#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include "function_headers.h"

//This function computes the length of a string. It's input type is of type string.
int computeLengthString(std::string str){
    int i = 0;
    while(str[i] != '\0'){
        ++i; // Increments the value of i by one, if we haven't encountered the null terminator.
    }
    return i; //Upon reaching the null terminator, it returns the value of 'i' (which is the length of the string).
}

//This function checks to see if the input that the user enters for integers is valid or not.
bool checkUserInputInt(int input_integer){
    bool inputResultInt;
    //If the user enters an improper input value for integer (char, boolean, string), instead of an integer, then the input stream will be cleared.
    if(std::cin.good() == false){
        inputResultInt = false; //This will set the inputResult to False, thus telling the program that the user has entered an improper value.
        std::cin.ignore(); //This will ignore the user input.
        std::cin.clear(); //This will clear the input stream from the user.
    }
    else{
        inputResultInt = true; //This will set the inputResult to True, telling the program that the user input a legitimate value.
    }
    return(inputResultInt); //Returns the result of inputResult.
}

//This function checks to see if the input that the user enters for double data types is valid or not.
bool checkUserInputDouble(double input_double){
    bool inputResultDouble;
    //If the user enters a data value that is not of type double, then the statements inside the if-statement will be run.
    if(std::cin.good() == false){
        inputResultDouble = false; //The value of inputResultDouble will be false
        std::cin.ignore(); //The user input will be ignored.
        std::cin.clear(); //The user input will be cleared.
    }

    else{
        inputResultDouble = true; //The value of inputResultDouble is set to true
    }
    return(inputResultDouble); //The value of inputResultDouble is returned with a boolean value.
}


//This function checks to see if the input that the user enters for string data types is valid or not.
bool checkUserInputString(std::string input_string){
    bool inputResultString;

    if(std::cin.good() == false){
        inputResultString = false; //If the user does not enter a valid string, then the boolean variable will be set to false.
        std::cin.ignore();
        std::cin.clear();
    }
    else{
        inputResultString = true;
    }
    return (inputResultString);
}




//The node class is defined here, along with all the variables, getter functions, and setter functions.
class Node{

    //All the variables for the items are defined here. They are all private for the purpose of security measures. 
    private:
        int productID;
        std::string productName;
        double productPrice;
        int numberOfReviews;
        double ratingOfTheProduct;
        std::string productDescription;
        int possibleShippingDate;
        int sizeOfTheProductDescription;  

    //All the functions are public. The functions are all getter and setter functions.
    public:

        //These two functions set the product ID and return (get) the product ID for each node respectively.
        void setProductID(int product_ID){
            productID = product_ID;
        }
        int getProductID(){
            return productID;
        }


        //These two functions set the product name and return (get) the product name for each node respectively.
        void setProductName(std::string product_name){
            productName = product_name;
        }
        std::string getProductName(){
            return productName;
        }

        //These two functions set the product price and return (get) the product price for each node, respectively.
        void setProductPrice(double product_price){
            productPrice = product_price;
        }
        double getProductPrice(){
            return productPrice;
        }

        //These two functions set the number of reviews and return (get) the number of reviews for each node, respectively.
        void setNumberOfReviews(int number_of_reviews){
            numberOfReviews = number_of_reviews;
        }
        int getNumberOfReviews(){
            return numberOfReviews;
        }

        //These two functions set the rating of the product and return (get) the rating of the product for each node, respectively.
        void setRatingOfTheProduct(double rating_of_product){
            ratingOfTheProduct = rating_of_product;
        }
        double getRatingOfTheProduct(){
            return ratingOfTheProduct;
        }

        //These two functions set the product description and return (get) the product description for each node, respectively.
        void setProductDescription(std::string product_description){
            productDescription = product_description;
        }
        std::string getProductDescription(){
            return productDescription;
        }

        //These two functions set the possible shipping date (in days), and return (get) the possible shipping date in days, respectively.
        void setPossibleShippingDate(int possible_shipping_date){
            possibleShippingDate = possible_shipping_date;
        }
        int getPossibleShippingDate(){
            return possibleShippingDate;
        }

        //These two functions set the size of the product description (which was entered by the user), and return (get) the size of the product description for each node.
        void setSizeOfTheProductDescription(std::string the_product_description){
            sizeOfTheProductDescription = computeLengthString(the_product_description); 

        }
        int getSizeOfTheProductDescription(){
            return sizeOfTheProductDescription;
        }
        Node *next; //Points to the next node in the linked-list.
};



//This variable keeps track of the number of nodes (size of list), and it needs to be used by more than 1 function, so it is a global variable.
int size_Of_List; 


//This function initalizes the list, by setting the head of the list to a value of NULL.
void initalizeList(Node **head){
    *head = NULL;
}

//This is the menu, that will give the user the options that he/she can choose from.
void menu(){

    //These are all the option given to the user.
    std::cout << std::endl << "1. Display all products" << std::endl;
    std::cout << "2. Display a single product" << std::endl;
    std::cout << "3. Display the number of products" << std::endl;
    std::cout << "4. Save a new product" << std::endl;
    std::cout << "5. Sort the products" << std::endl;
    std::cout << "6. Delete a product" << std::endl;
    std::cout << "7. Delete all products" << std::endl;
    std::cout << "8. Exit" << std::endl;    
    std::cout << "==> Please enter a number between 1 and 8: "; //The user is prompted to enter a number between 1 and 8.
}


//This function computes the size of the list. It takes the address of the head of the linked list as input.
int sizeOfList(Node **head){
    if(*head == NULL){
        size_Of_List = 0; //If the head has a value of NULL, then the size of the list is automatically set to zero.
        return(size_Of_List);
    }
    //This is the case when the size of the list is greater than 0.
    else{
        int size_Of_List = 1; //If the head node isn't NULL, then that means that there is some value in the head. So, the size of the list is one node.
        Node *currentNode = *head; //The currentNode is head.
        while(currentNode->next != NULL){
            currentNode = currentNode->next; //Points to the next node in the linked list.
            size_Of_List++; //The size of the linked list is increased.
        }
        return (size_Of_List); //The size of the list is returned.
    }
}

//This function adds a new node to the user's Amazon list.
void addNewProduct(Node **head){
    //A new node is declared and initialized, with memory being allocated to this specific node.
    Node *newProduct = (Node*)malloc(sizeof(Node));

    //The user is prompted to enter all the required data.
    std::cout << std::endl << "So, you have decided to enter a new product. Please enter all the following information. " << std::endl;
    
    //All the inputs required to add a new item to the Amazon list are declared here.
    int product_ID;
    std::string product_name;
    double product_price;
    int number_of_reviews;
    double rating_of_product;
    std::string product_description;
    int possible_shipping_date;
    int size_of_description;
    

    EXECUTE: std::cout << "Product ID: ";
    std::cin >> product_ID;

    Node *currentNode;

    if(checkUserInputInt(product_ID) == true){ 

        currentNode = *head;

        if(size_Of_List >= 1){
            while((currentNode->next != NULL) || (currentNode->getProductID() == product_ID)){

                //If there is already a product in the list with a specific ID that the user wants to add, the program will not let them.
                if(currentNode -> getProductID() == product_ID){
                    ERROR_INPUT: std::string product_input;
                    std::cout << std::endl << std::endl << "Sorry, there is already a product with that ID. Please enter a different ID number. ";
                    goto EXECUTE; //The user will be taken back to where Product ID needs to be entered.
                }

                //If there is a next item(Node) in the Amazon list, then currentNode will be the node after the current one.
                if(currentNode->next != NULL){
                    currentNode = currentNode -> next;
                }
            }
        }


        //The new item in the list has a product ID that the user input.
        newProduct -> setProductID(product_ID);
    }

    //This is the case when the user does not enter a numerical value.
    else{
        std::cout << std::endl << "WARNING: Please use numerical values to represent the product ID. Ensure that the value is an integer! " << std::endl;
        std::cin.ignore();
        std::cin.clear();
        goto EXECUTE;
    }

    std::cin.clear();//This is a very crucial command to use. The reason being, it clears the input stream.

    PRODUCT_NAME:
        //The user will be prompted to enter the name of the product.
        std::cout << "Product Name: ";
        std::cin.ignore();
        std::cin.clear();
        std::getline(std::cin, product_name);

    //If the string that the user enters is empty, then they will be warned, and they will be asked to enter a proper value.
    if(product_name.empty()){
        std::cout << std::endl << "You entered an incorrect value. Please enter a proper value: " << std::endl; //Warning statement.
        std::cin.ignore('\n');
        std::cin.clear();
        goto PRODUCT_NAME; //Heads back to "PRODUCT_NAME"
    }
    else{
        newProduct -> setProductName(product_name); //The new item node will have one of it's data items set to the name that the user enters.        
    }


    PRODUCT_PRICE:
        //User is prompted for the price of a product.
        std::cout << "Product Price: ";
        std::cin >> product_price;
    
    if(checkUserInputDouble(product_price) == true){
        newProduct -> setProductPrice(product_price); 
    }

    else{
        //This informs the user that he/she has entered an incorrect value.
        std::cout << std::endl << "You have entered an incorrect value. Please enter a decimal value! " << std::endl;
        std::cin.ignore('\n');
        std::cin.clear();
        goto PRODUCT_PRICE;
    }
    
    NUMBER_OF_REVIEWS:
        std::cout << "Number Of Reviews: ";
        std::cin >> number_of_reviews;
    //If an integer is input for the number of reviews, then the number of reviews for this product will be set to the number that the user enters.
    if(checkUserInputInt(number_of_reviews) == true){
        newProduct -> setNumberOfReviews(number_of_reviews);
    }
    else{
        std::cout << std::endl << "Please enter an integer value for the number of reviews." << std::endl;
        std::cin.ignore('\n');
        std::cin.clear();
        goto NUMBER_OF_REVIEWS;
    }


    RATING_OF_PRODUCT:
        std::cout << "Rating Of Product: ";
        std::cin >> rating_of_product;
    if(checkUserInputDouble(rating_of_product) == true){
        newProduct -> setRatingOfTheProduct(rating_of_product);
        std::cin.ignore();
        std::cin.clear();
    }
    else{
        std::cout << std::endl << "Please enter a valid decimal value for the rating of the product." << std::endl;
        std::cin.ignore('\n');
        std::cin.clear();
        goto RATING_OF_PRODUCT;
    }

    //std::cin.clear();
    PRODUCT_DESCRIPTION:
        std::cout << "Product Description: ";
        //std::cin.ignore('\n');
        std::getline(std::cin, product_description);
    
    if(product_description.empty()){
        std::cout << std::endl << "You have entered an incorrect value. Please enter something proper: " << std::endl;
        std::cin.ignore('\n');
        std::cin.clear();
        goto PRODUCT_DESCRIPTION;
    }
    else{
        newProduct -> setProductDescription(product_description);
    }

    SHIPPING_DATE:
        std::cout << "Possible Shipping Date (In Days) : ";
        std::cin >> possible_shipping_date;
    if(checkUserInputInt(possible_shipping_date) == true){
        newProduct -> setPossibleShippingDate(possible_shipping_date);
    }
    else{
        std::cout << std::endl << "Please enter an integer data type for the number of days that this product will be shipped. " << std::endl;
        std::cin.ignore('\n');
        std::cin.clear();
        goto SHIPPING_DATE;
    }



    std::cout << "Size Of Product Description: ";
    newProduct->setSizeOfTheProductDescription(product_description); //The size of the product description is set with whatever integer value the product_description variable has. 
    std::cout << newProduct-> getSizeOfTheProductDescription() << std::endl; //The size of the product description is output to the console.
    
    newProduct->next = NULL; //The next node in the list is set to NULL, so as to not access memory that the program isn't allowed to access, and so there is an initalized node, if the user wants to add a new item to the list.

    
    //Increments the number of items in the list by one.
    size_Of_List += 1;

    //If the list is empty (head is set to a NULL value), then the first item in the list will be newProduct.
    if((*head) == NULL){
        *head = newProduct;
    }

    else{
        //Iterates through the entire linked list.
        while(currentNode -> next != NULL){
            currentNode = currentNode -> next;
        }
        currentNode->next = newProduct;
    }
}



void displayAllProducts(Node **head){
    //This is the case, when there are no data items in the linked list.
    if(*head == NULL){
       std::cout << std::endl << " Sorry, there is nothing to display, consider adding some items! " << std::endl;
    }

    //This is the case when, there are actually data items in the linked list.
    else{
        Node *currentNode = *head;
        while(currentNode -> next != NULL){
            std::cout << std::endl << std::endl << "Product ID: " << currentNode->getProductID() << std::endl;
            std::cout << "Product Name: " << currentNode->getProductName() << std::endl;
            std::cout << "Product Price: " << currentNode->getProductPrice() << std::endl;
            std::cout << "Number Of Reviews: " << currentNode->getNumberOfReviews() << std::endl;
            std::cout << "Rating Of The Product: " << currentNode->getRatingOfTheProduct() << std::endl;
            std::cout << "Product Description: " << currentNode->getProductDescription() << std::endl;
            std::cout << "Possible Shipping Date: " << currentNode->getPossibleShippingDate() << std::endl;
            std::cout << "Size Of Product Description: " << currentNode->getSizeOfTheProductDescription() << std::endl << std::endl << std::endl;
            currentNode = currentNode -> next;
        }
        std::cout << "The last product in the list is: " << currentNode->getProductName() << std::endl;
        std::cout << std::endl << std::endl << "Product ID: " << currentNode->getProductID() << std::endl;
        std::cout << "Product Name: " << currentNode->getProductName() << std::endl;
        std::cout << "Product Price: " << currentNode->getProductPrice() << std::endl;
        std::cout << "Number Of Reviews: " << currentNode->getNumberOfReviews() << std::endl;
        std::cout << "Rating Of The Product: " << currentNode->getRatingOfTheProduct() << std::endl;
        std::cout << "Product Description: " << currentNode->getProductDescription() << std::endl;
        std::cout << "Possible Shipping Date: " << currentNode->getPossibleShippingDate() << std::endl;
        std::cout << "Size Of Product Description: " << currentNode->getSizeOfTheProductDescription() << std::endl << std::endl << std::endl;

    }
}


void displayASingleProduct(Node **head){

    int displayProductInput;

    DISPLAY_PRODUCT:
        std::cout << "Would you like to display a product based on ID or name?\n1.Product Name\n2.ID\nPlease enter 1 to display product based on name, and 2 for ID: ";
        std::cin >> displayProductInput;

    if(checkUserInputInt(displayProductInput) == false){
        std::cin.ignore('\n');
        std::cin.clear();
        std::cout << std::endl << "You have made an invalid input. Please enter a valid statement: ";
        goto DISPLAY_PRODUCT;
    }

    if(*head == NULL){
        std::cout << std::endl << "You have not entered any items in your list. Consider adding some! " << std::endl;
    }
        
    else{
        Node *currentNode = *head;


        if(displayProductInput == 2){

            int productID;
            std::cout << "Please enter the id of the product that you want to search for: ";
            std::cin >> productID;

            while((currentNode->getProductID() != productID) && (currentNode->next != NULL)){
                currentNode = currentNode -> next;
            }
            if(currentNode->getProductID() == productID){        
                std::cout << "The node with ID, " << currentNode->getProductID() << " was found. Here is the information:" << std::endl;
                std::cout << std::endl << std::endl << "Product ID: " << currentNode->getProductID() << std::endl;
                std::cout << "Product Name: " << currentNode->getProductName() << std::endl;
                std::cout << "Product Price: " << std::setprecision(2) << std::fixed << currentNode->getProductPrice() << std::endl;
                std::cout << "Number Of Reviews: " << currentNode->getNumberOfReviews() << std::endl;
                std::cout << "Rating Of The Product: " << currentNode->getRatingOfTheProduct() << std::endl;
                std::cout << "Product Description: " << currentNode->getProductDescription() << std::endl;
                std::cout << "Possible Shipping Date: " << currentNode->getPossibleShippingDate() << std::endl;
                std::cout << "Size Of Product Description: " << currentNode->getSizeOfTheProductDescription() << std::endl << std::endl << std::endl; 
            }
            else if((currentNode ->getProductID() != productID) && (currentNode -> next == NULL)){
                std::cout << std::endl << "ERROR: There was no item in the list with an id of: " << productID << ". Please enter a valid ID and try again." << std::endl << std::endl;
            }
        }

        else if(displayProductInput == 1){
            std::string productName;
            std::cout << std::endl << "Please enter the name of the product that you are looking for: ";
            std::cin.ignore('\n'); //Ignores any newline characters, or unnecessary character delimeters.
            std::cin.clear(); //Clears the input stream of any characters.
            std::getline(std::cin, productName);

            if(currentNode->getProductName() == productName){
                std::cout << "True";
            }
            else{
                std::cout << "False";
            }

            while((currentNode->getProductName() != productName) && (currentNode->next != NULL)){
                currentNode = currentNode->next;
            }
            if(currentNode->getProductName() == productName){
                std::cout << "The node with ID, " << currentNode->getProductID() << " was found. Here is the information:" << std::endl;
                std::cout << std::endl << std::endl << "Product ID: " << currentNode->getProductID() << std::endl;
                std::cout << "Product Name: " << currentNode->getProductName() << std::endl;
                std::cout << "Product Price: " << std::setprecision(2) << std::fixed << currentNode->getProductPrice() << std::endl;
                std::cout << "Number Of Reviews: " << currentNode->getNumberOfReviews() << std::endl;
                std::cout << "Rating Of The Product: " << currentNode->getRatingOfTheProduct() << std::endl;
                std::cout << "Product Description: " << currentNode->getProductDescription() << std::endl;
                std::cout << "Possible Shipping Date: " << currentNode->getPossibleShippingDate() << std::endl;
                std::cout << "Size Of Product Description: " << currentNode->getSizeOfTheProductDescription() << std::endl << std::endl << std::endl; 
            }
            else if((currentNode->getProductName() != productName) && (currentNode -> next != NULL)){
                std::cout << std::endl << "ERROR! There was no item in the list with a name of: " << productName << ". Please enter a valid product name and try again." << std::endl << std::endl;
            }
            
        }
    }
    
}

//This function swaps all the data values for the nodes.
void swap(Node **innerLoopNode, Node **outerLoopNode){

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    //These are the temporary variables for each data values for each node.
    int tempProductID;
    std::string tempProductName;
    double tempProductPrice;
    int tempNumberOfReviews;
    double tempRating;
    std::string tempProductDescription;
    int tempPossibleShippingDate;
    int tempSizeOfTheProductDescription;

    //This will swap the ID's of both the products.
    tempProductID = (*outerLoopNode)->getProductID();
    (*outerLoopNode)->setProductID((*innerLoopNode)->getProductID());
    (*innerLoopNode)->setProductID(tempProductID);

    //This will swap the names of the products.
    tempProductName = (*innerLoopNode)->getProductName();
    (*innerLoopNode) -> setProductName((*outerLoopNode)->getProductName());
    (*outerLoopNode) -> setProductName(tempProductName);

    //This will swap the prices of  the products.
    tempProductPrice = (*innerLoopNode)-> getProductPrice();
    (*innerLoopNode) -> setProductPrice((*outerLoopNode)->getProductPrice());
    (*outerLoopNode)->setProductPrice(tempProductPrice);

    //This will swap the number of reviews of the products.
    tempNumberOfReviews = (*innerLoopNode)->getNumberOfReviews();
    (*innerLoopNode)->setNumberOfReviews((*outerLoopNode)->getNumberOfReviews());
    (*outerLoopNode)->setNumberOfReviews(tempNumberOfReviews);

    //This will swap ratings of the products.
    tempRating = (*innerLoopNode)->getRatingOfTheProduct();
    (*innerLoopNode)->setRatingOfTheProduct((*outerLoopNode)->getRatingOfTheProduct());
    (*outerLoopNode)->setRatingOfTheProduct(tempRating);

    //This will exchange the product descriptions, for each of the products.
    tempProductDescription = (*outerLoopNode)->getProductDescription();
    (*outerLoopNode)->setProductDescription((*innerLoopNode)->getProductDescription());
    (*innerLoopNode)->setProductDescription(tempProductDescription);

    //This will swap the shipping dates of both the products.
    tempPossibleShippingDate = (*innerLoopNode)->getPossibleShippingDate();
    (*innerLoopNode)->setPossibleShippingDate((*outerLoopNode)->getPossibleShippingDate());
    (*outerLoopNode)->setPossibleShippingDate(tempPossibleShippingDate);

    //This will swap the size of the product descriptions.
    tempSizeOfTheProductDescription = (*innerLoopNode)->getSizeOfTheProductDescription();
    (*innerLoopNode)->setSizeOfTheProductDescription((*innerLoopNode)->getProductDescription());
    (*outerLoopNode)->setSizeOfTheProductDescription((*outerLoopNode)->getProductDescription());
}





//This is the function that sorts the list.
void sortList(Node **head){

    //We declare an outer loop node and an inner loop node.
    Node *outerLoopNode;
    Node *innerLoopNode;


    std::string userOption; //This variable will hold the user's option.

    //The user's options are given.
    WRONG_INPUT: std::cout << "How would you like to sort the products of the list? Please enter the LETTER corresponding to each option ";
    std::cout << std::endl << "a. Product Name: " << std::endl;
    std::cout << "b. Product Price: " << std::endl;
    std::cout << "c. Number Of Reviews: " << std::endl;
    std::cout << "d. Rating Of The Product: " << std::endl;
    std::cout << "e. Size Of The Product Description" << std::endl;

    
    std::cin.ignore();
    std::getline(std::cin, userOption);

    //The reason we use if-else statements instead of a switch statement is because, we don't want to constrain the user to only a limited amount of inputs.
    if((userOption == "a") || (userOption == "A") || (userOption == "a.") || (userOption == "A.")){
        for(outerLoopNode = *head; outerLoopNode != NULL; outerLoopNode = outerLoopNode->next){
            for(innerLoopNode = outerLoopNode->next; innerLoopNode != NULL; innerLoopNode = innerLoopNode->next){
                if(innerLoopNode->getProductName() < outerLoopNode->getProductName()){
                    swap(&innerLoopNode, &outerLoopNode);
                }
            }
        }
    }
    else if((userOption == "b") || (userOption == "B") || (userOption == "b.") || (userOption == "B.")){
        for(outerLoopNode = *head; outerLoopNode != NULL; outerLoopNode = outerLoopNode->next){
            for(innerLoopNode = outerLoopNode->next; innerLoopNode != NULL; innerLoopNode = innerLoopNode->next){
                if(innerLoopNode->getProductPrice() < outerLoopNode->getProductPrice()){
                    swap(&innerLoopNode, &outerLoopNode);
                }
            }
        }
    }
    else if((userOption == "c") || (userOption == "C") || (userOption == "c.") || (userOption == "C.")){
        for(outerLoopNode = *head; outerLoopNode != NULL; outerLoopNode = outerLoopNode->next){
            for(innerLoopNode = outerLoopNode->next; innerLoopNode != NULL; innerLoopNode = innerLoopNode->next){
                if(innerLoopNode->getNumberOfReviews() < outerLoopNode->getNumberOfReviews()){
                    swap(&innerLoopNode, &outerLoopNode);

                }
            }
        }
    }
    else if((userOption == "d") || (userOption == "D") || (userOption == "d.") || (userOption == "D.")){
        for(outerLoopNode = *head; outerLoopNode != NULL; outerLoopNode = outerLoopNode->next){
            for(innerLoopNode = outerLoopNode->next; innerLoopNode != NULL; innerLoopNode = innerLoopNode->next){
                if(innerLoopNode->getRatingOfTheProduct() < outerLoopNode->getRatingOfTheProduct()){
                    swap(&innerLoopNode, &outerLoopNode);

                } 
            }
        }
    }
    else if((userOption == "e") || (userOption == "E") || (userOption == "e.") || (userOption == "E.")){
        for(outerLoopNode = *head; outerLoopNode != NULL; outerLoopNode = outerLoopNode->next){
            for(innerLoopNode = outerLoopNode->next; innerLoopNode != NULL; innerLoopNode = innerLoopNode->next){
                swap(&innerLoopNode, &outerLoopNode);
            }
        }
    }


    else{
        std::cout << "Sorry there is something wrong with your input. Taking you back to the options menu: ";
    }
}


void deleteASingleProduct(Node **head){
    Node *current = *head;
    Node *slowNode = NULL;
    int counter = 0; //This counter will be used as a signal for the slow node to move.

    int deleteItem;
    std::cout << "Would you like to delete a product based on ID or name?\nPlease enter 1 for ID and 2 for name: ";
    
    //This is crucial, as this will clear the stream and ignore and new line characters before taking input from the user, regarding how the user wants to delete the products.
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.clear();

    std::cin >> deleteItem; //User inputs an integer

    //These commands are crucial as they clear the stream for user input, which will let the user input their statements in the if-else block.
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.clear();
    
    if(deleteItem == 1){
        int itemID;
        std::cout << std::endl << "Please enter the ID of the product that you would like to delete: ";
        std::cin >> itemID;    
        //This is the case when the user want to delete the first node in the linked list.
        if(((*head)->getProductID() == itemID) && (sizeOfList(head) > 1)){
            std::cout << std::endl << "Now, deleting the first item in the list: ";
            *head = current->next; //The head of the node 
            free(current); //Deletes the head of the list. 
            current = NULL;
        }
        else{
            
            //If the current node does not have the same id and the one we are looking for, and we have not reached the end of the list, then the list will be iterated.
            while((current->getProductID() != itemID) && (current -> next != NULL)){
                ++counter; //Counter is incremented by 1.
                if(counter >= 1){
                    slowNode = current; //slowNode will be the current node.
                }
                current = current->next; // The current node will now move to the next node.
            }

            /*I have to check to see if there is more than 1 node in the list. The reason being, if I don't then there will be a 
            segmentation fault that occurs due to, slowNode accessing memory that it shouldn't be, with the, 
            "slowNode->next = currentNode->next" command.
            */
            if((current -> getProductID() == itemID) && (sizeOfList(head) > 1)){
                std::cout << std::endl << "Now deleting item with id number: " << itemID << std::endl; //Informs the user what the ID number of the node that is being deleted is.
                slowNode->next = current->next; //The node before the node that was deleted, now points to the node after the current node.
                free(current); //Memory is deallocated for the node names "current".
                current = NULL; //The node named "current" now has a NULL value.
            }

            //This is the case when the user decided to delete the only item that he/she has in their list. In other words, only the head node is deleted from the user's list.
            else if((current->getProductID() == itemID) && (sizeOfList(head) == 1)){
                //The user is informed that the head of the linked list is being deleted (in other words, the only node in the list is being deleted).
                std::cout << std::endl << "Now deleting the head node (only node) in the list: ";
                free(current); //The memory for the current node is deallocated.
                *head = NULL; //The head node is set to a NULL value.
            }


            //This tells the user that there is no item in the list with the specified ID number that they entered.
            else{
                std::cout << std::endl << "Sorry, there is no item in the list with that ID number. Please try again: " << std::endl;
            }
        }
    }

    else if(deleteItem == 2){
        std::cout << std::endl << "Please enter the name of the product that you want to delete: " << std::endl;
        //std::cin.clear();
        std::string itemName;
        std::getline(std::cin, itemName);
        //This is the case when the user want to delete the first node in the linked list.
        if(((*head)->getProductName() == itemName) && (sizeOfList(head) > 1)){
            std::cout << std::endl << "Now, deleting the first item in the list: ";
            *head = current->next; //The head of the node 
            free(current); //Deletes the head of the list. 
            current = NULL;
        }
        else{
            
            //If the current node does not have the same id and the one we are looking for, and we have not reached the end of the list, then the list will be iterated.
            while((current->getProductName() != itemName) && (current -> next != NULL)){
                ++counter; //Counter is incremented by 1.
                if(counter >= 1){
                    slowNode = current; //slowNode will be the current node.
                }
                current = current->next; // The current node will now move to the next node.
            }

            /*I have to check to see if there is more than 1 node in the list. The reason being, if I don't then there will be a 
            segmentation fault that occurs due to, slowNode accessing memory that it shouldn't be, with the, 
            "slowNode->next = currentNode->next" command.
            */
            if((current -> getProductName() == itemName) && (sizeOfList(head) > 1)){
                std::cout << std::endl << "Now deleting item with the name: " << itemName << std::endl; //Informs the user what the ID number of the node that is being deleted is.
                slowNode->next = current->next; //The node before the node that was deleted, now points to the node after the current node.
                free(current); //Memory is deallocated for the node names "current".
                current = NULL; //The node named "current" now has a NULL value.
            }

            //This is the case when the user decided to delete the only item that he/she has in their list. In other words, only the head node is deleted from the user's list.
            else if((current->getProductName() == itemName) && (sizeOfList(head) == 1)){
                //The user is informed that the head of the linked list is being deleted (in other words, the only node in the list is being deleted).
                std::cout << std::endl << "Now deleting the head node (only node) in the list: ";
                free(current); //The memory for the current node is deallocated.
                *head = NULL; //The head node is set to a NULL value.
            }


            //This tells the user that there is no item in the list with the specified ID number that they entered.
            else{
                std::cout << std::endl << "Sorry, there is no item in the list with that name. Please try again: " << std::endl;
            }
        }
    }

    
}


//This function deletes all products from the list.
void deleteAllProducts(Node **head){
    Node *currentNode, *storingNode;

    //If there is only one node (head node), then only the head will be deleted.
    currentNode = *head;
    if(sizeOfList(head) == 1){
        free(currentNode); //The head node gets deleted.
        currentNode = NULL;
        *head = NULL; //The head node is set to NULL
    }
    //If there is more than just the head node in the list, then this statement will be run.
    else if(sizeOfList(head) >= 2){
        
        //Iterates the linked list.
        while(currentNode != NULL){
            storingNode = currentNode->next; //This is the node that will point to the node that will be deleted.
            free(currentNode);
            currentNode = NULL;
            currentNode = storingNode;
        }
        *head = NULL;
    }
}

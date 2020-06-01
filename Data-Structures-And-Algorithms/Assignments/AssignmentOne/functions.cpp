#include <iostream>


//This function computes the length of a string. It's input type is of type string.
int computeLengthString(std::string str){
    int i = 0;
    while(str[i] != '\0'){
        ++i; // Increments the value of i by one, if we haven't encountered the null terminator.
    }
    return i; //Upon reaching the null terminator, it returns the value of 'i' (which is the length of the string).
}

class Node{

    private:
        int productID;
        std::string productName;
        double productPrice;
        int numberOfReviews;
        double ratingOfTheProduct;
        std::string productDescription;
        int possibleShippingDate;
        int sizeOfTheProductDescription;

    public:

        void setProductID(int product_ID){
            productID = product_ID;
        }
        int getProductID(){
            return productID;
        }

        void setProductName(std::string product_name){
            productName = product_name;
        }
        std::string getProductName(){
            return productName;
        }

        void setProductPrice(double product_price){
            productPrice = product_price;
        }
        double getProductPrice(){
            return productPrice;
        }

        void setNumberOfReviews(int number_of_reviews){
            numberOfReviews = number_of_reviews;
        }
        int getNumberOfReviews(){
            return numberOfReviews;
        }

        void setRatingOfTheProduct(double rating_of_product){
            ratingOfTheProduct = rating_of_product;
        }
        double getRatingOfTheProduct(){
            return ratingOfTheProduct;
        }

        void setProductDescription(std::string product_description){
            productDescription = product_description;
        }
        std::string getProductDescription(){
            return productDescription;
        }

        void setPossibleShippingDate(int possible_shipping_date){
            possibleShippingDate = possible_shipping_date;
        }
        int getPossibleShippingDate(){
            return possibleShippingDate;
        }

        void setSizeOfTheProductDescription(){
            sizeOfTheProductDescription = computeLengthString(productDescription); 

        }
        int getSizeOfTheProductDescription(){
            return sizeOfTheProductDescription;
        }
        Node *next; //Points to the next node in the linked-list.
};





int size_Of_List;
int size_description;

void initalizeList(Node **head){
    *head = NULL;
}





void menu(){
    std::cout << "1. Display all products" << std::endl;
    std::cout << "2. Display a single product" << std::endl;
    std::cout << "3. Display the number of products" << std::endl;
    std::cout << "4. Save a new product" << std::endl;
    std::cout << "5. Sort the products" << std::endl;
    std::cout << "6. Delete a product" << std::endl;
    std::cout << "7. Delete all products" << std::endl;
    std::cout << "8. Exit" << std::endl;    
    std::cout << "==> Please enter a number between 1 and 8: ";
}


int sizeOfList(Node **head){
    
    if(*head == NULL){
        size_Of_List = 0;
        return(size_Of_List);
    }
    else{
        int size_Of_List = 1; //If the head node isn't NULL, then that means that there is some value in the head. So, the size of the list is one node.
        Node *currentNode = *head;
        while(currentNode->next != NULL){
            currentNode = currentNode->next;
            size_Of_List++;
        }
        return (size_Of_List);
    }
}


void addNewProduct(Node **head){
    Node *newProduct = (Node*)malloc(sizeof(Node));

    std::cout << std::endl << "So, you have decided to enter a new product. Please enter all the following information. " << std::endl;
    
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

    Node *currentNode = *head;
    
    if(*(head) == NULL){
        *head = newProduct;
    }

    if(size_Of_List >= 1){
        while((currentNode->next != NULL) || (currentNode->getProductID() == product_ID)){

            
            if(currentNode -> getProductID() == product_ID){
                ERROR_INPUT: std::string product_input;
                std::cout << std::endl << std::endl << "Sorry, there is already a product with that ID. Please enter a different ID number. ";
                goto EXECUTE;
            }

            if(currentNode->next != NULL){
                currentNode = currentNode -> next;
            }
        }
    }



    newProduct -> setProductID(product_ID);

    std::cin.ignore(); //This is a very crucial command to use. The reason being, this command flushes out a new-line character delimeter also known as, "\n"

    std::cout << "Product Name: ";
    std::getline(std::cin, product_name);    
    newProduct -> setProductName(product_name);

    std::cout << "Product Price: ";
    std::cin >> product_price;
    newProduct -> setProductPrice(product_price);
    
    std::cout << "Number Of Reviews: ";
    std::cin >> number_of_reviews;
    newProduct -> setNumberOfReviews(number_of_reviews);

    std::cout << "Rating Of Product: ";
    std::cin >> rating_of_product;
    newProduct -> setRatingOfTheProduct(rating_of_product);

    std::cin.ignore();

    std::cout << "Product Description: ";
    std::getline(std::cin, product_description);
    newProduct -> setProductDescription(product_description);

    std::cout << "Possible Shipping Date: ";
    std::cin >> possible_shipping_date;
    newProduct -> setPossibleShippingDate(possible_shipping_date);

    std::cout << "Size Of Product Description: ";
    std::cout << newProduct-> getSizeOfTheProductDescription();

    newProduct->next = NULL;

    //Increments the number of items in the list by one.
    size_Of_List += 1;

    std::cout << newProduct->getProductID();

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
        std::string newProductInput;
        std::cout << std::endl << "Sorry, there are no products to display. Would you like to add a new product? Enter 'y' for yes and enter 'n' for no: ";
        std::cin.ignore();
        std::getline(std::cin, newProductInput); //Just in case the user accidentally enters a space. If I used "std::cin >> newProductInput", and the user input a space accidentally, then it would have MOST LIKELY resulted in a segmentation fault.
        
        //If the user does indeed decide to add a new product by entering something similar to 'y' or 'y' itself, then the addNewProduct function will be called, with an input of head.
        if((newProductInput == "y") || (newProductInput == "Y") || (newProductInput == "yes") || (newProductInput == "Yes") || (newProductInput == "YES")){
            addNewProduct(head);
        }
        else if((newProductInput != "y") || (newProductInput != "Y") || (newProductInput != "yes") || (newProductInput != "Yes") || (newProductInput != "YES") || (newProductInput != "n") || (newProductInput != "N") || (newProductInput != "no") || (newProductInput != "No") || (newProductInput != "NO")) {
            std::cout << "Please enter one of the valid inputs: " << std::endl << std::endl;
            //The function is recursively called, and the user will have to input one of the valid inputs.
            displayAllProducts(head); //ERROR: If you get an errors, then consider looking here.
        }
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


void displayASingleProduct(Node **head, int ID){
    Node *currentNode = *head;

    while((currentNode->getProductID() != ID) && (currentNode->next != NULL)){
        currentNode = currentNode -> next;
    }
    if(currentNode->getProductID() == ID){
        FirstItem:
            std::cout << "The node with ID, " << currentNode->getProductID() << " was found. Here is the information:" << std::endl;
            std::cout << std::endl << std::endl << "Product ID: " << currentNode->getProductID() << std::endl;
            std::cout << "Product Name: " << currentNode->getProductName() << std::endl;
            std::cout << "Product Price: " << currentNode->getProductPrice() << std::endl;
            std::cout << "Number Of Reviews: " << currentNode->getNumberOfReviews() << std::endl;
            std::cout << "Rating Of The Product: " << currentNode->getRatingOfTheProduct() << std::endl;
            std::cout << "Product Description: " << currentNode->getProductDescription() << std::endl;
            std::cout << "Possible Shipping Date: " << currentNode->getPossibleShippingDate() << std::endl;
            std::cout << "Size Of Product Description: " << currentNode->getSizeOfTheProductDescription() << std::endl << std::endl << std::endl; 
    }
    else if((currentNode ->getProductID() != ID) && (currentNode -> next == NULL)){
        std::cout << std::endl << "ERROR: There was no item in the list with an id of: " << ID << ". Please enter a valid ID and try again." << std::endl << std::endl;
    }
}


//This is the function that sorts the list.
void sortList(Node **head){


    Node *outerLoopNode;
    Node *innerLoopNode;

    std::string tempProductName;
    double tempProductPrice;
    int tempNumberOfReviews;
    double tempRating;
    int tempSizeOfTheProductDescription;
    std::string userOption;


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
                    tempProductName = innerLoopNode->getProductName();
                    innerLoopNode -> setProductName(outerLoopNode->getProductName());
                    outerLoopNode -> setProductName(tempProductName);
                }
            }
        }
    }
    else if((userOption == "b") || (userOption == "B") || (userOption == "b.") || (userOption == "B.")){
        for(outerLoopNode = *head; outerLoopNode != NULL; outerLoopNode = outerLoopNode->next){
            for(innerLoopNode = outerLoopNode->next; innerLoopNode != NULL; innerLoopNode = innerLoopNode->next){
                if(innerLoopNode->getProductPrice() < outerLoopNode->getProductPrice()){
                    tempProductPrice = innerLoopNode -> getProductPrice();
                    innerLoopNode -> setProductPrice(outerLoopNode->getProductPrice());
                    outerLoopNode->setProductPrice(tempProductPrice);
                }
            }
        }
    }
    else if((userOption == "c") || (userOption == "C") || (userOption == "c.") || (userOption == "C.")){
        for(outerLoopNode = *head; outerLoopNode != NULL; outerLoopNode = outerLoopNode->next){
            for(innerLoopNode = outerLoopNode->next; innerLoopNode != NULL; innerLoopNode = innerLoopNode->next){
                if(innerLoopNode->getNumberOfReviews() < outerLoopNode->getNumberOfReviews()){
                    tempNumberOfReviews = innerLoopNode->getNumberOfReviews();
                    innerLoopNode->setNumberOfReviews(outerLoopNode->getNumberOfReviews());
                    outerLoopNode->setNumberOfReviews(tempNumberOfReviews);
                }
            }
        }
    }
    else if((userOption == "d") || (userOption == "D") || (userOption == "d.") || (userOption == "D.")){
        for(outerLoopNode = *head; outerLoopNode != NULL; outerLoopNode = outerLoopNode->next){
            for(innerLoopNode = outerLoopNode->next; innerLoopNode != NULL; innerLoopNode = innerLoopNode->next){
                if(innerLoopNode->getRatingOfTheProduct() < outerLoopNode->getRatingOfTheProduct()){
                    tempRating = innerLoopNode->getRatingOfTheProduct();
                    innerLoopNode->setRatingOfTheProduct(outerLoopNode->getRatingOfTheProduct());
                    outerLoopNode->setRatingOfTheProduct(tempRating);
                } 
            }
        }
    
    
    }
    else{
        std::cout << "Sorry there is something wrong with your input. Please enter one of the following options: ";
        goto WRONG_INPUT;
    }


    //Here we implement the linked-list version of the bubble sort algorithm, which has a complexity of O(N^2), with "N" being the number of elements in the linked-list.
        for(outerLoopNode = *head; outerLoopNode != NULL; outerLoopNode = outerLoopNode->next){
            for(innerLoopNode = outerLoopNode->next; innerLoopNode != NULL; innerLoopNode = innerLoopNode->next){

                if(innerLoopNode->getRatingOfTheProduct() < outerLoopNode->getRatingOfTheProduct()){
                    tempRating = innerLoopNode->getRatingOfTheProduct();
                    innerLoopNode->setRatingOfTheProduct(outerLoopNode->getRatingOfTheProduct());
                    outerLoopNode->setRatingOfTheProduct(tempRating);
                }          
                
                //SORTING_ALGORITHM_DESCRIPTION_SIZE:

            }
        }

    std::cout << std::endl << std::endl << "The sorted list is now: "; 
    displayAllProducts(head);
}


void deleteASingleProduct(Node **head, int ID){
    Node *current = *head;
    Node *slowNode = NULL;
    int counter = 0; //This counter will be used as a signal for the slow node to move.

    while((current->getProductID() != ID) && (current -> next != NULL)){
        ++counter;
        if(counter >= 1){
            slowNode = current;
        }
        current = current->next;
    }

    /*I have to check to see if there is more than 1 node in the list. The reason being, if I don't then there will be a 
    segmentation fault that occurs due to, slowNode accessing memory that it shouldn't be, with the, 
    "slowNode->next = currentNode->next" command.
    */
    if((current -> getProductID() == ID) && (sizeOfList(head) > 1)){
        std::cout << std::endl << "Now deleting item with id number: " << ID << std::endl;
        slowNode->next = current->next;
        free(current);
        //*current = NULL;
        current = NULL;
    }

    //This is the case when the user decided to delete the only item that he/she has in their list. In other words, only the head node is deleted from the user's list.
    else if((current->getProductID() == ID) && (sizeOfList(head) == 1)){
        std::cout << std::endl << "Now deleting the head node (only node) in the list: ";
        free(current);
        *head = NULL;
    }

    else{
        std::cout << std::endl << "Sorry, there is no item in the list with that ID number. Please try again: " << std::endl;
    }
    
}



void deleteAllProducts(Node **head){
    //Node *currentNode = *head;
    Node *currentNode, *storingNode;

    //If there is only one node (head node), then only the head will be deleted.
    currentNode = *head;
    if(sizeOfList(head) == 1){
        free(currentNode); //The head node gets deleted.
    }
    //If there is more than just the head node in the list, then this statement will be run.
    else if(sizeOfList(head) >= 2){
        //int deletionCounter = 0; //This counter will be used to keep track of what node needs to be deleted. So, this will be just behind the currentNode node.
        while(currentNode != NULL){
            storingNode = currentNode->next; //This is the node that will point to the node that will be deleted.
            free(currentNode);
            currentNode = storingNode;
        }
        *head = NULL;
    }
}


/*Next Up: Sorting Algorithms n shit
Next Up: Display items in the list based on name or ID, and get size of the user's product descriptions.
-Remember to get rid of the size of description variable, considering the fact that you are not taking input from it anymore.
*/

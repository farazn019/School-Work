//Created by Faraz Naseem.

#include <iostream>
#include <queue> //The queue data structures is imported, for insertion into a binary search tree.

//This class contains the code to create a node.
class node{
    //This holds the private variable(s).
    private:
        int data; //Holds the integer data for each node.
    //This holds the private and public methods.
    public:
        //The setData function sets the data value of the node.
        void setData(int data) {this->data = data;}
        //The getData function returns the integer value of each node.
        int getData(){return(this->data);}
        node *left; //Pointer to the left node.
        node *right; //Pointer to the right node.
};

//This class contains the code to create a binary tree.
class binaryTree{
    //This contains all the code for the private variables.
    private:
        //The "root" node initally creates a root node.
        node *root = new node;
        //The inital value of the currentSize variable is 0.
        int currentSize = 0;

    //This  contains all the code for the public variables and methods.
    public:
        //The rootnode variable points to the root of the binary tree.
        node *rootnode = root;

        //This function returns the current size of the binary tree (number of nodes).
        int getCurrentSize(){ return(this->currentSize);}

        //This function returns a boolean value on whether or not the binary tree is empty or not.
        bool isEmpty(){
            //If the current size of the binary tree is 0 (there are 0 nodes), then the function will return a value of true.
            if(this->getCurrentSize() == 0){ return(true);}
            //If the current size of the binary tree is not 0 (there are not 0 nodes), then the function will return a value of false.
            else{ return(false);}
        }

        

        //This is the insert function which takes an input of rootNode and key.
        void insert(node* rootNode, int key) { 
            //A queue named insertionQueue is created with a type of node.
            std::queue<node*> insertionQueue; 
            insertionQueue.push(rootNode); //The rootNode value is pushed to the insertionQueue.
        
            //This will iterate through the binary tree.  
            while (!insertionQueue.empty()) { 
                //A rootNode is inserted in the insertionQueue's front.
                node* rootNode = insertionQueue.front(); 
                //The front node of the insertionQueue queue is removed (popped).
                insertionQueue.pop(); 
        

                //If the rootNode has a left node, then it will go to the left node.
                if(!rootNode->left) { 
                    //A new node that previously pointed to NULL, is created.
                    rootNode->left = new node;
                    //The left node to the root now has a data value, with the value key.
                    rootNode->left->setData(key); 
                    break; //This will break out of the while-loop.
                } 
                //If the rootNode's left node is not null, then the insertionQueue's rootNode to the left is pushed to the queue.
                else{ insertionQueue.push(rootNode->left);} 
        
                //If the rootNode's right node is NULL, then it will go to the right node.
                if(!rootNode->right) { 
                    //A new node that previously pointed to NULL, is created.
                    rootNode->right = new node;
                    //The right node to the root now has a data value, with the value key.
                    rootNode->right->setData(key); 
                    break; //This will break out of the while-loop.
                } 
                //If the rootNode's right node is not NULL, then the insertionQueue's rootNode to the right is pushed to the queue.
                else{ insertionQueue.push(rootNode->right);} 
            } 
        } 

        /*The insertSearch function has type of node, and is used to insert an element into the binary search tree. 
        The inputs are: root of type node, and key of type integer.*/
        node* insertSearch(node* root, int key)
        {
            //A newnode node is created.
            node* newnode = new node();
            newnode->setData(key); //The data of newnode is set to a value of key.
        
            //leadNode of type node is created, and points to root.
            node* leadNode = root;
        
            //previousNode of type node is created, and initally points to NULL.
            node* previousNode = NULL;
        
            //This iterates as long as leadNode isn't NULL.
            while (leadNode != NULL) {
                //previousNode is now equal to leadNode.
                previousNode = leadNode;
                //If the key is less than leadNode's data, then leadNode will point to the left node after leadNode.
                if (key < leadNode->getData()){ leadNode = leadNode->left;}
                //If the key is greater than or equal to leadNode's data, then leadNode will point to the right node after leadNode.
                else{ leadNode = leadNode->right;}
            }
        
            //If previousNode is NULL, then previousNode becomes the newnode.
            if (previousNode == NULL){ previousNode = newnode;}
        
            //If the key is less than the previousNode's data then the previousNode's left node points to newnode.
            else if (key < previousNode->getData()){ previousNode->left = newnode;}
        
            //If key is greater than or equal to previousNode's data, then previousNode's right node is equal to newnode.
            else{previousNode->right = newnode;}
        
            //This function returns previousNode.
            return previousNode;
        }

        //This if the smallestNode function which has a type of node,
        node *smallestNode(node *root){
            //The current node is initally set to the root node.
            node *current = root;
            //This iterates through the binary tree by going to every left node of the current node.
            while(current->left != NULL){ current = current -> left;}
            //Returns the left-most node of the binary search tree.
            return(current);
        }

        //This function deletes a node from the binary tree, it has a type of node.
        node* deleteNode(node* root, int key) { 
            node* current = root; //The current node points to the root.
            node* previousNode = NULL; //The previousNode has an inital value of NULL.
        
            //This iterates through the binary tree.
            while (current != NULL && current->getData() != key) { 
                previousNode = current; //The inital value of previousNode is current.

                //If the value of key, is less than the value of the current node, then the current node becomes the left node of current.
                if (key < current->getData()){ current = current->left;} 
                //Else the current node becomes the right node of the current node.
                else{ current = current->right;} 
            } 

        
            //If the node is null, then this if-statement will run.
            if (current == NULL) { 
                this->endStream(); //This creates a new-line by ending the output stream.
                //Prints a message telling the user telling them that there was no value in the Binary Tree with the specified key.
                std::cout << "There was no node in the Binary Tree with the value, " << key << '.';
                //returns the root node of the binary tree.
                return root; 
            } 
        
            //This if-function will check if any of the left node or the right node is NULL, and if so, then this if-function will run.
            if (current->left == NULL || current->right == NULL) { 
        
                //The secondCurrentNode will replace the current node.
                node* secondCurrentNode; 
        
                //If the current node that points to left is NULL, then the secondCurrentNode becomes the right node after current.
                if (current->left == NULL){secondCurrentNode = current->right;}
                //If the current node that points to the left is not NULL, then the secondCurrentNode becomes the left node after current.
                else{ secondCurrentNode = current->left;}
        
                //If the previousNode value points to NULL, then the secondCurrentNode will be returned.
                if (previousNode == NULL){ return  secondCurrentNode;}
        
                //If the current node is equivalent to the left node of previousNode, then the left node of previousNode will become secondCurrentNode.
                if (current == previousNode->left){ previousNode->left =  secondCurrentNode;}
                //Else the right node of previousNode will become secondCurrentNode.
                else{ previousNode->right =  secondCurrentNode;} 

                //The memory of the current node is freed, and the node is thus deleted.
                free(current); 
            }
            return previousNode; //The previousNode is returned, thus exiting out of the function.
        }

        
        //This function skips a line, by ending the output stream.
        void endStream(){ std::cout << std::endl;}

        void printPostorder(node *current, int key1 = 0, int key2= 0) { 
            //If the current node is null, then it exits the function.
            if (current == NULL){return; }
            //Recursively calls the function to the left node of the current one.
            printPostorder(current->left, key1, key2); 
            //Recursively calls the function to the right node of the current one.
            printPostorder(current->right, key1, key2); 
            //Prints the value of the current node.   
            if(current->getData() != key1 && current->getData() != key2){
                std::cout << current->getData() << " "; 
            }     
        } 

        //This function prints the in-order traversal of the binary search tree.
        void printInOrder(node *current, int key1 = 0, int key2 = 0){
            //If the current node is null, then it exits the function.
            if(current == NULL){ return;}
            printInOrder(current->left, key1, key2); //Recursively calls the function by calling the left node of current.
            //Prints the value of the current node.
            if(current->getData() != key1 && current->getData() != key2){
                std::cout << current->getData() << " "; 
            }     
            printInOrder(current->right, key1, key2); //Recursively calls the functions by calling the right node of current.
        }

        //This function prints the pre-order traversal of the binary search tree.
        void printPreOrder(node *current, int key1 = 0, int key2 = 0){
            //If the current node is null, then it exits the function.
            if(current == NULL){ return;}
            //Prints the value of the current node.
            if(current->getData() != key1 && current->getData() != key2){
                std::cout << current->getData() << " "; 
            }    
            printPreOrder(current->left, key1, key2); //Recursively calls the function by calling the left node of current.
            printPreOrder(current->right, key1, key2); //Recursively calls the function by calling the right node of current.
        }

        //This function returns a boolean value depending on whether or not a node in the binary tree contains the key.
        bool searchForKey(node *rootNode, int key){
            node*current = rootNode; //The current node initally points to the rootNode variable.

            //While the current node is not NULL, the function will iterate through the binary tree, and it will return true if the node with the specific key is found.
            while(current!= NULL){
                //If the current node's data is greater than the value of the key, then the current node will become the node to the left of the current one.
                if(current->getData() > key){ current = current->left;}
                //If the current node's data is less than the value of the key, then the current node will become the node to the right of the current one.
                else if(current->getData() < key){ current = current->right;}
                //If the current node's data is equal to the value of the key, then the function will return a value of true.
                else if(current->getData() == key){ return(true);}

            }
            if(current != NULL){ return(true);} //If the current node isn't null, then the node is found, and the function will return true.
            else{ return(false);} //If the current node is null, then the node is not found, and the function will return false.

        }

        //This function prints the string value depending on the boolean return value of the searchForKey function. 
        void printBooleanValue(bool value, int key){
            //If the value boolean variable is true, then a message stating Yes, will be printed.
            if(value == true){
                this->endStream(); //Makes a newline by clearing the output stream.
                std::cout << "Yes, this binary search tree contains the value, " << key << '.'; //Prints a message stating that the binary tree contains that value.
            }
            //If the value of the boolean variable is false, then a message stating No, will be printed.
            else if(value == false){
                this->endStream(); //Makes a newline by clearing the output stream.
                std::cout << "No, this binary tree does not contain the value, " << key << '.'; //Prints a message stating that the binary tree does not contain that value. 
            }
        }
};

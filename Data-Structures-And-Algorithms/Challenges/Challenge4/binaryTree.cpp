#include <iostream>
#include <cmath>
#include <vector>




class node{
    private:
        int data;

    public:
        void setData(int data){this->data = data;}
        int getData(){ return(this->data);}
        node *left = NULL;
        node *right = NULL;
};










class binarySearchTree{

    private:
        node *root = NULL;
    
    public:
        int numberOfNodes;

        void getNumberOfNodes(){
            std::cin >> numberOfNodes;
        }

        void insertionNode(){
            int dataValue;
            node *current;
            for(int i = 0; i < numberOfNodes; i++){
                std::cin >> dataValue;
                if(dataValue != -1){
                    node *newNode = new node;
                    newNode->setData(dataValue);
                    if(this->root == NULL){root = newNode;}

                    else{
                        current = root;
                        while((current->left!=NULL) || (current->right != NULL)){
                            if(newNode->getData() >= current->getData()){ current=current->right;}
                            else{current=current->left;}
                        }
                        if(current->getData() > newNode->getData()){ current->left = newNode;}
                        else{current->right = newNode;}
                    }
                }
            }
        }
       
        void printIsBST(bool BSTValue){
            if(BSTValue == true){
                std::cout << "This is a binary tree.\n";
            }
            else{
                std::cout << "This is not a binary tree.\n";
            }
        }
        
        

};
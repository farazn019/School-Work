#include <iostream>
#include "binaryTree.cpp"

int main(){

    binarySearchTree *BST = new binarySearchTree();
    BST->getNodes();
    bool determineIfBST = BST->isBST();
    BST->printIsBST(determineIfBST);

    return 0;
}
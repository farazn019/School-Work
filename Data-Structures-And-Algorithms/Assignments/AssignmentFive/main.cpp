//Created By Faraz Naseem.
#include <iostream>
#include "binaryTree.cpp" //Includes the "binaryTree.cpp" file, which executes all the programs.

//This is the main function, which will execute all the programs stated in Assignment 5.
int main(){
    //This is the execution code for q1.
    {
        binaryTree* treeOne = new binaryTree();
        node* root = new node;
        root->setData(1);
        treeOne->rootnode = root;
        treeOne->insert(root, 2);
        treeOne->insert(root, 3);
        treeOne->insert(root, 4);
        treeOne->insert(root, 5);
        treeOne->insert(root, 6);
        treeOne->insert(root, 7);
        treeOne->insert(root, 8);
        treeOne->insert(root, 9);
        treeOne->insert(root, 10);
        treeOne->insert(root, 11);
        treeOne->insert(root, 12);
        treeOne->insert(root, 13);
        treeOne->insert(root, 14);
        treeOne->insert(root, 15);
        treeOne->printPreOrder(root);
        treeOne->endStream();
        treeOne->printPostorder(root);
        treeOne->endStream();
        treeOne->printInOrder(root);
        treeOne->endStream();
        std::cout << "Finished with the first complete binary tree." << std::endl << std::endl << std::endl;
    }

    //This is the code for input i. for q2.
    {

        binaryTree* treeOne = new binaryTree();
        node* root = new node;
        root->setData(1);
        treeOne->rootnode = root;
        treeOne->insertSearch(root, 2);
        treeOne->insertSearch(root, 3);
        treeOne->insertSearch(root, 4);
        treeOne->insertSearch(root, 5);
        treeOne->insertSearch(root, 6);
        treeOne->insertSearch(root, 7);
        treeOne->insertSearch(root, 8);
        treeOne->insertSearch(root, 9);
        treeOne->insertSearch(root, 10);
        treeOne->insertSearch(root, 11);
        treeOne->insertSearch(root, 12);
        treeOne->insertSearch(root, 13);
        treeOne->insertSearch(root, 14);
        treeOne->insertSearch(root, 15);
        treeOne->printInOrder(root, 0);
        treeOne->endStream();
        treeOne->printPostorder(root, 0);
        treeOne->endStream();
        treeOne->printPreOrder(root, 0);
        treeOne->endStream();
        treeOne->printBooleanValue(treeOne->searchForKey(root, 15), 15);
        treeOne->printBooleanValue(treeOne->searchForKey(root, 25), 25);
        treeOne->deleteNode(root, 13);
        treeOne->endStream();
        treeOne->printInOrder(root, 13);
        treeOne->deleteNode(root, 8);
        treeOne->endStream();
        treeOne->printInOrder(root, 8);
        treeOne->endStream();
        std::cout << "Finished with the second binary search tree." << std::endl << std::endl << std::endl;
    }

    //This is the code for input ii. for q2.
    {
        binaryTree* treeTwo = new binaryTree();
        node *root = new node;
        root->setData(8);
        treeTwo->rootnode = root;
        treeTwo->insertSearch(root, 12);
        treeTwo->insertSearch(root, 14);
        treeTwo->insertSearch(root, 10);
        treeTwo->insertSearch(root, 4);
        treeTwo->insertSearch(root, 6);
        treeTwo->insertSearch(root, 13);
        treeTwo->insertSearch(root, 11);
        treeTwo->insertSearch(root, 2);
        treeTwo->insertSearch(root, 9);
        treeTwo->insertSearch(root, 7);
        treeTwo->insertSearch(root, 3);
        treeTwo->insertSearch(root, 15);     
        treeTwo->endStream();
        treeTwo->printInOrder(root);
        treeTwo->printBooleanValue(treeTwo->searchForKey(root, 15), 15);
        treeTwo->printBooleanValue(treeTwo->searchForKey(root, 25), 25);
        treeTwo->endStream();
        treeTwo->deleteNode(root, 13);
        treeTwo->printInOrder(root, 13);
        treeTwo->endStream();
        treeTwo->deleteNode(root, 8);
        treeTwo->endStream();
        treeTwo->printInOrder(root, 8);
        treeTwo->endStream();
    }
    return 0; //This main function will return a value, and thus successfully exit out of the function.
}
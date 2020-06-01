#include <iostream>
#include "Node.cpp"

void menu();
void initalizeList(Node **head);
int sizeOfList(Node **head);
void displayAllProducts(Node **head);
void addNewProduct(Node **head);
void displayASingleProduct(Node **head, int ID);
void sortList(Node **head);
void deleteASingleProduct(Node **head, int ID);
void deleteAllProducts(Node **head);
int computeLengthString(std::string Str);
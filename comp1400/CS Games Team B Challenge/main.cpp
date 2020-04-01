#include <iostream>

int size;

int stockTransaction(int stocks[])
{
    int *stocks = new int[size];
    std::cout << "What are the different stock prices you would like to add" << std::endl;

    for(int i = 0; i < size; i++)
    {
            std::cin >> stocks[i];
    }
}


int main(){
    stockTransaction();
}

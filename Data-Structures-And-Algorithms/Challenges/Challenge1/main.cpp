//Created by Faraz Naseem.

#include <iostream>

//The function is declared here.
void stringProcessing(int size_item1, int size_query1);

//The main function
int main(){
    stringProcessing(5, 3); // The function is called here with the first set of inputs.
    stringProcessing(7, 4); //The function is called here with the second set of inputs.

    std::cout << std::endl << "Student Name: Faraz Naseem\nStudent Number:110009274" << std::endl;
}


//This is where the function is populated.
void stringProcessing(int size_item1, int size_query1){
    std::string item1[size_item1]; //Item1 array
    std::string query1[size_query1]; //Query1 array
    int matching[size_query1];
    
    
    int current_index; //Iterator for item1 array.
    
    int tracker = 0; //This will keep track of how many occurences of a given string there are.
    
    //Inputs for first array.
    for(int current_index = 0; current_index < size_item1; current_index++){
        std::cin >> item1[current_index];
    }
    
    //Inputs for second array
    for(int current_index2 = 0; current_index2 < size_query1; current_index2++){
        std::cin >> query1[current_index2];
    }
    

    int second_comparison; //This will compare the strings in both arrays

    //This will compare both the strings
    for(int current_index3 = 0; current_index3 < size_query1; current_index3++){
        for(second_comparison = 0; second_comparison < size_item1; second_comparison++){
            if(query1[current_index3] == item1[second_comparison]){
                ++tracker;
            }
        }
        matching[current_index3] = tracker;
        tracker = 0;
    }
    
    //Outputs the results.
    for(int i = 0; i < size_query1; i++){
        std::cout << matching[i] << " ";
    }
    std::cout << std::endl << "___________________________________________________________________________" <<std::endl << std::endl; //Seperates both inputs
    
}
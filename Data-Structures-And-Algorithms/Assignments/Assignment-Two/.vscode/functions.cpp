#include <iostream>
#include <string>

int sizeOfString(std::string input){
    int current_size = input.length();
    return(current_size);
    
}



//This function will the equation to see if it has an equal amount of opening and closing parantheses. 
bool parseEquation(std::string equation){
    int openingParentheses = 0; //This will keep track of the number of opening parantheses.
    int closingParentheses = 0; //This will keep track of the number of closing parantheses.
    int index = 0;
    int sizeEquation = equation.length();
    while(index < sizeEquation){
        if(equation.at(index) == ')'){
            ++closingParentheses;
        }
        else if(equation.at(index) == '('){
            ++openingParentheses;
        }
        ++index;        
    }



    if(openingParentheses == closingParentheses){
        return(true);
    }
    else if(openingParentheses != closingParentheses){
        return(false);
    }
}


bool containsParantheses(std::string equation, int sizeEquation){
    int openingParentheses = 0; //This will keep track of the number of opening parantheses.
    int closingParentheses = 0; //This will keep track of the number of closing parantheses.
    int index = 0;
    while(index < sizeEquation){
        if(equation.at(index) == ')'){
            ++closingParentheses;
        }
        else if(equation.at(index) == '('){
            ++openingParentheses;
        }
        ++index;        
    }
    if(openingParentheses >= 1){
        return(true);
    }
    else{
        return (false);
    }
    
}

class Stack{
    public:
        int sizeStack = 0;
        int precedence_operator = 0;
        std::string equation = "";
        
        //This is a constructor for the Stack class.
        Stack(std::string theEquation){
            this->equation = theEquation;
        }

        //Removes a character from the end of the string.
        void pop(){
            this->equation.erase(sizeOfString(this->equation) - 1, sizeOfString(this->equation));
            this->sizeStack = sizeOfString(this->equation) - 1;    
        }

        //Adds a character to the beginning of the string.
        void push(char newChar){ 
            this->equation += newChar;
            this->sizeStack = sizeOfString(this->equation) + 1;
        }

        //This method will print all the elements of the stack.
        void printList(){
            for(int i = 0; i < sizeOfString(this->equation); i++){
                std::cout << this->equation.at(i);
            }
        }

        //This method will determine if the stack is empty or not.
        bool isEmpty(int size){
            if(size == 0){ return true;}
            else if(size >= 1){ return false;}
        }

        char findAtIndex(int index){
            char current_character = this->equation.at(index);
            return(current_character);
        }


};


int num_operators(std::string inputString){
    int number_of_operators = 0;
    for(int index = 0; index < sizeOfString(inputString); index++){
        if((inputString.at(index) == '(') || (inputString.at(index) == ')') || (inputString.at(index) == '(') || (inputString.at(index) == '*') || (inputString.at(index) == '/') || (inputString.at(index) == '+') || (inputString.at(index) == '-')){
            ++number_of_operators;
        }
    }
    return(number_of_operators);
}

int num_operands(int num_operators){
    return(++num_operators);

}



int precedence(char precedence_operator){
    int precedence_value = -1;
    if((precedence_operator == '(') || (precedence_operator == ')') || (precedence_operator == '(') || (precedence_operator == '*') || (precedence_operator == '/') || (precedence_operator == '+') || (precedence_operator == '-')){
        if(precedence_operator == '('){
            precedence_value = 1;
        }
        else if(precedence_operator == '^'){
            precedence_value = 2;
        }
        else if((precedence_operator == '*') || (precedence_operator == '/')){
            precedence_value = 3;
        }

        else if((precedence_operator == '+') || (precedence_operator == '-')){
            precedence_value = 4;
        }
    }
    return(precedence_value);//This variable will return the precedence value of the specific operator. If there is no operator, then -1 will be returned.
}
#include <iostream>

#include "functions.cpp"
#include <iostream>
#include <string>

int main(){
    std::string originalEquation;
    std::string finalString = "";
    std::string operators = "";
    int equationSize;
    int precedence_value;
    bool result;
    char operatorChar;


    Stack operators_stack(operators);

    std::cin.clear();
    std::getline(std::cin, originalEquation);

    equationSize = sizeOfString(originalEquation);//This variable holds the size of the equation that the user inputs.
    result = parseEquation(originalEquation);

    if(result){
        for(int outer_index = 0; outer_index < sizeOfString(originalEquation); outer_index++){
            //This integer value will store an integer, that will determine wether the current character is an operator or not.
            precedence_value = precedence(originalEquation.at(outer_index));

            //This is an edge-case for when I use this operator, because for some reason it is not converting properly in the precedence function.
            if(originalEquation.at(outer_index) == '^'){
                precedence_value = 2;
            }
            if((precedence_value == 1) && (sizeOfString(operators_stack.equation) > 0)){
                for(int current_operator = sizeOfString(operators_stack.equation) - 1; current_operator >= 0; current_operator--){
                    operatorChar = operators_stack.findAtIndex(current_operator);
                    finalString += operatorChar;
                    operators_stack.pop();
                }
            }
            //In the first iteration, the very first term of the equation is added to the beginning of the post-fix string.
            if((sizeOfString(finalString) == 0) && (precedence_value == -1)){
                finalString += (originalEquation.at(outer_index));
            }

            //After the first iteration is completed, the equation starts to look for operators and operands, with their respective priorities.
            else{
                //If the current character is an operator, then it will be appended to the top of the operators stack.
                if(precedence_value != -1){
                    //If there are already no elements in the stack, then we will just add the first operator to the top of the stack.
                    
                    if((sizeOfString(operators_stack.equation) == 0) && (precedence_value != -1)){
                        operators_stack.push(originalEquation.at(outer_index));
                    }

    
                    /* There are two cases that we must beware of: the firs tone is,
                    if there is more than 1 element in the stack that must be popped,
                    the second case is that there is only one element in the stack
                    that must be popped.*/
                    else if((sizeOfString(operators_stack.equation) == 1)){
                        if(precedence(originalEquation.at(outer_index)) >= precedence(operators_stack.findAtIndex(sizeOfString(operators_stack.equation) - 1))){
                            operatorChar = operators_stack.findAtIndex(0);
                            operators_stack.pop();
                            operators_stack.push(originalEquation.at(outer_index));
                            finalString += operatorChar;
                        }
                        else{
                            operators_stack.push(originalEquation.at(outer_index));
                        }
                    }
                    //If there is more than 1 operator in the stack, then this case will be run.
                    else if(sizeOfString(operators_stack.equation) > 1){
                        if(originalEquation.at(outer_index) >= operators_stack.findAtIndex(sizeOfString(operators_stack.equation) - 1) - 1){
                            for(int inner_index = sizeOfString(operators_stack.equation) - 1; inner_index >= 0; inner_index--){
                                if(originalEquation.at(outer_index) >= operators_stack.findAtIndex(inner_index)){    
                                    operatorChar = operators_stack.findAtIndex(inner_index);
                                    finalString += operatorChar;
                                    std::cout << std::endl << "Popped operator: " << operatorChar;
                                    operators_stack.pop();
                                }
                            }
                            operators_stack.push(originalEquation.at(outer_index));
                        }
                    }
                }
                
                //If the precedence value is -1, then that means that the current character in the original equation is a operand and not an operator.
                if(precedence_value == -1){
                    finalString += originalEquation.at(outer_index); //The operand is appended to the end of the finalString.
                }
            }
            //The Iteration Number of the current iteration is printed, along with the stack after each push and pop operation.
            std::cout << std::endl << "Iteration Number " << outer_index << ": " << finalString;
        }
        //*******IF THERE ARE FORMATTING PROBLEMS LOOK BELOW******
        //At the end there will always be one operator in the operator stack, so we will attach it to out final equation at the very end.
        int i = sizeOfString(operators_stack.equation) - 1;
        while(sizeOfString(operators_stack.equation) != 0){
            operatorChar = operators_stack.findAtIndex(i);
            operators_stack.pop();
            finalString += operatorChar;
            --i;
        }
    }
    else{
        std::cout << std::endl << "The equation that you entered is not valid!";
    }
    std::cout << std::endl << "Final Equation: " << finalString << std::endl;
    return 0;
    
}
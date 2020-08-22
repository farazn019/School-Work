//This file is the file that runs the program.

#include <iostream>

//The stack class creates an array-based stack
class stack{
    //All the private variables are stored here.
    private:
        int *arr; //This is an integer pointer, and it will be used as a dynamic array.
        int max_size; //This variable will hold the maximum size of the array.
        
    
    //All the public methods are declared here
    public:
        //Constructor will ask the user to input an integer value which will be the size of the array and the value of max_size
        stack(int max_size){
            this->max_size = max_size;
            arr = new int[max_size];
        }

        //This function will add elements to the stack (user will enter the variables).
        void populateStack(){
            for(int i = 0; i < this->max_size; i++){
                std::cin >> arr[i];
            }
        }

        //This function retrieves the maximum size of the stack.
        int getSize(){
            return(this->max_size);
        }

        //This function pops an element from the stack.
        int popElement(){
            int poppedElement = arr[0]; //This variable holds the first value of the array.
            //Populates all the elements of the array.
            for(int i = 0; i < this->max_size - 1; i++){
                arr[i] = arr[i + 1];
            }
            return(poppedElement); //The elements that was popped / removes is returned as an exit value from this function.
        }
        
        //This function will return the an element from the stack at a specific index.
        int getElementAtIndex(int index){
            return(arr[index]);
        }
};

//This class calculates the maximum score.
class Score{
    private:
        /*The purpose of the variables are: n holds the number of elements for Stack P, m holds the number of elements for Stack Q, 
        and z contains the maximum number.*/
        int n, m, z;
        int P_current_sum = 0, Q_current_sum = 0, total_current_sum;
        int score = 0;

        int P_popped_elements = 0;
        int Q_popped_elements = 0;
        stack *P; //The stack P will be one of the two stack declared.
        stack *Q; //The stack Q will be the second stack declared.
    public:



        //This is the constructor for this class,
        Score(){
            //Will ask the user to enter the size of Stack P, the size of Stack Q, and the maximum value.
            std::cout << "n, m, z: ";
            std::cin >> n >> m >> z;
            this-> n = n;
            this-> m = m;
            this->z = z;

            stack *P = new stack(this->n);
            stack *Q = new stack(this->m);

            this->P = P;
            this->Q = Q;

            //This will print out all the elements of stack P.
            std::cout << std::endl << "Stack P: ";
            P->populateStack();
            //This will print out all the elements of stack Q.
            std::cout << std::endl << "Stack Q: ";
            Q->populateStack();
        }


        //This function will compute the score of the user.
        int getScore(){
            int poppedElements = 0; 
            
            //Iterates through Stack P, to get the number of elements that are less than or equal to z.
            while(this->P_current_sum <= this->z){
                this->P_current_sum += P->getElementAtIndex(this->P_popped_elements);
                if(this->P_current_sum == this->z){
                    break;
                }
                ++this->P_popped_elements;
            }

            
            //Iterates through Stack Q, to get the number of elements less than or equal to z.
            while(this->Q_current_sum <= this->z){
                this->Q_current_sum += Q->getElementAtIndex(this->Q_popped_elements);

                if(this->Q_current_sum == this->z){
                    break;
                }

                ++this->Q_popped_elements;
            }
            //If the number of elements in P are greater than the number of elements in Q, then it will return the score as being the number of elements + 1.
            if(this->P_popped_elements > this->Q_popped_elements){ this->score = this->P_popped_elements + 1;} 
            //If the number of elements in Q are greater than the number of elements in P, then it will return the score as being the number of elements + 1.
            else if(this->Q_popped_elements > this->P_popped_elements){ this->score = this->Q_popped_elements + 1; }

            //If the number of elements from both stacks are equal, then we will individually iterate through both stacks.
            else{
                int P_index = 0, Q_index = 0; //These variables will be used to represent the index of each stack.
                this->total_current_sum = 0; //Sets the intial sum to be 0.
                //Iterates through both elements until the current sum is greater than or equal to the current sum.
                while(this->z >= this->total_current_sum){
                    //If the current element in Stack P is greater than the current element in Stack Q, then current_sum will be the current sum plus the value in Stack Q at index Q_index.
                    if(P->getElementAtIndex(P_index) > Q->getElementAtIndex(Q_index)){ 
                        this->total_current_sum += Q->getElementAtIndex(Q_index); 
                        Q_index += 1;
                    }

                    //If the current element in Stack Q is greater than or equal to the current element in Stack P, then the value of current_sum will be the current sum plus the value in Stack P at index P_index.
                    else if(Q->getElementAtIndex(Q_index) >= P->getElementAtIndex(P_index)){
                        this->total_current_sum += P->getElementAtIndex(P_index); 
                        P_index += 1;
                    }

                    //If the current total is greater than or equal to the integer limit that the user input, then we will break out of the while loop.
                    if(this->total_current_sum >= this->z){
                        break;
                    }



                    ++this->score; //Increments the score by 1.
                }
            }

            return(this->score); //Returns the score.

        }
};

//This is the main function
int main(){
    int numberOfAttempts; //The numberOfAttempts variable will ask the user for input about how many attempts they want.
    std::cout << "How many attempts: "; //Prints the message "How many attempts" to the user
    std::cin >> numberOfAttempts; //Asks the user to enter the number of attempts.
    Score *score_calculation;
    for(int i = 0; i < numberOfAttempts; i++){
        std::cout << std::endl << "Input: " << i << std::endl;
        score_calculation = new Score();
        std::cout << std::endl << "Output: " << i;
        std::cout << std::endl << "Score: " << score_calculation->getScore() << std::endl;
    }
    return 0; //returns 0, which means that there was successful termiantion from the program.
}
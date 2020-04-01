//Created By Faraz Naseem..... 110009274..... November 20, 2019.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//This swaps the elements in main_board to randomize the elements.
void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}








int main()
{

    int main_board[9]={1,2,3,4,5,6,7,8,9}; // It defines the main board to store all the values from 1-9
    int missing_array[9]; // This line generates an array of size 9 to keep track of missing values
    int game_board[9]; // It defines an array to form the actual game board with random numbers and hidden values
    int temp_board[9]; // It defines an array which is a copy of the game_board and will be displayed to the user and will be updated in each iteration
    int row_results[3]; // this is an array that stores the results of calculation of each row
    int column_results[3]; // this is an array that stores the results of calculation of each column
    char operators_array[12]; // this is an array that stores random operations
    int i,j; // these variables will be used for loop indexes
    int rand_num,temp1; // rand_num will be used to store the result of random number generations, temp1 will be used as a temporary variable
    int level; // this variable stores the level of difficulty
    char check_game; // this is a flag variable to determine if the user solves the game correctly
    int play_again; // this is a flag variable to determine if the user wants to play again or not
    int missing_count; // this is a variable that keep track of the number of missing values in the game board.
    int operation;
    srand(time(NULL));  // It generates a seed, using current time, for the random generator

    do{
        check_game=1;
        level=0;
        printf("Welcome to Nine-Gaps game!...\n");
	    printf("*****************************\n");
	    printf("      *****************      \n");
	    printf("            *****            \n");
	    printf("              *              \n");

        // get the level of difficulty from the user
        do{
		    puts("Choose the level of difficulty (1-Beginner, 2-Intermediate, 3-Advanced, 4-Expert):");
		    scanf("%d",&level);
		    if ((level < 1) || (level > 4))
			    puts("The entered value is not valid");
		    else{
		        switch (level){
		            case 1:
		                puts("You have chosen the Beginner level");
		                break;
		            case 2:
		                puts("You have chosen the Intermediate level");
		                break;
		            case 3:
		                puts("You have chosen the Advanced level");
		                break;
		            case 4:
		                puts("You have chosen the Expert level");
		                break;
		        }
		        break;
		    }
	    } while (1);


        //////////////////////////////////////////////////

        // 1- generate a random main board by shuffling the main_board      (COMPLETE THIS PART)

        int n = 9;

        // Start from the last element and swap one by one. We don't
        // need to run for the first element that's why i > 0
        for (int a = n-1; a > 0; a--)
        {
            // Pick a random index from 0 to i
            int b = rand() % (a+1);

            // Swap arr[i] with the element at random index
            swap(&main_board[a], &main_board[b]);
        }




        /////////////////////////////////////////////////


        // 2- generate random operators ( + , - , x )      (COMPLETE THIS PART)
        //A random number between 0 and 2 is generated, and it maps to one of the arithmetic operations.
        for(int k = 0; k < 12; k++){
            operation = rand() % 3;
            switch(operation){
                //If the value of operation is 0, then an addition sign is produced.
                case 0:
                    operators_array[k] = '+';
                    break;
                //If the value of the operation is 1, then a multiplication sign is produced.
                case 1:
                    operators_array[k] = '*';
                    break;
                //If the value of the operation is 2, then a substraction sign is produced.
                case 2:
                    operators_array[k] = '-';
                    break;
            }
        }
        /*If the value of the operation is 1, then the arithmetic operation will be addition.
        If the value of the operation is 2, then the arithmetic operation will be subtraction.
        If the value of the operation is 3, then the arithmetic operation will be multiplication.
        */





        for(i = 0; i < 3; i++)
        {
            printf("%d\n", i*3);
            //The inital value of each column sum is set to the first element of each column.
            column_results[i] = main_board[i];
            //The inital value of each row sum is set to the first element of each row.
            row_results[i] = main_board[i];

            //Calculates the sum of each column.
            for(j = 1; j <= 2; j++){
                if(operators_array[i + 3 + (j * 3)] == '+'){
                    column_results[i] = column_results[i] + main_board[i + (j * 3)];
                }
                else if (operators_array[i+3 + (j * 3)] == '-'){
                    column_results[i] = column_results[i] - main_board[i + (j * 3)];
                }
                else{
                     column_results[i] = column_results[i] * main_board[i + (j * 3)];
                }


                //Calculates the sum of each row.
                if(operators_array[j + (i * 3) - (i + 1)] == '+'){
                    row_results[i] = row_results[i] + main_board[j + (i*3)];
                }

                else if (operators_array[j + (i * 3) - (i + 1)] == '-'){
                    row_results[i] = row_results[i] - main_board[j + (i * 3)];
                }
                else{
                    row_results[i] = row_results[i] * main_board[j + (1 * 3)];
                }
            }
        }





        ////////////////////////////////////////////////////////

        // 4- initializing missing array to 0      (COMPLETE THIS PART)

        for (int arr = 0; arr<9; arr++){
            missing_array[arr] = 0;
        }

        ////////////////////////////////////////////////////////


        // 5- copy the main_board into game_board      (COMPLETE THIS PART)
        for(int gb = 0; gb < 9; gb++){
            game_board[gb] = main_board[gb];
        }



        /////////////////////////////////////////////////////////


        // Based on the selected level, 3 or 5 or 7 board values will be hidden.

        i=0; // initializing i to 0

        while (i < level*2+1){
		    int r = rand() % 3;
		    int c = rand() % 3;
		    if (game_board[3*r+c]!='?'){
			    missing_array[game_board[3*r+c]-1]= game_board[3*r+c]; // the hidden values will be added to the set of missing values
		        game_board[3*r+c] = '?';
			    i++;
		    } // end of if
	    } // end of while
	    ////////////////////////////////////////////////////////

        // 6- Copy the game board into a temporary board      (COMPLETE THIS PART)
        for(int tb = 0; tb < 9; tb++){
            temp_board[tb] = game_board[tb];
        }


        ///////////////////////////////////////////////////////

                // the inner loop to get values from the user
        do{

            // Display the game board after each update

            printf("Game Board:\n");
	        printf("---------------------------------------------------\n");
            for (i=0;i<3;i++){
                if (i>0){                   // show the column opertors
                    for (j=0;j<3;j++){
                        printf(" %c\t\t", operators_array[3*(i+1)+ j]);
                    }
                    printf("\n");
                }

                for (j=0;j<3;j++){          // show the rows
                    if (game_board[(i*3)+j]!='?')
                        printf(" %d\t ", temp_board[(i*3)+j]);
                    else if (game_board[(i*3)+j]!=temp_board[(i*3)+j]){
                        printf(" %d?\t ", temp_board[(i*3)+j]);
                    }
                    else
                        printf(" ?\t ");

                    if (j<2)
                        printf(" %c\t", operators_array[(i*2) + j]);
                    else
                        printf("= %d", row_results[i]);       // show the rows results
                }
                printf("\n");
                if (i==2)
                    printf (" =\t\t =\t\t =\n");
            }
            for (i=0;i<3;i++)               // show the columnar results
                printf(" %d\t\t", column_results[i]);
            printf("\n---------------------------------------------------\n");

        ////////////////////////////////////////////////////////

        // 7- Display the missing values and update the missing_count variable      (COMPLETE THIS PART)

        //The inital value of missing count is set to zero.
        missing_count = 0;
        //If the missing array does not have a value of zero at an index, then missing_count is incremented by one.
        for(int arr = 0; arr < 9; arr++){
            if(missing_array[arr] != 0){
                missing_count ++;
                printf("%d\n", missing_array[arr]);
            }
        }

        //The total number of missing numbers is output.
        printf("The missing count is, %d\n", missing_count);









        /////////////////////////////////////////////////////////

            // 8- break if the missing values are empty      (COMPLETE THIS PART)
            if(missing_count == 0){
                break;
            }


	/////////////////////////////////////////////////////

        // Get user's guess (location and value) and check inputs' validity

	        printf("Enter a row number (1-3), column(1-3), value(One of the missing values):\n");
	        int r, c, v;
	        scanf("%d %d %d", &r, &c, &v);
	        if (r==0 || c==0 || v==0)
	            break;

	        if (r < 1 || r > 3 || c < 1 || c > 3){
	            puts("Invalid row and/or column numbers. Try again.");
	            continue;
	        }

	        if (v < 1 || v > 9) {
	            puts("Invalid cell value. Try again.");
	            continue;
	        }

	        if (missing_array[v-1]<1) {
	            puts("This value is already there. Try again.");
	            continue;
	        }

		// 9- if the selected cell is changeable, add the value into the cell and remove it from the missing values, in other case show an error and repeat the inner loop.
		//       (COMPLETE THIS PART)

        //If the user selects a cell that is not changeable then they are asked to try again.
        if(game_board[3*(r - 1) + (c - 1)] != '?'){
            printf("The selected cell is not changeable. Please try again.\n");
            continue;
        }

        //If the user selects a cell that is changeable, then they are allowed to perform an operation.
        if(game_board[3 * (r - 1) + (c - 1)] == '?' && temp_board[3 * (r - 1) + (c - 1)] != '?'){


            temp1 = temp_board[3*(r - 1) + (c - 1)];

            temp_board[3*(r - 1) + (c - 1)] = v;

            missing_array[temp1 -1] = temp1;

            missing_array[v - 1] = 0;
        continue;
        }



        if(game_board[3*(r - 1) + (c - 1)] == '?'){
            temp_board[3*(r - 1) + (c - 1)] = v;
            missing_array[v - 1] = 0;
        }




			//////////////////////////////////////////////////////

        } while (1); // end of the inner loop

		//////////////////////////////////////////////////////////

		// 10- check the results      (COMPLETE THIS PART)


        for(i = 0; i <= 8; i++){
            if(main_board[i] != temp_board[i]){
                check_game = 0;
                break;
            }
        }


		//////////////////////////////////////////////////////

        if (check_game)             // display Wining/Losing Message
            printf ("**** Congratulations!!!****\n ***You Won!!!!*** \n");
        else
            printf (":( Sorry it is not correct :( \n");

        printf("#######################################\n");
        printf ("   Do you want to play again? (Yes:1, No:0)\n"); // ask the user to play again
        printf("#######################################\n");
        scanf ("%d", &play_again);

        if (!play_again){
            printf("Bye!");
            break;
        }
    } while (1); // end of the outer loop
}


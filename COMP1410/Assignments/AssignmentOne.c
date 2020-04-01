//Created By Faraz Naseem..... Student Number:110009274

#include <stdio.h>
#include <stdlib.h>


void InitalizeBoard(int m, int n, char board[][n]); // InitalizeBoard Function prototype
void printBoard(int m, int n, char board[][n]); //printBoard function prototype
void createBoard(int m, int n, char board[][n]); //createBoard function prototype
int IsValidBoard(int m, int n, char board[][n]); // IsValidBoard function prototype
void ListWinningCells(int m, int n, char board[][n]); // ListWinningCells function prototype
char WhoIsTheWinner(int m, int n, char board[][n]); // WhoIsTheWinner Function prototype

//Main function
int main(){
    //The letterInput variable is declared.
    char letterInput;
    static char board[3][3]; // The board of size 3 by 3 is declared.
    InitalizeBoard(3, 3, board); // The function to print the basic board is called.
    do{
        printf("\nPress 'p' or 'P' to print the Tic-Tac Toe Board: ");
        printf("\nPress 'c' or 'C' to create a tic-tac-toe board with some X and O Cells: ");
        printf("\nPress 't' or 'T' to test if a tic-tac-toe board is a valid or invalid board: ");
        printf("\nPress 'w' or 'W' to predict winning cell for Player X or Player O: ");
        printf("\nPress 'e' or 'E' to exit: ");
        //User is prompted for input.
        scanf(" %c", &letterInput);
        if((letterInput == 'e') || (letterInput == 'E')){
            printf("Quitting Game! ");
        }
        else if((letterInput == 'w') || (letterInput == 'W')){
            ListWinningCells(3, 3, board);
        }
        else if((letterInput == 't') || (letterInput == 'T')){
            IsValidBoard(3, 3, board);
        }
        else if((letterInput == 'c') || (letterInput == 'C')){
            createBoard(3, 3, board);
        }
        else if((letterInput == 'p') || (letterInput == 'P')){
            printBoard(3, 3, board);
        }
    }
    while((letterInput != 'e') && (letterInput != 'E') && (WhoIsTheWinner(3, 3, board) != 'X') && (WhoIsTheWinner(3, 3, board) != 'Y'));

}


//InitalizeBoard Function --> Function Number One
void InitalizeBoard(int m, int n, char board[][n]){
	int c = 1;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			board[i][j] = c+'0';
			c++;
		}
	}
}

//printBoard Function --> Function Number Two
void printBoard(int m, int n, char board[][n]){
    for(int i = 0; i <= 2; i ++){
        printf("\n");
        for(int j = 0; j <= 2; j++){
            printf(" %c ", board[i][j]);
            if(j <= 1) printf("|");
        }
        printf("\n___|___|___");
    }



}


char letterInput; //Global character variable known as, letterInput.

//createBoard Function.
void createBoard(int m, int n, char board[][n]){

    int userInput;
    printf("\nPlease enter the number where you would like to enter an X or an O, or press -1 to exit: ");
    scanf("%d", &userInput);


    if(userInput == -1){
        printf("\nQuitting Game!\n");
        return;
    }
    else if((userInput < 1) || (userInput > 9)){
        printf("Please enter valid input: ");
        createBoard(3, 3, board);
    }

    else{
        printf("Please type X or O: ");
        scanf(" %c", &letterInput);

        if((letterInput != 'X') && (letterInput != 'O')){
            printf("\nInvalid Input.\n");
            createBoard(3, 3, board);
        }
        else{
            if(userInput <= 3){
                board[0][userInput - 1] = letterInput;
            }
            else if((userInput > 3) && (userInput <= 6)){
                board[1][userInput - 4] = letterInput;
            }
            else if((userInput > 6) && (userInput <= 9)){
                board[2][userInput - 7] = letterInput;
            }
        }
    }
    char z = WhoIsTheWinner(3, 3, board);
    if((z == 'X') || (z == 'Y')){
        printf("\n%c is the winner.", z);
        return;
    }


}



//The function checks to see if the board is valid.
int IsValidBoard(int m, int n, char board[][n]){
    int xCounter = 0; //xCounter is set to zero.
    int OCounter = 0; //yCounter is set to zero.
    int numCounter = 0; //numCounter is set to zero.
    for(int i = 0; i < n; i++){
        if(board[i][0] == 'X'){
            ++xCounter;
        }
        else if(board[i][0] == 'O'){
            ++OCounter;
        }

    }
    for(int j = 0; j < n; j++){
        if(board[j][1] == 'X'){
            ++xCounter;
        }
        else if(board[j][1] == 'O'){
            ++OCounter;
        }
    }
    for(int k = 0; k < n; k++){
        if(board[k][2] == 'X'){
            ++xCounter;
        }
        else if(board[k][2] == 'O'){
            ++OCounter;
        }
    }

    if((OCounter - xCounter == 0) || (OCounter - xCounter == 1) || (xCounter - OCounter == 0) || (xCounter - OCounter == 1)){
        printf("\nThe board is valid.\n"); //This prints that the board is valid.
        return 1; //1 is returned --> True
    }
    else{
        printf("\nThe board is invalid.\n"); //This prints the board is invalid/
        return 0; // 0 is returned --> False
    }
}

//ListWinningCells Function
void ListWinningCells(int m, int n, char board[][n])
{
    //If the board is valid then this statement is run.
    if(IsValidBoard(3, 3, board) == 1){



        char winningBoard[m][n];

        int winningPositionsX[n*m];
        int winningPositionsCircle[n*m];
        int winningPositionsXCount = 0;
        int winningPositionsCircleCount = 0;

        int xCountRows[3] = { 0 };
        int oCountRows[3] = { 0 };

        int xCountColumns[3] = { 0 };
        int oCountColumns[3] = { 0 };

        int xRDiagonalCount = 0;
        int oRDiagonalCount = 0;

        int xLDiagonalCount = 0;
        int oLDiagonalCount = 0;

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(board[i][j] == 'X')
                {
                    xCountRows[i]++;
                }
                if(board[i][j] == 'O')
                {
                    oCountRows[i]++;
                }
            }
        }

        for(int j = 0; j < 3; j++)
        {
            for(int i = 0; i < 3; i++)
            {
                if(board[i][j] == 'X')
                {
                    xCountColumns[j]++;
                }
                if(board[i][j] == 'O')
                {
                    oCountColumns[j]++;
                }
            }
        }

        for(int k = 0; k < 3; k++){
            if(board[k][k] == 'X'){
                xLDiagonalCount++;
            }
        }


        for(int i = 1; i <= 1; i++){
            if(((board[i][i] == board[i-1][i-1] == 'X') && board[i + 1][i + 1] != 'O') || ((board[i][i] == board[i + 1][i + 1] == 'O') && board[i-1][i-1] == 'X')){
                if(board[i + 1][i + 1] != 'O'){
                    winningPositionsX[9] ++;
                }
                else if(board[i - 1][i - 1] != 'O'){
                    winningPositionsX[1] ++;
                }
            }
            else if(((board[i - 1][i - 1] == board[i + 1][i + 1] == 'X') && board[i][i] != 'O')){
                winningPositionsX[5] ++;
            }

        }


        for(int l = 0; l < 3; l++){
            if(board[l][l] == 'O'){
                oLDiagonalCount++;
            }
        }

        int xRDiagonalPosition = n - 1;
        for(int p = 0; p < 3; p++){
            if(board[p][xRDiagonalPosition] == 'X'){
                xRDiagonalCount++;
                xRDiagonalPosition--;
            }
        }

        int oRDiagonalPosition = n - 1;
        for(int q = 0; q < 3; q++){
            if(board[q][oRDiagonalPosition] == 'O'){
                oRDiagonalCount++;
                oRDiagonalPosition++;
            }
        }

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(board[i][j] != 'X' && board[i][j] != 'O')
                {
                    if(xCountRows[i] == 2 || xCountColumns[j] == 2)
                    {
                        xCountRows[i] = 0;
                        xCountColumns[j] = 0;
                        winningPositionsX[winningPositionsXCount] = (j + i*n + 1);
                        winningPositionsXCount++;
                    }


                    if((i == j) && (xLDiagonalCount >= 2) && ((board[i][j] != 'X') && (board[i][j] != 'O'))){

                        winningPositionsX[winningPositionsXCount] = (j + i*n + 1);
                        winningPositionsXCount ++;
                    }

                    if((i == j) && (oLDiagonalCount >= 2) && ((board[i][j] != 'X') && (board[i][j] != 'O'))){
                        winningPositionsCircle[winningPositionsCircleCount] = (j + i*n + 1);
                        winningPositionsCircleCount ++;
                    }

                    if((i == j) && (oRDiagonalCount >= 2) && ((board[i][j] != 'X') && (board[i][j] == 'O'))){
                        winningPositionsCircle[winningPositionsCircleCount] = (j + i*n + 1);
                        winningPositionsCircleCount ++;
                    }








                    if(oCountRows[i] == 2 || oCountColumns[j] == 2)
                    {
                        oCountRows[i] = 0;
                        oCountColumns[j] = 0;
                        winningPositionsCircle[winningPositionsCircleCount] = (j + i*n + 1);
                        winningPositionsCircleCount++;
                    }
                }
            }

        //This checks the right diagonal to see if there is a winning square for the X.
        if((board[0][2] == 'X') && (board[0][2] == board[1][1]) && (board[2][0] != board[1][1] != 'X') && (board[2][0] != 'O')){
            winningPositionsX[winningPositionsXCount] = 7;
            winningPositionsXCount++;
        }
        if((board[1][1] == 'X') && (board[1][1] == board[2][0]) && (board[0][2] != board[1][1] != 'X') && (board[0][2] != 'O')){
            winningPositionsX[winningPositionsXCount] = 3;
            winningPositionsXCount++;
        }
        if((board[0][2] == 'X') && (board[0][2] == board[2][0]) && (board[0][2] != board[2][0] != 'X') && (board[0][2] != 'O')){
            winningPositionsX[winningPositionsXCount] = 5;
            winningPositionsXCount++;
        }


        //This checks the right diagonal to see if there is a winning square for the circle.
        if((board[0][2] == 'O') && (board[0][2] == board[1][1]) && (board[2][0] != board[1][1] != 'O') && (board[2][0] != 'X')){
            winningPositionsCircle[winningPositionsCircleCount] = 7;
            winningPositionsCircleCount++;
        }
        if((board[1][1] == 'O') && (board[1][1] == board[2][0]) && (board[0][2] != board[1][1] != 'O') && (board[0][2] != 'X')){
            winningPositionsCircle[winningPositionsCircleCount] = 3;
            winningPositionsCircleCount++;
        }
        if((board[0][2] == 'O') && (board[0][2] == board[2][0]) && (board[0][2] != board[2][0] != 'O') && (board[0][2] != 'X')){
            winningPositionsCircle[winningPositionsCircleCount] = 5;
            winningPositionsCircleCount++;
        }

        //If the number of X's in a winning position are greater than 1, then the position of the winning cell is printed.
        if(winningPositionsXCount > 1)
        {
            printf("\nCells ");

            for(int i = 0; i < winningPositionsXCount; i++)
            {
                printf("%d, ", winningPositionsX[i]);
            }

            printf("are the winning cells for Player X.\n");
        }
        else if(winningPositionsXCount > 0)
        {
            printf("\nCell %d is the winning cell for Player X.\n", winningPositionsX[0]);
        }

        //If the number of O's in a winning position are greater than 1, then the position if the winning cell is printed.
        if(winningPositionsCircleCount > 1)
        {
            printf("\nCells ");

            for(int i = 0; i < winningPositionsCircleCount; i++)
            {
                printf("%d, ", winningPositionsCircle[i]);
            }

            printf("are the winning cells for Player O.\n");
        }
        else if(winningPositionsCircleCount > 0)
        {
            printf("\nCell %d is the winning cell for Player O.\n", winningPositionsCircle[0]);
        }

    }
    }

    //If the board is not valid, then a message to the user is printed, telling them that there are no winning cells.
    else{
        printf("No winning cells for player x or o.\n");
    }
}



//IsCellInsideAStreak Function is declared.
char IsCellInsideAStreak(int cellIndex, int m, int n, char board[][n])
{
    int x = (cellIndex - 1) % n;
    int y = (cellIndex - 1) / m;


    for(int i = -1; i <= 1; i++)
    {
        for(int j = -1; j <= 1; j++)
        {
            if(((y + i >= 0) && (x + j >= 0) && (y + i <= n) && (y + i <= m))
            && ((i != 0 || j != 0)))
            {
                /*
                if((i == 1 && j == 1) && (board[i-1][j-1] == board[i + 1][j + 1] == 'X')){
                    return 'X';
                }
                if((i == 1 && j == 1) && (board[i-1][j-1] == board[i+1][j+1] == 'O')){
                    return 'O';
                }
                */
                if((i == 1 && j == 1) && (board[i - 1][j + 1] == board[i + 1][j - 1] == 'X')){
                    return 'X';
                }

                if((i == 1 && j == 1) && (board[i - 1][j + 1] == board[i + 1][j - 1] == 'O')){
                    return 'O';
                }

                if(board[y][x] == 'X' && board[y + i][x + j] == 'X'
                && (((y + i*2 >= 0) && (x + j*2 >= 0) && (y + i*2 <= n) && (x + j*2 <= m))
                && (board[y + i*2][x + j*2] == 'X')
                || (board[y - i][x - j] == 'X') && (y - i >= 0) && (x - j >= 0)))
                {
                    return 'X';
                }
                if(board[y][x] == 'O' && board[y + i][x + j] == 'O'
                && ((y + i*2 >= 0 && x + j*2 >= 0 && y + i*2 <= n && x + j*2 <= m)
                && board[y + i*2][x + j*2] == 'O'
                || (board[y - i][x - j] == 'O') && y - i >= 0 && x - j >= 0))
		        {
		            return 'O';
		        }
            }

        }
    }

    return 'D';
}


//This function determines who the winner is.
char WhoIsTheWinner(int m, int n, char board[][n])
{
    static int cellPosition = 0;

    char localResult = IsCellInsideAStreak(cellPosition, m, n, board);


    if(localResult == 'D' && cellPosition < 9)
    {
        cellPosition++;

        //A Recursive call to the Function is made.
        return WhoIsTheWinner(m, n, board);
    }
    else
    {
        cellPosition = 0;
        return localResult;
    }
}
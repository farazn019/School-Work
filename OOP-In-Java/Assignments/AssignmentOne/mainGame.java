
//This will display the board onto the console.


class mainGame{

    //This class will print the board, as well as give the user options to enter what they will like.
    static void printBoard(){

    }

    public static void main(String[] args) {

        //height and width are variables which will determine the width and the height of the board, depending on what the user inputs.
        int height, width;
        bool clickedFirstSquare = false; //The inital value of clickedFirstSquare is set to false, because when the game first starts the user has yet to click a square.
        board main_board = new board(width, height); //Will decide the height and width of the game board.
        bool properClick = true;
        int numberOfUnClickedSquares = main_board.getWidth() * main_board.getHeight(); //Number of squares on the board will be the width of the board multiplied by the height of the board.

        //The program will keep running as long as the user does not click on a square with a mine on it.
        while (properClick) {
            //This if-statement is to see if the user has clicked the first square in the game board.
            if (clickedFirstSquare == true) {
                squares.setContainsMines(true); //This will scatter the mines
            }
            //This else-if statement is for when the game begins, and the user has yet to click a square on the board.
            else if(clickedFirstSquare == false){
                squares.setMines(false); //There will be no mines on the game board yet.
                clickedFirstSquare = true; //This will set the clickedFirstSquare variable to true, which will result in their being mines in the game board.
            }

        }

    }
}
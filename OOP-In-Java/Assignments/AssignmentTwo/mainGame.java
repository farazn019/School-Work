import java.util.Scanner;

class mainGame{

    //This class will print the board, as well as give the user options to enter what they will like.
    static void printBoard(){

    }

    public static void main(String[] args) {
        //height and width are variables which will determine the width and the height of the board, depending on what the user inputs.
        int height, width, numberOfMines;
        String level; //This variable will hold the level that the user enters.
        boolean clickedFirstSquare = false; //The inital value of clickedFirstSquare is set to false, because when the game first starts the user has yet to click a square.
        boolean properClick = true;
        board main_board;


        //The program will keep running as long as the user does not click on a square with a mine on it.
        System.out.println("***Welcome To The Minesweeper Game***");
        System.out.println("*************************************");
        System.out.println("Enter the board size and number of mines in the form of: Row(4:20) Column(4:20) Mines(1:size-10)");
        Scanner in = new Scanner(System.in);
        width = in.nextInt();
        height = in.nextInt();
        numberOfMines = in.nextInt();
        main_board = new board (height, width);
        main_board.printBoard(); //Prints the inital board
        int numberOfUnClickedSquares = main_board.getWidth() * main_board.getHeight(); //Number of squares on the board will be the width of the board multiplied by the height of the board.

        int x_value, y_value;

        clickedFirstSquare = false;
        while (properClick) {
            //This if-statement is to see if the user has clicked the first square in the game board.
            if (clickedFirstSquare == true) {
                main_board.printBoard();
                x_value = in.nextInt();
                y_value = in.nextInt();
                //Updates the value of the board.
                if (main_board.updateBoard(x_value, y_value) == true){
                    properClick = !properClick;
                    break;
                }
                main_board.printBoard(); //Prints the board
                if((x_value == 0) && (y_value == 0)){
                    properClick = !properClick;
                    System.out.println("You stepped on a mine! Game over!");
                    break;
                }

            }
            //This else-if statement is for when the game begins, and the user has yet to click a square on the board.
            else if(clickedFirstSquare == false){
                System.out.println("\n");
                x_value = in.nextInt();
                y_value = in.nextInt();
                if(main_board.updateBoard(x_value, y_value) == true) { //; //Updates the values of the board.
                    properClick = !properClick;
                    System.out.println("You stepped on a mine! Game over!");
                    break;
                }
                for(int i = 0; i < numberOfMines; i++){
                    main_board.addMines();
                }
                clickedFirstSquare = true; //This will set the clickedFirstSquare variable to true, which will result in their being mines in the game board.
            }

        }

    }
}
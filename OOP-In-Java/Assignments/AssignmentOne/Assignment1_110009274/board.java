
//This class sets the board for the MineSweeper game.
class board{
    private int width;
    private int height;
    private int numberOfSquares;


    //Sets the height and width of the game board.
    board(int theHeight, int theWidth){
        this.width = theWidth;
        this.height = theHeight;
        this.numberOfSquares = this.height * this.width;
    }

    int getWidth(){ return(this.width); } //returns the width of  the board.
    int getHeight(){ return(this.height); } //returns the height of the board.
}

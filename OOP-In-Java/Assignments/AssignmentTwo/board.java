import java.util.ArrayList;
import java.util.Random;
import java.util.Arrays;
import java.lang.String;
//This class sets the board for the MineSweeper game.
class board{
    private int width;
    private int height;
    private int numberOfSquares;
    private boolean firstClick;
    //private boolean firstClickMine;
    boardSquares [][]individualSquares;
    int [][] arrayMine;

    private int x_value_mine, y_value_mine;
    ArrayList <Integer> mineCoordinatesX = new ArrayList<Integer>();
    ArrayList <Integer> mineCoordinatesY = new ArrayList<Integer>();
    Random random = new Random();

    void setWidth(int width){
        this.width = width;
    }
    void setHeight(int height){
        this.height = height;
    }

    //Sets the height and width of the game board.
    board(int theHeight, int theWidth){
        this.width = theWidth;
        this.height = theHeight;
        this.numberOfSquares = this.height * this.width;
        individualSquares = new boardSquares [this.width][this.height];
        this.firstClick = false;
        //this.firstClickMine = false;
        arrayMine = new int [this.width][this.height];
    }

    void addMines(){
        this.x_value_mine = random.nextInt(this.width);
        this.y_value_mine = random.nextInt(this.height);

        if(this.mineCoordinatesX.contains(this.x_value_mine) && this.mineCoordinatesY.contains(this.y_value_mine)){
            while(this.mineCoordinatesX.contains(this.x_value_mine) && this.mineCoordinatesY.contains(this.y_value_mine)){
                this.x_value_mine = random.nextInt(this.width);
                this.y_value_mine = random.nextInt(this.height);
            }
        }
        else{
            this.individualSquares[this.x_value_mine][this.y_value_mine].clickedOnSquare();
            this.individualSquares[this.x_value_mine][this.y_value_mine].setSecondValue(true);
            this.individualSquares[this.x_value_mine][this.y_value_mine].setcontainsMines(true);
            this.individualSquares[this.x_value_mine][this.y_value_mine].secondValue("| M ");
            mineCoordinatesX.add(this.x_value_mine);
            mineCoordinatesY.add(this.y_value_mine);
            System.out.println("\nMine Coordinates: (" + (this.x_value_mine + 1) + "," + (this.y_value_mine + 1) + ")\n");
            if((this.y_value_mine == 0) && (this.x_value_mine == 0)){
                this.arrayMine[0][1] += 1;
                this.arrayMine[1][1] += 1;
                this.arrayMine[1][0] += 1;
            }
            else if((this.y_value_mine == 0) && (this.x_value_mine == this.width - 1)){
                this.arrayMine[this.width -2][0] += 1;
                this.arrayMine[this.width - 2][1] += 1;
                this.arrayMine[this.width - 1][1] += 1;
            }
            else if((this.y_value_mine == this.height - 1) && (this.x_value_mine == 0)){
                this.arrayMine[0][this.height - 2] += 1;
                this.arrayMine[1][this.height - 2] += 1;
                this.arrayMine[1][this.height - 1] += 1;
            }
            else if((this.x_value_mine == this.width - 1) && (this.y_value_mine == this.height - 1)){
                this.arrayMine[this.width - 1][this.height - 2] += 1;
                this.arrayMine[this.width - 2][this.height - 2] += 1;
                this.arrayMine[this.width - 2][this.height - 1] += 1;
            }

            else if(this.x_value_mine == 0){
                    this.arrayMine[this.x_value_mine][this.y_value_mine + 1] += 1;
                    this.arrayMine[this.x_value_mine][this.y_value_mine - 1] += 1;
                    this.arrayMine[this.x_value_mine + 1][this.y_value_mine] += 1;
                    this.arrayMine[this.x_value_mine + 1][this.y_value_mine + 1] += 1;
                    this.arrayMine[this.x_value_mine + 1][this.y_value_mine - 1] += 1;
            }

            else if(this.x_value_mine == this.width - 1){
                    this.arrayMine[this.width - 2][this.y_value_mine] += 1;
                    this.arrayMine[this.width - 2][this.y_value_mine + 1] += 1;
                    this.arrayMine[this.width - 2][this.y_value_mine - 1] += 1;
                    this.arrayMine[this.width - 1][this.y_value_mine + 1] += 1;
                    this.arrayMine[this.width - 1][this.y_value_mine - 1] += 1;
            }

            else if(this.y_value_mine == 0){
                    this.arrayMine[this.x_value_mine - 1][0] += 1;
                    this.arrayMine[this.x_value_mine + 1][0] += 1;
                    this.arrayMine[this.x_value_mine - 1][this.y_value_mine + 1] += 1;
                    this.arrayMine[this.x_value_mine + 1][this.y_value_mine + 1] += 1;
                    this.arrayMine[this.x_value_mine][this.y_value_mine + 1] += 1;
            }

            else if(this.y_value_mine == this.height - 1){
                    this.arrayMine[this.x_value_mine][this.height - 2] += 1;
                    this.arrayMine[this.x_value_mine - 1][this.height - 1] += 1;
                    this.arrayMine[this.x_value_mine + 1][this.height - 1] += 1;
                    this.arrayMine[this.x_value_mine - 1][this.height - 2] += 1;
                    this.arrayMine[this.x_value_mine + 1][this.height - 2] += 1;
            }

            else{
                    this.arrayMine[this.x_value_mine + 1][this.y_value_mine + 1] += 1;
                    this.arrayMine[this.x_value_mine + 1][this.y_value_mine - 1] += 1;
                    this.arrayMine[this.x_value_mine - 1][this.y_value_mine + 1] += 1;
                    this.arrayMine[this.x_value_mine - 1][this.y_value_mine - 1] += 1;
                    this.arrayMine[this.x_value_mine][this.y_value_mine + 1] += 1;
                    this.arrayMine[this.x_value_mine][this.y_value_mine - 1] += 1;
                    this.arrayMine[this.x_value_mine - 1][this.y_value_mine] += 1;
                    this.arrayMine[this.x_value_mine + 1][this.y_value_mine] += 1;
            }

        }
    }

    void copyArrayMineSurrounding(){
        for(int i = 0; i < this.getWidth(); i++){
            for(int j = 0; j < this.getHeight(); j++){
                if(!this.individualSquares[i][j].hasSecondValue()){
                    this.individualSquares[i][j].setSecondValue(true);
                    this.individualSquares[i][j].setContainsInt(true);
                    this.individualSquares[i][j].setcontainsMines(false);
                    this.individualSquares[i][j].secondValue(String.valueOf(this.arrayMine[i][j]));
                }
            }
        }
    }

    void printBoard(){
        System.out.println("\n");
        System.out.printf("     ");
        for(int i = 1; i <= this.getHeight(); i++){
            System.out.printf(i + "   ");
        }
        System.out.printf("\n    ");

        for(int j = 1; j <= this.getHeight(); j++){
            System.out.printf("----");
        }

        if(this.firstClick == false){
            for (int k = 0; k < this.getWidth(); k++) {
                System.out.printf("\n%d  ", k + 1);
                for (int l = 0; l < this.getHeight(); l++) {
                    this.individualSquares[k][l] = new boardSquares();
                    this.individualSquares[k][l].setFirstValue("| ? ");
                    System.out.printf("| ? ");
                }
                System.out.printf("%c", '|');
            }
            this.firstClick = true;
        }

        else if(this.firstClick == true){
            this.copyArrayMineSurrounding();
            for (int k = 0; k < this.getWidth(); k++) {
                System.out.printf("\n%d  ", k + 1);
                for (int l = 0; l < this.getHeight(); l++) {

                    if(this.individualSquares[k][l].hasSecondValue() && this.individualSquares[k][l].getSecondValue().equals("|   ")){
                        System.out.printf(this.individualSquares[k][l].getSecondValue());
                    }
                    else if((this.individualSquares[k][l].hasSecondValue()) && (this.individualSquares[k][l].getSecondValue().equals("| M "))) {
                        System.out.printf(this.individualSquares[k][l].getSecondValue());
                    }
                    else if(!(this.individualSquares[k][l].hasSecondValue())){
                        System.out.printf(this.individualSquares[k][l].getSecondValue());
                    }

                    else{
                        System.out.printf(this.individualSquares[k][l].getSecondValue());
                    }
                }
                System.out.printf("%c", '|');
            }
            System.out.println("\n");
        }
        System.out.println("\n");


        /*for(int i = 0; i < this.getWidth(); i++){
            for(int j = 0; j < this.getHeight(); j++){
                System.out.printf(this.arrayMine[i][j] + " ");
            }
            System.out.println("\n");
        }*/
    }


    boolean updateBoard(int x_value, int y_value){
          if(this.individualSquares[x_value - 1][y_value - 1].getContainsMines() == false){
              this.individualSquares[x_value - 1][y_value - 1].secondValue("|   ");
              this.individualSquares[x_value - 1][y_value - 1].setSecondValue(true);
              return false;
          }
          else{
              return(true);
          }

    }

    int getWidth(){ return(this.width); } //returns the width of  the board.
    int getHeight(){ return(this.height); } //returns the height of the board.
    int getNumberOfSquares(){ return(this.numberOfSquares);} //Returns an integer value for the number of squares
}
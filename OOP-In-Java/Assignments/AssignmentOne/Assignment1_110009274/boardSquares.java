class boardSquares {
    private int timesPressed = 0;
    private boolean containsMine;
    private boolean squareContainsMine;
    private double probabilityMine;

    //squares[board.getWidth()][getHeight()] =

    void setTimesPressed(int pressed)
    {
        this.timesPressed = pressed;
    }
    void setContainsMines(boolean containsMines) { this.containsMine = containsMines; }
    void setSquareContainsMine(boolean mineBool) { this.squareContainsMine = mineBool; }


    //This method will be used to compute the number of squares in the board. It will multiply the width of the board with the height of the board, to give the number of squares that the board contains.
    numberOfSquares(int boardWidth, int boardHeight){

    }


    //This method will be used for computing the probability of a certain square having a mine.
    void setProbabilityOfHavingMine(double probability){
        this.probabilityMine = probability;
    }

    //This method checks to see if the user has clicked on the first square yet or not.
    void clickedOnSquare(){
        //If the user has not clicked on the square yet, then the board does not contains mines.
        if(this.getTimesPressed() == 0);
            this.setContainsMines(false);

        }
        //If the user has clicked on the squares, then the board does contain mines.
        else if(this.getTimesPressed() == 1){
            this.setContainsMines(true);
            getProbabilityOfHavingMine();

    }


    }

    int getTimesPressed()
    {
        return(this.timesPressed);
    } //Returns eitheir 1 or 0 depending on if the user clicked on a board square or not.
    boolean getContainsMines(){ return(this.containsMine); } //Returns if the squares in the board contain mines or not.
    double getProbabilityOfHavingMine() { return(this.probabilityMine); } //Returns the probability of each square having a mine.
}
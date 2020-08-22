import java.lang.String;

class boardSquares {
    private int timesPressed = 0;
    private boolean containsMine = false;
    private boolean boolSecondValue = false;
    private String firstValue, secondvalue;
    private int xValue, yValue;
    private boolean containsInt;


    void setFirstValue(String first_value){ this.firstValue = first_value;}
    void setContainsInt(boolean containsInt){this.containsInt = containsInt;}
    void setcontainsMines(boolean containsMine){ this.containsMine = containsMine;}

    boolean secondValue(String secondvalue){

        if((this.containsMine == false) && /*((this.secondvalue == "1") || (this.secondvalue == "2") || (this.secondvalue == "3") || (this.secondvalue == "4") || (this.secondvalue == "5") || (this.secondvalue == "6") || (this.secondvalue == "7") || (this.secondvalue == "8"))*/(this.containsInt == true)){
            if(this.secondvalue != "0") {
                this.setFirstValue("| ? ");
                this.secondvalue = "| " + secondvalue + " ";
            }
            return true;
        }

        else if(this.containsMine == false){
            this.secondvalue = "|   ";
            return true;
        }

        else if(this.containsMine == true){
            this.secondvalue = "| M ";
            return false;
        }
        return false;
    }
    //This method checks to see if the user has clicked on the first square yet or not.
    void clickedOnSquare(){
        this.timesPressed = 1;
    }

    void setSecondValue(boolean boolSecondValue){ this.boolSecondValue = boolSecondValue;}
    boolean hasSecondValue(){ return(this.boolSecondValue);}
    boolean getContainsMines(){ return(this.containsMine);}
    int getTimesPressed(){ return(this.timesPressed);}
    String getFirstValue(){ return(this.firstValue);}

    String getSecondValue(){
        return (this.secondvalue);
    }

    void printValue(){
        if (this.timesPressed == 0) {
            System.out.printf(this.getFirstValue());
        }

        else if (this.hasSecondValue() == true) {
            System.out.printf(this.getSecondValue());
        }

    }

}
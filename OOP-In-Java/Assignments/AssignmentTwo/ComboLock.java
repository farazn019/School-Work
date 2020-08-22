
//This is the ComboLock class.
class ComboLock{

    private int []secretCodes = new int[3]; //This array will store the secretCodes that are called in the constructor.
    private int currentDial = 0; //The currentDial variable is set to 0.
    private int numberOfDials = 1; //The numberOfDials variable has an inital value of 1.
    boolean []combinations = new boolean[3]; //The combinations array (boolean) has a size of 3.

    //This constructor sets the three secret values to zero.
    ComboLock(int secret1, int secret2, int secret3){
        //The three secret variables are added to the secretCodes array.
        this.secretCodes[0] = secret1;
        this.secretCodes[1] = secret2;
        this.secretCodes[2] = secret3;
    }


    public void reset(){
        this.currentDial = 0;
    } //This function resets the dial to 0.

    //This function will turn the lock to the right.
    public void turnRight(int ticks){
        this.currentDial = Math.abs((ticks + this.currentDial) % 39);
        if((this.numberOfDials == 1) && (this.currentDial == this.secretCodes[0])){
            this.combinations[0] = true;
            this.numberOfDials += 1;
        }
        else if((this.numberOfDials == 1) && (this.currentDial != this.secretCodes[0])){
            this.combinations[0] = false;
            this.numberOfDials += 1;
        }


        if((this.numberOfDials == 3) && (this.currentDial == this.secretCodes[2])){
            this.combinations[2] = true;
            this.numberOfDials += 1;
        }
        else if((this.numberOfDials == 3) && (this.currentDial != this.secretCodes[2])){
            this.combinations[2] = false;
            this.numberOfDials += 1;
        }


    }

    //This function will turn the lock to the left.
    public void turnLeft(int ticksLeft){
        if(ticksLeft != 40) {
            this.currentDial = 40 - (Math.abs((-ticksLeft + this.currentDial) % 39));
        }
        else{
            this.currentDial = (Math.abs((-ticksLeft + this.currentDial) % 39));
        }

        if((this.numberOfDials == 2) && (this.currentDial == this.secretCodes[1])){
            this.combinations[1] = true;
            this.numberOfDials += 1;
        }
        else if((this.numberOfDials == 2) && (this.currentDial != this.secretCodes[1])){
            this.combinations[1] = false;
            this.numberOfDials += 1;
        }

    }


    public boolean open(){
        if((this.combinations[0] == true) && (this.combinations[1] == true) && (this.combinations[2] == true)){
            return(true);
        }
        else{
            return(false);
        }
    }

    public void printBool(){
        for(int i = 0; i < 3; i++){
            System.out.println(this.combinations[i]);
        }
    }


}
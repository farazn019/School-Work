
//Imports the random library.
import java.util.Random;

class microwave{
    int time; //Time button
    int power; //Power button
    int start; //Start button
    int reset; //Reset button
    int stop; //Stop button
    String powerLevel; //This converts the integer power level into a string.
    String currentStatus; //Indicates the current status of the microwave


    //This will set the amount of time that the microwave will cook something for (in seconds).
    void setTime(int seconds){
        this.time = seconds;
    }

    //This will set the power of the microwave (that the user specifies).
    void setPower(int powerAmount){
        this.power = powerAmount;
    }

    void setPowerLevel(String level){
        this.powerLevel = level;
    }

    //This will start the microwave.
    void setStart(){
        Random rand = new Random(); //Creates an instance of the random class which will be used to generate a random integer between 1 and 3(inclusive).
        int random_power = rand.nextInt(3) + 1; //random_power stores and integer value between 1 and 3 inclusive.
        this.setPower(random_power);

        switch(random_power){
            case 1:
                this.setPowerLevel("Low");
                this.start = 1;
                break;
            case 2:
                this.setPowerLevel("Medium");
                this.start = 1;
                break;
            case 3:
                this.setPowerLevel("High");
                this.start = 1;
                break;
            default:
                this.setPowerLevel("Invalid power! The microwave is broken!");
                this.start = 1;
                break;
        }
        //This will only run if the microwave is running at a valid power level.
        if((this.getPower() == 1) || (this.getPower() == 2) || (this.getPower() == 3)) {
            this.setTime(30); //The time is set to 30 seconds.
            this.setPower(random_power); //The power is set to the value stored inside of 'random_power'
            this.setCurrentStatus("The microwave is on and cooking!");
            System.out.println("Cooking for " + this.getTime() + " seconds at level " + this.getPowerLevel()); //Prints the message of how long the food will be cooked for, as well as, at what power level the food will be cooked at.
        }

    }

    //This will reset the microwave.
    void setReset(int resetInteger){

        this.reset = resetInteger;
        this.setTime(0);
        System.out.println("The food has stopped cooking, and the microwave has been reset to " + this.getTime() + " seconds.");
        this.setCurrentStatus("Reset the timer on the microwave. Cooking stopped.");
    }

    //This will stop the microwave.
    void setStop(){
        this.stop = 1;
        this.setCurrentStatus("The microwave has just stopped cooking food.");
        System.out.println("Cooking Stopped.");

    }

    //Sets the status of the microwave.
    void setCurrentStatus(String status){
        this.currentStatus = status;
    }


    int getTime(){ return(this.time); } //returns the time (in seconds) that the user adds to the microwave.
    int getPower(){ return(this.power); } //returns the power 1(low), 2(medium), 3(high) of the microwave.
    int getReset(){ return(this.reset); } //returns if the microwave is reset to 0 (in time) or not.
    int getStop(){ return(this.stop); } //returns if the microwave has stopped or not.
    String getPowerLevel() { return(this.powerLevel); } //returns the power level as a string.
    String getCurrentStatus() { return(this.currentStatus); } //Tells the user the status of the microwave.


}
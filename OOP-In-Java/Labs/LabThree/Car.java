
//This is the car class.
public class Car{

    //All the private variables for the car.
    private String make;
    private String model;
    private int year;
    private double price;
    private boolean isMoving;
    private boolean isOn;
    private int fuelEfficiency;
    private double fuelLevel = 0.0;

    //Constructor method
    Car(String carMake, String carModel, int carYear, int carPrice, int efficiency, double initalFuel){
        this.make = carMake;
        this.model = carModel;
        this.year = carYear;
        this.price = carPrice;
        this.fuelEfficiency = efficiency;
        this.fuelLevel = initalFuel;
    }

    public void turnOn(){
        this.isOn = true;
        if(this.isOn == true){
            System.out.println("Car is now on!");
        }
    }

    public void turnOff(){
        this.isOn = false;
        System.out.println("The car is now off!");
    }


    public void accelerate() {

        //If the car isn't on, then we won't be able to accelerate, and a message will be shown to the user, regarding that.
        if (this.isOn == false) {
            System.out.println("Sorry, car is not on! Now, we are turning on the car");
            turnOn();
        }

        //If the car is indeed on, and has fuel, then we will be able to accelerate our car.
        else if((this.isOn == true) && (this.fuelLevel > 0)){
            System.out.println("Now, we are accelerating! ");
            this.fuelLevel -= 0.2; //We will let the fuel level be subtracted by a constant amount of 0.2 litres, if the user decides to accelerate.
        }

    }


    //This function will decrease the speed of the car.
    public void decelerate(){
        //If the car isn't even on, then a message will be shown to the user that the car isn't on, so we can't decelerate.
        if(this.isOn == false){
            System.out.println("Sorry car is not on! So, it can not decelerate!");
        }
        //If the car is on, then a message will be shown to the user, that the car is decelerating.
        else if(this.isOn == true){
            System.out.println("Decelerating Now!");
        }
    }

    //This will stop the car.
    public void stop(){
        //If the car is on and is moving, then only then can we come to a stop.
        if((this.isOn == true) && (this.isMoving == true)){
            System.out.println("Now, stopping the car! "); //A message will be displayed to the user telling them that we have stopped.
            this.isMoving = false; //The isMoving variable is set to a value of false.
        }

        //If the car is on and we are not moving, then a message will be showed to the user already telling them that the car isn't moving.
        else if((this.isOn == true) && (this.isMoving == false)){
            System.out.println("The car is not moving, but the car is on.");
        }

        //If the car isn't on, and the user wants to come to a stop, then we will tell the user that the car isn't on
        else if(this.isOn == false){
            System.out.println("The car isn't even on.");
        }
    }

    //Tells the user the brand of their car.
    public void getMake(){
        System.out.println("The brand of the car is, " + this.make + '.');
    }

    //Tells the user the specific model of the car's brand.
    public void getModel(){
        System.out.println("The model of the car is, " + this.model + '.');
    }

    //The fuel efficiency of the car is displayed to the user.
    public void getFuelEfficiency() { System.out.println("The fuel efficiency is, " + this.fuelEfficiency + " L/km."); }

    //This function displays the amount of gas in the car's fuel tank.
    public void getGasInTank(){
        System.out.printf("The amount of gas in the gas tank in litres is, %.2f.\n",this.fuelLevel); }

    //This function drives the car.
    public void drive(double distance){
        //If there is no fuel in the car, then a message will be displayed to the user about there being no gas in the car.
        if(this.fuelLevel == 0){
            System.out.println("Sorry, there is no more gas in the tank anymore. The amount of gas left is literally, " + this.fuelLevel + " litres.");
        }
        //If the car does have fuel, then this statement block will run.
        else if(this.fuelLevel > 0){
            //A message will be shown to the user that the car has fuel.
            System.out.println("Great, we have fuel in the car.");
            //If there is enough gas in the car to drive the distance that the user specified then we will drive that distance.
            if((this.fuelEfficiency * distance) > this.fuelLevel){
                System.out.println("Great! We have enough fuel to drive, " + distance + " kilometers.\nNow driving " + distance + " kilometers");
                this.fuelLevel -= (this.fuelEfficiency * distance); //The fuel efficiency multiplied by the distance travelled is subtracted from the fuel level in the car.
                this.isMoving = true;
            }
            //If there is fuel in the car, but we can't drive the distance specified by the user, then this else-statement block will run.
            else{
                System.out.println("We have, " + this.fuelLevel + " litres of fuel. But, we can't drive " + distance + " kilometers.\nThe maximum distance that we can do in kilometers is, " + (this.fuelLevel / this.fuelEfficiency) + '.');
            }

            //This is because it is impossible for a car to have negative fuel.
            if(this.fuelLevel <= 0){
                this.fuelLevel = 0;
            }
        }
    }


    //This function will add gas to the car.
    public void addGas(double fuelAmount){
        //If the user enters a valid amount of fuel to be entered in the car (greater than 0), then we will add that amount.
        if(fuelAmount >= 0) {
            System.out.println("Now adding, " + fuelAmount + " litres of fuel in the car.");
            this.fuelLevel += fuelAmount;
            System.out.println("The car now has, " + this.fuelLevel + " litres of fuel.");
        }
        //If the user enters an invalid amount of fuel, then we will tell the user that it is impossible to add a negative amount of fuel into a car.
        else if(fuelAmount < 0){
            System.out.println("Error! Can not add a negative fuel amount.");
        }
    }

}
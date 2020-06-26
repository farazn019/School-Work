public class CarTester{
    public static void main(String[] args){
        Car myCar = new Car("Honda", "Civic", 2009, 2000, 10, 30.0);


        myCar.turnOn(); //The car will turn on.
        myCar.getMake(); //The brand of the car will be displayed.
        myCar.getModel(); //The model of the car will be displayed.
        myCar.getFuelEfficiency(); //The fuel efficiency of the car will appear on the console.
        myCar.accelerate(); //The car accelerates
        myCar.getGasInTank(); //Gets the amount of gas in the car tank.
        myCar.drive(25); //Drives the car 25 km.
        myCar.stop(); //Stops the car.
        myCar.drive(10); //Drives the car another 10km (but it won't happen, because there isn't enough gas);
        myCar.getGasInTank(); //Gets the gas in the tank (0.0L)
        myCar.addGas(45.0); //A certain amount of gas will be entered into the car.
        myCar.accelerate(); //The car will accelerate.
        myCar.getGasInTank(); //The amount of gas in the car will be displayed to the user.
        myCar.turnOff(); //The car will turn off.
    }
}
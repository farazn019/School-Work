package fmVehicle;

//This is the main class where the car factory and van factory are run.
public class FactoryMethodVehicleMain {
	
	public static void main(String[] args) {
		//A CarFactory object is created
		CarFactory cars = new CarFactory();
		cars.makeVehicle("saloon car"); //This will print out the build for the saloon car.
		cars.makeVehicle("coupe car"); //This will print out the build for a coupe.
		cars.makeVehicle("sport car"); //This will print out the build for a sport car.
		
		//A VanFactory object is created
		VanFactory vans = new VanFactory();
		vans.makeVehicle("box van"); //This will print out the build for a box van.
		vans.makeVehicle("pickup van"); //This will print out the build for a pickup van.
	}
}
package fmVehicle;


//This is the SportCar class which extends from the Vehicle abstract class.
public class SportCar extends Vehicle{

	//SportCar constructor class which lets a user know that a box van is being created.
	SportCar(){
		System.out.println("--------- Making a sport ---------");
	}

	//This method will create the body for the sportCar.
	@Override
	void makeBody() {
		System.out.println("Making body...");
		
	}
	
	//This method will create the chassis for the sportcar.
	@Override
	void makeChassis() {
		System.out.println("Making chassis...");
	}
	
	//This method will create glassware for the sportcar.
	@Override
	void makeGlassware() {
		System.out.println("Making glassware...");
	}

}

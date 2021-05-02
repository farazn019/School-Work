package fmVehicle;

//This is the SaloonCar class which extends from the Vehicle abstract class.
public class SaloonCar extends Vehicle{

	//SaloonCar constructor class which lets a user know that a box van is being created.
	SaloonCar(){
		System.out.println("--------- Making a saloon ---------");
	}

	//This method will create the body for the salooncar.
	@Override
	void makeBody() {
		System.out.println("Making body...");
	}

	//This method will create the chassis for the salooncar.
	@Override
	void makeChassis() {
		System.out.println("Making chassis...");
	}

	//This method will create glassware for the salooncar.
	@Override
	void makeGlassware() {
		System.out.println("Making glassware...");
	}

}

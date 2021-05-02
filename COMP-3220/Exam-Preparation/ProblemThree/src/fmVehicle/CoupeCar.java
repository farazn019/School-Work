package fmVehicle;

//This is the CoupeCar class which extends from the Vehicle abstract class.
public class CoupeCar extends Vehicle{

	//CoupeCar constructor class which lets a user know that a box van is being created.
	CoupeCar(){
		System.out.println("--------- Making a coupe---------");
	}
	
	//This method will create the body for the coupecar.
	@Override
	void makeBody() {
		System.out.println("Making body...");
		
	}

	//This method will create the chassis for the coupecar.
	@Override
	void makeChassis() {
		System.out.println("Making chassis...");
	}

	//This method will create glassware for the coupecar.
	@Override
	void makeGlassware() {
		System.out.println("Making glassware...");
	}

}

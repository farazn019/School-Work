package fmVehicle;

//This is the PickUpVan class which extends from the Vehicle abstract class.
public class PickUpVan extends Vehicle{
	
	//PickUpVan constructor class which lets a user know that a box van is being created.
	PickUpVan(){
		System.out.println("--------- Making a pickup---------");
	}
	
	//This method will create the body for the pickupvan.
	@Override
	void makeBody() {
		System.out.println("Making body...");
		
	}
	
	//This method will create the chassis for the pickupvan.
	@Override
	void makeChassis() {
		System.out.println("Making chassis...");
	}

	//This method will create glassware for the pickupvan.
	@Override
	void makeGlassware() {
		System.out.println("Making glassware...");
	}

}

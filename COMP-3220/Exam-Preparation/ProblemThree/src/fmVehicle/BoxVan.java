package fmVehicle;

//This is the BoxVan class which extends from the Vehicle abstract class.
public class BoxVan extends Vehicle{
	
	//BoxVan constructor class which lets a user know that a box van is being created.
	BoxVan(){
		System.out.println("--------- Making a boxvan---------");
	}
	
	//This method will create the body for the boxvan.
	@Override
	void makeBody() {
		System.out.println("Making body...");
		
	}

	//This method will create the chassis for the boxvan.
	@Override
	void makeChassis() {
		System.out.println("Making chassis...");
	}

	//This method will create glassware for the boxvan.
	@Override
	void makeGlassware() {
		System.out.println("Making glassware...");
	}

}

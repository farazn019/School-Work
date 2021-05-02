package fmVehicle;

//This is the VanFactory which creates factory objects for the various vans.
public class VanFactory extends VehicleFactory{

	//The makeVehicle method returns a vehicle (van-type specifically)
	@Override
	Vehicle makeVehicle(String vehicleType) {
		//If it is a pickup van then it will create a PickUpVan Object.
		if(vehicleType.equalsIgnoreCase("pickup van")){
			 PickUpVan pickupVan= new PickUpVan();
			 pickupVan.makeBody(); 
			 pickupVan.makeChassis(); 
			 pickupVan.makeGlassware(); 
			 return pickupVan;
		}
		//If it is a box van then it will create a BoxVan Object.
		else if(vehicleType.equalsIgnoreCase("box van")){ 
			BoxVan boxVan = new BoxVan();  
			boxVan.makeBody(); 
			boxVan.makeChassis();
			boxVan.makeGlassware();
			return boxVan;
		}
		//If there is any other option an error is printed and null is returned.
		else{ 
			System.out.println("Error: ");
			return null;
		} 
	} 
}

package fmVehicle;

public abstract class VehicleFactory {
	
	Vehicle orderVehicle(String vehicleType) {
		return makeVehicle(vehicleType);
		
	}
	
	abstract Vehicle makeVehicle(String vehicleType);

}

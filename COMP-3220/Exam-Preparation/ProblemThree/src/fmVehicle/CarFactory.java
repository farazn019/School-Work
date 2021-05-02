package fmVehicle;

//This is the CarFactory which creates factory objects for the various cars.
public class CarFactory extends VehicleFactory{

	//The makeVehicle method returns a vehicle (car-type specifically)
	@Override
	Vehicle makeVehicle(String vehicleType) {
		//If it is a sport car then it will create a SportCar Object.
		if(vehicleType.equalsIgnoreCase("sport car")){ 
			SportCar sportsCar = new SportCar(); 
			sportsCar.makeBody(); 
			sportsCar.makeChassis(); 
			sportsCar.makeGlassware();
			return (sportsCar);
		}
		//If it is a coupe car then it will create a CoupeCar Object.
		else if(vehicleType.equalsIgnoreCase("coupe car")){
			CoupeCar coupeCar = new CoupeCar();
			coupeCar.makeBody(); 
			coupeCar.makeChassis();
			coupeCar.makeGlassware(); 
			return (coupeCar);
		}
		//If it is a saloon car then it will create a SaloonCar Object.
		else if(vehicleType.equalsIgnoreCase("saloon car")){
			SaloonCar saloonCar = new SaloonCar();
			saloonCar.makeBody();
			saloonCar.makeChassis(); 
			saloonCar.makeGlassware(); 
			return (saloonCar);
		}
		//If there is any other option an error is printed and null is returned.
		else{
			System.out.println("Error: ");
			return null;
		}
	}

}

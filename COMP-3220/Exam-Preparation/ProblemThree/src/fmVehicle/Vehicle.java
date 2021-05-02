package fmVehicle;

//This is the Vehicle abstract class.
public abstract class Vehicle {
	protected String name;
	
	//The getName method is of type String and returns the name variable which is of type String.
	String getName() {
		return name;
	}
	
	//The three abstract methods below make the body, chassis, and glassware.
	abstract void makeBody();
	abstract void makeChassis();
	abstract void makeGlassware();	
	
}

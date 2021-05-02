package goodsmell;


//This is the MajorFactory where we will determine what the majors for different students are.
public class MajorFactory {
	
	//A static MajorType method, which will determine what the majors are of different students. Takes a string major as input.
	static MajorType createMajorObject(String major) {
		//If the major is Computer Science it will create a new ComputerScienceMajor object.
		if(major.equals("Computer Science")) {
			return new ComputerScienceMajor();
		}
		//Else If the major is Electrical Engineering it will create a new ElectricalEngineeringMajor object.
		else if(major.equals("Electrical Engineering")) {
			return new ElectricalEngineeringMajor();
		}
		//Lastly, if the major is French it will create a new FrenchMajor object.
		else {
			return new FrenchMajor();
		}
	}

}

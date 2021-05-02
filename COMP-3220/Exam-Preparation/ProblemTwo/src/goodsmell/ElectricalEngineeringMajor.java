package goodsmell;

//This class contains the code for Electrical Engineering majors.
public class ElectricalEngineeringMajor extends MajorType{

	//computes fees for Electrical Engineering majors. 
	@Override
	double computeTuitionFees() {
		// TODO Auto-generated method stub
		return 3850.00;
	}

	//This states the degree to be granted for EE majors.
	@Override
	String degreeToBeGranted() {
		// TODO Auto-generated method stub
		return "B. A. Sc. (Honours)";
	}

}

package goodsmell;

//This class contains the code for French majors.
public class FrenchMajor extends MajorType{

	//Computes fees for French majors.
	@Override
	double computeTuitionFees() {
		// TODO Auto-generated method stub
		return 2570.00;
	}

	//This states the degree to be granted for French majors.
	@Override
	String degreeToBeGranted() {
		// TODO Auto-generated method stub
		return "B. A. (Honours)";
	}
	

}

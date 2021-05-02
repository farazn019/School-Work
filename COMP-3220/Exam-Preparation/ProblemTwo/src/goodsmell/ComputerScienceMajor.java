package goodsmell;

//This class contains code for Computer Science majors.
public class ComputerScienceMajor extends MajorType{

	//Computes fees for CS students
	@Override
	double computeTuitionFees() {
		// TODO Auto-generated method stub
		return 3150.00;
	}

	//This states the degree to be granted for CS majors.
	@Override
	String degreeToBeGranted() {
		// TODO Auto-generated method stub
		return "B.C.S. (Honours)";
	}
		

}

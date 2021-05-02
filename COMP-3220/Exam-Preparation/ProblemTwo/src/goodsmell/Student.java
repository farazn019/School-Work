package goodsmell;

public class Student {
	private String studentNumber;
	private String studentName;
	private MajorType majorObject;
	
	private String major;
	
	
	//This is the constructor.
	public Student(String studentNumber, String studentName, String major) {
		this.studentName = studentName;
		this.studentNumber = studentNumber;
		this.major = major;
		MajorFactory.createMajorObject(this.major);
	}

	//This method is of type double and retuns the fees that a student has to pay.
	public double computeTuitionFees(){
		MajorType majorType = MajorFactory.createMajorObject(this.major);
		return majorType.computeTuitionFees();
	}

	//This method is of type String and returns the degree to be granted.
	public String degreeToBeGranted(){
		MajorType majorType = MajorFactory.createMajorObject(this.major);
		return majorType.degreeToBeGranted();
	}

	//This method changes the major of a student.
	public void changeMajor(String newMajor){
		major = newMajor;
	}

	//This method is of type String and returns the student name, the degree to be granted, and the fees that a student will have to pay.
	public String toString(){
		return studentName + " is pursuing " + degreeToBeGranted() + " degree; pays $" + computeTuitionFees();
	}
}

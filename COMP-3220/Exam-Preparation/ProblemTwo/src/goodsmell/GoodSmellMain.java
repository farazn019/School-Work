package goodsmell;

//This is the GoodSmellMain class, which will be used to test the good code.
public class GoodSmellMain {

	public static void main(String[] args) {
		//The first student is created, and the methods are run.
		Student s1 = new Student("1234", "Mary Dobbs", "French");
        System.out.println(s1);
        //Changes major to Computer Science.
        s1.changeMajor("Computer Science");
        System.out.println(s1);
        
        //The second student is created and the methods are run.
        Student s2 = new Student("4568", "Tom Brew", "Computer Science");
        System.out.println(s2);
        //Changes major to Electrical Engineering.
        s2.changeMajor("Electrical Engineering");
        System.out.println(s2);
	}
}
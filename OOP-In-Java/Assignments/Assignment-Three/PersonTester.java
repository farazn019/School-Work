import java.util.Scanner;
import java.io.File;
import java.io.FileWriter;
import java.util.Collections;
import java.io.PrintWriter;
import java.lang.Object;

public class PersonTester {
    public static void main (String[] args){
        Scanner in = new Scanner(System.in);
        String name = "";
        Person people[] = new Person[10];

        for(int i = 1; i <= 10; i++){
            System.out.println("Please enter the name of person number: " + i);
            name = in.nextLine();
            Person newPerson = new Person(name);
            people[i - 1] = newPerson;
        }
        
        Person firstPerson = people[0].determineFirstPerson(people, people.length);
        Person lastPerson = people[0].determineLastPerson(people, people.length);
        people[0].sort(people,people.length);
        String printNames = people[0].printNames(people);

        try{
            //I stored the result into a file.
            File personFile = new File("PersonInformation.txt");
            PrintWriter outputPerson = new PrintWriter(personFile.getPath());
            outputPerson.write("The first person in the people array is: ");
            outputPerson.println(firstPerson);

            outputPerson.write("The last person in the people array is: ");
            outputPerson.println(lastPerson);

            outputPerson.write("The sorted names in the array are: ");
            outputPerson.println(printNames);

            outputPerson.close();
        }
        catch(Exception exc){
            System.out.println("File not found!");
        }

    }    
}
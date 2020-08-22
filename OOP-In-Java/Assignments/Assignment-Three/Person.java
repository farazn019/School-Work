import java.lang.Comparable;
import java.util.Collections;
import java.lang.String;

public class Person implements Comparable<Person>{
    private String name;

    //Person constructor to ask the user for the name of the person.
    Person(String name){this.name = name;}

    //Implements the compareTo method for class overloading the Comparable Interface.
    public int compareTo (Person otherPerson){ return(this.name.compareTo(otherPerson.name));}


    //Determines the first person in the people's array.
    Person determineFirstPerson(Person [] people, int size){
        Person firstPerson;
        firstPerson = people[0];
        for(int i = 1; i < size; i++){
            if(firstPerson.name.compareTo(people[i].name) > 0){
                firstPerson = people[i];
            }
        }
        System.out.println("The first person is, " + firstPerson.name);
        return(firstPerson);
    }

    //Determines the last person in the people's array.
    Person determineLastPerson(Person[] people, int size){
        Person lastPerson;
        lastPerson = people[0];
        int current_index = 0;
        for(int i = 1; i < size; i++){
            if(lastPerson.name.compareTo(people[i].name) < 0){
                lastPerson = people[i];
            }
        }
        System.out.println("The last person is, " + lastPerson.name);
        return(lastPerson);
    }

    //This will apply the bubble sort function to the people array, and sort them by name,
    void sort(Person people[], int size){
        Person tempPerson;
        for(int i = people.length - 1; i > 0; i--){
            for(int j = 0; j < i; j++){
                if(people[j].compareTo(people[j + 1]) > 0){
                    tempPerson = people[j];
                    people[j] = people[j + 1];
                    people[j  +1] = tempPerson;
                }
            }
        }
    }

    //Prints all the names of the people that are passed in as a parameter.
    String printNames(Person people[]){
        System.out.println("The sorted version of the Person's array is: ");
        String peopleString = "";
        for(Person current: people){ 
            System.out.println(current.name);
            peopleString = peopleString +  current.name + ", ";
        }
        return(peopleString);
    }

    //Converts the object to a string.
    public String toString(){return(this.name);}


}
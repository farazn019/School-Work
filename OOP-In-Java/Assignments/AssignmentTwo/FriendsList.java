

//Import the arraylist and collections class
import java.util.ArrayList;
import java.util.Collections;

//This is the FriendsList class.
class FriendsList{
    ArrayList <Person> listOfFriends = new ArrayList<Person>(); //Makes an arraylist to store a list of friends.

    ArrayList <String> listOfLastNames = new ArrayList<String>(); //Makes an arraylist to store a string of last names.
    ArrayList <Person> sortedListOfFriends = new ArrayList<Person>(); //Makes an arraylist of type Person to store the sortedListOfFriends (by last name).

    ArrayList <String> datesOfBirth = new ArrayList <String>(); //Makes an arraylist of type string to store dates of birth.
    ArrayList <Person> sortedDOB = new ArrayList<Person>(); //Makes an arraylist of type Person to store the sorted dates of birth.

    ArrayList <String> day = new ArrayList <String>(); //Makes an arraylist of type string to store days.
    ArrayList <String> sortedBornInDay = new ArrayList <String>(); //Makes an arraylist of type string to store the sorted born in days.

    private boolean foundFriend = false; //The foundfriend variable is a boolean with an inital value of false.

    //This function adds a friend.
    void addFriend(String firstName, String lastName, String DOB, long number){
        Person P = new Person();
        P.setFirstName(firstName);
        P.setLastName(lastName);
        P.setBirthDay(DOB);
        P.setNumber(number);
        listOfFriends.add(P);
    }

    //This function deletes a friend.
    void deleteFriend(String firstName, String lastName){
        foundFriend = false;
        //The for-loop iterates through the list of friends until the person with the specified first-name or last-name is found.
        for(int i = 0; i < listOfFriends.size(); i++){
            if((listOfFriends.get(i).getFirstName() == firstName) || (listOfFriends.get(i).getLastName() == lastName)){
                listOfFriends.remove(i); //deletes the person from the list of friends if the person is found
                foundFriend = true; //sets foundFriend to true.
            }
        }
        //If the foundFriend variable is set to false, then it will tell the user that the person could not be found.
        if(foundFriend == false){
            System.out.println("We did not find, " + firstName + " " + lastName + " in your friends list.");
        }
    }

    //This function modifies an existing friend.
    void modifyFriend(String firstName, String lastName, String DOB, long number){
        foundFriend = false; //Sets the foundFriend variable to false.
        //The for-loop iterates through the list of friends until the person is found or reaches the end of the arraylist.
        for(int i = 0; i < listOfFriends.size(); i++){
            if((listOfFriends.get(i).getFirstName() == firstName) && (listOfFriends.get(i).getLastName() == lastName)){
                listOfFriends.get(i).setBirthDay(DOB); //Changes the Date Of Birth of a person.
                listOfFriends.get(i).setNumber(number); //Changes the number of the person.
                foundFriend = true; //Sets the foundFriend variable to true.
            }
        }
        //If foundFriend is set to false, then a message will be printed to the user telling the user that the person is not in the arraylist.
        if(foundFriend == false){
            System.out.println("We did not find, " + firstName + " " + lastName + ". So, there is nothing to modify.");
        }
    }


    //Change this to type person later, if you still have to.
    void sortedNames(){
        for(int i = 0; i < listOfFriends.size(); i++){
            this.listOfLastNames.add(this.listOfFriends.get(i).getLastName());
        }
        Collections.sort(listOfLastNames);
        int j = 0;
        for(int i = 0; i < this.listOfLastNames.size(); i++){
            while(this.listOfLastNames.get(i) != this.listOfFriends.get(j).getLastName()){
                ++j;
            }
            this.sortedListOfFriends.add(i, this.listOfFriends.get(j));
            j = 0;
        }

    }

    //This function prints all the friends in the arrayList.
    void printAllFriends(){
        for(Person this_person: listOfFriends){
            System.out.println(this_person.toString()); //Prints the person's information.
        }
    }

    //Prints the name of the people, which are sorted by names.
    void printSortedFriends(){
        System.out.println("Your list of friends with sorted last names are: ");
        for(Person this_person: sortedListOfFriends){
            System.out.println(this_person.toString()); //Prints the name of the person.
        }
    }

    //This function prints the number of a person.
    void printFriendWithNumber(String firstName, String lastName){
        foundFriend = false;
        for(Person currentPerson: listOfFriends){
            if((currentPerson.getFirstName() == firstName)&&(currentPerson.getLastName() == lastName)){
                System.out.println("The number of, " + firstName + " " + lastName + " is, " + currentPerson.getNumber());
                foundFriend = true;
            }
        }
    }

    //This function prints the name of people, who were born in a certain month.
    void printNamesBirthday(String month){
        for(int i = 0; i < this.listOfFriends.size(); i++){
            if(this.listOfFriends.get(i).getBirthDay().substring(0, 2).equals(month)){
                this.datesOfBirth.add(this.listOfFriends.get(i).getBirthDay().substring(3, 5));
            }
        }

        Collections.sort(this.datesOfBirth);

        int k = 0;
        for(int j = 0; j < this.datesOfBirth.size(); j++){
            while(!(this.datesOfBirth.get(j).equals(this.listOfFriends.get(k).getBirthDay().substring(3, 5)))){
                ++k;
            }
            this.sortedDOB.add(j, this.listOfFriends.get(k));
            k = 0;
        }

        for(String DOB: this.datesOfBirth){
            System.out.println(DOB);
        }

        for(Person sortedDOBPerson: this.sortedDOB){
            System.out.println(sortedDOBPerson.toString());
        }
    }

    //This function prints the number of a person.
    void printCellNumbers(String firstName, String lastName){
        //Iterates through the listOfFriends arraylist until the person with the name is found
        for(Person this_person: this.listOfFriends){
            if(this_person.getFirstName().equals(firstName) && this_person.getLastName().equals(lastName)){
                System.out.println(this_person.getNumber()); //Prints the number of the person.
            }
        }
    }

    //Prints the friends born on a certain day.
    void printFriendsBornInGivenDay(String day){
        //Iterates through the list of friends until the end of the list is reached, or the person(s) who were born on a specific day are found.
        for(int i = 0; i < this.listOfFriends.size(); i++){
            if(this.listOfFriends.get(i).getBirthDay().substring(3, 5).equals(day)){
                this.day.add(this.listOfFriends.get(i).getBirthDay().substring(3, 5)); //Adds the person with the specific day they were born in, into the "day" arrayList.
            }
        }

        int m = 0;
        for(int j = 0; j < this.day.size(); j++){
            while(!this.day.get(j).equals(this.listOfFriends.get(m).getBirthDay().substring(3, 5))){
                ++m;
            }
            this.sortedBornInDay.add(j, (this.listOfFriends.get(m).getFirstName() + " " + this.listOfFriends.get(m).getLastName()));
            m += 1;
        }

        //Sorts the sorted names that were born on a specific day.
        Collections.sort(this.sortedBornInDay);
        for(String this_person: this.sortedBornInDay){
            System.out.println(this_person); //Prints the name of the person.
        }

    }

    int numberOfFriends(){
        return(listOfFriends.size());
    } //Returns the number of freinds.



}

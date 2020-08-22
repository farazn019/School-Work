

//This is the class person.
class Person{
    //Private variables of type string.
    private String firstName, lastName, birthDay;
    private long number; //Private variable of type long.

    //Setter methods.
    void setFirstName(String firstName){this.firstName = firstName;}
    void setLastName(String lastName){this.lastName = lastName;}
    void setBirthDay(String birthDay){this.birthDay = birthDay;}
    void setNumber(long number){this.number = number;}

    //Getter methods.
    String getFirstName(){return this.firstName;}
    String getLastName(){return this.lastName;}
    String getBirthDay(){return this.birthDay;}
    long getNumber(){return this.number;}

    //This is the toString method that converts the information of a person, to a string.
    public String toString(){
        return("First Name: " + getFirstName() + "\nLast Name: " + getLastName() + "\nBirthday: " + getBirthDay() + "\nNumber: " + getNumber());
    }
}
import java.lang.Math;
import java.util.Random;

class Person{
    private int age;
    private boolean isHungry;
    private boolean isTired;
    private boolean isSleeping;
    private boolean hasFriend = false;
    private double distanceWalked = 0.0;
    private double walkingLimit;
    Random rand = new Random();
    private int foodOptionInt = rand.nextInt(5);
    private int daysSlept = 0;
    private int hoursSleptTonight;
    private String[] foodOptions = {"Pasta", "Sandwich", "Mac N' Cheese", "Pizza", "Burger"};
    private String foodOption;
    private String friend;
    private String name;

    //A constructor for the person class, when a new object is created. In this constructor, the age of the person must be specified as an integer value.
    Person(int personAge, String personName) {
        this.age = personAge;
        this.name = personName;
    }

    void sleep(boolean sleeping){
        this.isSleeping = sleeping;
        if(this.isSleeping == true){
            this.isTired = false;
            this.distanceWalked = 0;
            awake();
        }
    }

    void awake(){
        hoursSleptTonight = rand.nextInt(5) + 5; //The hours that a person sleeps every night can be between 5 hours and 9 hours.
        System.out.println("Wow, tonight we slept for, " + this.hoursSleptTonight + " hours.");
        if(this.daysSlept == 3){
            this.daysSlept = 0;
            this.isSleeping = false;
            grow();
        }

        if(this.isSleeping == true){
            this.isSleeping = false; //The person is not sleeping anymore, so the person is now awake.
            this.daysSlept += 1;

        }
    }

    //This function will make a person grow by 1 year.
    void grow(){ this.age += 1;}


    //This function will determine if the person is hungry or not.
    void needFood(boolean hunger){ this.isHungry = hunger;}

    void talk(String message){
        if(this.getAge() >= 2){ System.out.println(message); }
    }

    void eat(){
        if(this.getNeedFood() == true){
            foodOption = foodOptions[foodOptionInt];
            System.out.println("We are hungry right now, so we are going to eat, " + foodOption + '.');
        }
    }

    void walk(double distance){

        if((this.getAge() >= 55) && (this.isSleeping == false) && (this.distanceWalked < 4.0)){
            this.walkingLimit = (Math.pow(0.5, ((this.getAge() - 50) / 5)) * 4.0);
            this.distanceWalked += distance;
            if(this.distanceWalked >= this.walkingLimit);
            this.isTired = true;
        }

        else if((this.isSleeping == false) && (this.distanceWalked < 4.0)) {
            this.walkingLimit = 4.0;
            this.distanceWalked += distance;
            if (this.distanceWalked >= this.walkingLimit) {
                this.isTired = true;
            }
        }

        if(this.isTired == true){
            System.out.println("The person can not walk anymore, because they have achieved their daily walking limit of " + this.walkingLimit + " kilometers.\nConsider resting/sleeping so the person can walk again tomorrow.");
        }
    }

    void addFriend(String name){
        if(this.hasFriend == false){
            this.hasFriend = true;
            this.friend = name;
        }
        else if(this.hasFriend == true){ System.out.println("You already have a friend. Consider, changing your friend."); }
    }

    void changeFriend(String nameOfFriend){
        if(this.hasFriend == true) { this.friend = nameOfFriend; }
        else if(this.hasFriend == false){ System.out.println("You have no friends, please consider adding a new friend."); }
    }

    int getAge(){ return(this.age); } //Returns the age of the user
    boolean getNeedFood() { return(this.isHungry); } //Returns if the user is hungry or not
    boolean tiredStatus() { return(this.isTired); } //Returns how tired the person is.
    String getFriend() { return(this.friend); } //Returns the friend of the person.
    String getName() { return(this.name); } //Returns the name of the person.
}
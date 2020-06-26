

class TestPerson{

    public static void main(String[] args){
        //The methods from the Person class are all invoked on the object named "new_person" here.
        Person new_person = new Person(18, "Faraz");
        System.out.println("The person's name is, " + new_person.getName());
        System.out.println("The person's age is, " + new_person.getAge());
        new_person.addFriend("Friend1");
        new_person.walk(3.1);
        new_person.talk("Wow, I walked quite a bit! But I still think I can walk some more. I am very hungry right now.");
        new_person.needFood(true);
        new_person.eat();
        new_person.walk(1.1);
        new_person.sleep(true);
        new_person.getFriend();
        new_person.talk("Hey, let's walk 4 kilometers today with our good friend, " + new_person.getFriend());
        new_person.walk(4);
        new_person.needFood(true);
        new_person.eat();
        new_person.sleep(true);
        new_person.talk("You know what, I don't feel like walking today, so I guess today we are just gonna do our Computer Science homework.");
        new_person.talk("Wow, 12 hours have already passed, and I am super hungry.");
        new_person.needFood(true);
        new_person.eat();
        new_person.sleep(true);
        new_person.talk("At the moment, our friend, " + new_person.getFriend() + " is busy.\nSo, we are gonna have to get a new friend.");
        new_person.changeFriend("Chris");
        System.out.println("Our new friend's name is, " + new_person.getFriend());
        new_person.needFood(true);
        new_person.eat();
        new_person.sleep(true);
        System.out.println("Currently, " + new_person.getName() + "'s age is, " + new_person.getAge() + " years old.");

        System.out.println("\n\n\n"); //This statement is used to seperate the first person from the second person.

        //The methods from the Person class are all invoked on the object named "second_person" here.
        Person second_person = new Person(55, "Dillon");
        System.out.println("The person's name is, " + second_person.getName());
        System.out.println("The person's age is, " + second_person.getAge());
        second_person.addFriend("Bob");
        second_person.walk(1.0);
        second_person.talk("I walked half of my total distance of 4.0 km today.");
        second_person.walk(1.0);
        second_person.needFood(true);
        second_person.eat();
        second_person.sleep(true);
        second_person.getFriend();
        second_person.talk("Hey, let's walk 2 kilometers today with our good friend, " + second_person.getFriend());
        second_person.walk(2);
        second_person.needFood(true);
        second_person.eat();
        second_person.sleep(true);
        second_person.talk("You know what, I don't feel like walking today, because I woke up really sore from yesterday.");
        second_person.talk("Wow, I was watching TV for the whole day and I didn't even notice.");
        second_person.needFood(true);
        second_person.eat();
        second_person.sleep(true);
        second_person.talk("Oh looks like, " + second_person.getFriend() + " is sick today.\nSo, we are gonna have to get a new friend.");
        second_person.changeFriend("Chris");
        System.out.println("Our new friend's name is, " + second_person.getFriend());
        second_person.needFood(true);
        second_person.eat();
        second_person.sleep(true);
        System.out.println("Currently, " + second_person.getName() + "'s age is, " + second_person.getAge() + " years old.");
        second_person.talk("We just turned " + second_person.getAge() + " years old. Let's see if we can still walk 2km.");
        second_person.walk(2);



    }
}
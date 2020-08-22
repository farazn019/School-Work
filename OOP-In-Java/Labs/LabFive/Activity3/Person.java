import java.util.ArrayList;
import java.util.Scanner;

class Person {
    private String name;
    private String friendNames = "";
    String newName;
    private int numberOfFriends = 0;
    private int numberOfSpaces = 0;

    Scanner in = new Scanner(System.in);

    ArrayList <String> friends = new ArrayList<String>();

    Person(String var1) {
        this.name = var1;
    }

    void beFriend(Person var1) {
        friends.add(var1.name);
        ++this.numberOfSpaces;
    }

    int getFriendsCount() {
        this.numberOfFriends = this.numberOfSpaces;
        return this.numberOfFriends;
    }

    void unFriend(Person var1) {
        boolean var2 = this.friendNames.contains(var1.name);
        if (var2) {
            var1.name = var1.name + " ";
            this.friendNames.replaceFirst(var1.name, "");
            --this.numberOfFriends;
        }

    }

    void getFriendsNamesAtIndex(int printingIndex) {
        System.out.println(friends.get(printingIndex));
    }

    void setNewName(int index){
        if(index > this.getFriendsCount()){
            System.out.println("The number that you have entered is outside of the range of the maximum number of friends that you have.");
        }
        else{
            System.out.println("Please enter the name of your new friend: ");
            newName = in.nextLine();
            friends.set(index, newName);
        }

    }

    String getName() {
        return this.name;
    }

    void printAllNames(){
        System.out.println("A list of all your friends names are: ");
        for(String friend:friends){
            System.out.println(friend);
        }
    }
}
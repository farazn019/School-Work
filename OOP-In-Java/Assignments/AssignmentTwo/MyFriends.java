
//This is the MyFriends class.
class MyFriends{
    //The main method
    public static void main(String[] args){
        FriendsList friendListOne = new FriendsList();
        friendListOne.addFriend("Arthur", "Thompson", "07/19", 739573957);
        friendListOne.addFriend("Barnie", "Dinosaur", "07/07", 345883475);
        friendListOne.addFriend("Clay", "Mold", "01/19", 348573485);
        friendListOne.addFriend("Anthony", "Davis", "04/ 25", 374583475);
        friendListOne.addFriend("Carmelo", "Anthony", "01/ 25", 34975435);
        friendListOne.addFriend("Michael", "Jordan", "10/07", 37845345);
        friendListOne.numberOfFriends();
        friendListOne.printAllFriends();
        friendListOne.printNamesBirthday("01");
        friendListOne.printFriendWithNumber("Clay", "Mold");
        friendListOne.printSortedFriends();
        friendListOne.sortedNames();
        friendListOne.addFriend("Shane", "McMahon", "01/01", 7362848);
        friendListOne.modifyFriend("Michael", "Jordan", "01/10", 83726496);
        friendListOne.deleteFriend("Shane", "");
        friendListOne.printFriendsBornInGivenDay("07");
        System.out.println("\n\n");
        friendListOne.printSortedFriends();
    }
}

class testPerson{
    public static void main(String[] args){
        Person p_1 = new Person("Faraz");
        Person p_2 = new Person("Chris");
        Person p_3 = new Person("Thomas");
        Person p_4 = new Person("Edward");
        p_1.beFriend(p_2);
        p_1.beFriend(p_3);
        p_1.beFriend(p_4);
        System.out.println("Hello, my name is, " + p_1.getName());
        System.out.println("The number of friends that, " + p_1.getName() + " has are, " + p_1.getFriendsCount());
        p_1.getFriendsName();
    }
}
class Person {
    private String name;
    private String friendNames = "";
    private int numberOfFriends = 0;
    private int numberOfSpaces = 0;

    Person(String var1) {
        this.name = var1;
    }

    void beFriend(Person var1) {
        this.friendNames = this.friendNames + var1.name;
        this.friendNames = this.friendNames + " ";
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

    void getFriendsName() {
        System.out.println(this.friendNames);
    }

    String getName() {
        return this.name;
    }
}
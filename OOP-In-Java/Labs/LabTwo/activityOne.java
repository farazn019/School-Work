public class activityOne{
    static String str = "faraz naseem";
    static String firstName = str.substring(0, 5);
    static String lastName = str.substring(6, 12);
    static String str2 = lastName + ", " + firstName;
    static char lastLetterLastName = lastName.charAt(lastName.length() - 1);
    static char firstLetterLastName = lastName.charAt(lastName.length() - 1);

    static String firstLetterUpperCase = firstName.substring(0, 1);
    static String firstLetterUpperCaseLName = lastName.substring(0, 1);

    static String newFirstName = firstLetterUpperCase.toUpperCase() + firstName.substring(1, 5);
    static String newLastName = firstLetterUpperCaseLName.toUpperCase() + lastName.substring(1, 6);


    public static void main(String[] args){
        System.out.println(str);
        System.out.println("The length of the string is, " + str.length() + '.');
        System.out.println("My first name is, " + firstName + '.');
        System.out.println("My last name is, " + lastName + '.');
        System.out.println("The variable \"str2\" is, " + str2 + '.');

        System.out.println("The last occurence of the last letter, " + lastLetterLastName + " in my first name is, " + firstName.indexOf(lastLetterLastName) + '.');
        System.out.println("The first occurence of the first letter, " + firstLetterLastName + " in my first name is, " + firstName.indexOf(firstLetterLastName) + '.');

        System.out.println("The uppercase of the first letter in my first name is, " + firstLetterUpperCase.toUpperCase() + '.');
        System.out.println("The uppercase of the first letter in my last name is, " + firstLetterUpperCaseLName.toUpperCase() + '.');

        System.out.println("Now, my new name is, " + newFirstName + " " + newLastName + '.');

    }
}
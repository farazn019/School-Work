import java.util.Scanner;

class activityOne {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter first floating point number: ");
        double varOne = scanner.nextDouble();
        System.out.println("Enter the second floating point number: ");
        double varTwo = scanner.nextDouble();
        System.out.println("Enter the third floating point number: ");
        double varThree = scanner.nextDouble();

        double total = varOne + varTwo + varThree;
        System.out.println("The total is, " + total + '.');
    }
}
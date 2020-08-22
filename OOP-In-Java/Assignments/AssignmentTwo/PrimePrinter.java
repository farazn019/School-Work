
//The scanner is imported.
import java.util.Scanner;
/**
 This class prints prime numbers.
 */
//This is the PrimePrinter class.
public class PrimePrinter
{
    //This is the main method.
    public static void main (String[] args)
    {
        Scanner in = new Scanner(System.in); //Declares an in variable of type Scanner to ask for user input.
        System.out.print("Enter upper limit: ");
        int limit = in.nextInt(); //Asks the user to input an integer variable.
        PrimeGenerator generator = new PrimeGenerator();
        generator.nextPrime(limit); //Computes the prime numbers.
        generator.printPrimes(limit); //Prints the prime numbers.
    }
}
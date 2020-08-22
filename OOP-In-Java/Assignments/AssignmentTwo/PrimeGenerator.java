import java.lang.Math;
import java.util.ArrayList;

/**
 This class generates all prime numbers.
 */
public class PrimeGenerator
{

    /**
     Calculates the next prime number.
     @return the next prime number
     */
    ArrayList<Integer> primes = new ArrayList<Integer>();

    //This function will calculate the prime number, up until there are as much prime number as the limit variable specifies.
    public void nextPrime(int limit)
    {
        // Complete this part
        int divisor, num = 2, counter = 0;
        int sqrtNum;
        while(counter < limit){
            divisor = 2;
            sqrtNum = (int)(Math.sqrt(num));
            while ((num % divisor != 0) && (sqrtNum >= divisor)){
                ++divisor;
            }

            //If there is a number that is divisible by a number until the divisior, then we will go to the next number.
            if(num % divisor == 0){
                ++num;
            }

            //This else statement will add a number to the primes arraylist.
            else{
                primes.add(num);
                ++num;
                ++counter;
            }
        }
    }

    //This function prints the prime numbers.
    public void printPrimes(int limit){
        System.out.println("The first " + limit + " prime numbers are: ");
        for(int number: primes){
            System.out.println(number); //Prints a prime number.
        }
    }
}
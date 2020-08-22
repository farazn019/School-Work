import java.util.Scanner;
import java.util.ArrayList;



class fibonacci{
    private ArrayList<Integer> primeNumbers = new ArrayList<Integer>();
    int f_0 = 0;
    int f_1 = 1;
    int sequence_size; //This integer variable will hold the corresponding number in the sequence.

    void computeSequence(){
        Scanner input = new Scanner(System.in);
        sequence_size = input.nextInt();
        input.close();
        primeNumbers.add(f_0);
        primeNumbers.add(f_1);

        for(int i = 0; i < sequence_size - 2; i++){
            if(f_0 <= f_1){
                f_0 = f_0 + f_1;
                primeNumbers.add(f_0);
            }
            else if(f_1 < f_0){
                f_1 = f_1 + f_0;
                primeNumbers.add(f_1);
            }
        }
    }

    void printNumbers(){
        System.out.println("The first, " + primeNumbers.size() + " terms of the fibonacci sequence are: ");
        for(int j = 0; j < primeNumbers.size(); j++){
            System.out.println(primeNumbers.get(j));
        }
    }
}
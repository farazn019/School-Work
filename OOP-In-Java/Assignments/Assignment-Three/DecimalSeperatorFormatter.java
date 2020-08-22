//This class will format the numbers in the necessary decimal format.

//The necessary files are imported here.
import java.io.File;
import java.io.FileReader;
import java.io.BufferedReader;
import java.util.Scanner;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.PrintWriter;


//The class DecimalSeperatorFormatter implements the interface NumberFormatter.
public class DecimalSeperatorFormatter implements NumberFormatter{
    String fileName;
    int[] number;

    //The constructor gets the name of the file.
    DecimalSeperatorFormatter(String fileName){ this.fileName = fileName;}

    //This method will open the file do calculations and then make a new file.
    void calculateNumber(){
        
        try{
            File file = new File(this.fileName);
            BufferedReader readFile = new BufferedReader(new FileReader(file.getPath()));
            Scanner readNumbers = new Scanner(this.fileName);
            readNumbers.close();
            String stringNumbers[] = readFile.readLine().split(" ");
            number = new int[stringNumbers.length];
            
            for(int i = 0; i < stringNumbers.length; i++){
                number[i] = Integer.parseInt(stringNumbers[i]);
            }

            File FormattedNumbers = new File("FormattedNumbers.txt");
            PrintWriter formattedNumbersOutput = new PrintWriter(new BufferedWriter(new FileWriter(FormattedNumbers.getPath(), true)));


            //BufferedWriter writeToFile = new BufferedWriter(new FileWriter(FormattedNumbers.getPath()));
            formattedNumbersOutput.write("Decimal Format: ");

            for(int i = 0; i < stringNumbers.length; i++){
                formattedNumbersOutput.write(format(number[i]));
            }   

            formattedNumbersOutput.println();
            formattedNumbersOutput.close();
        }

        catch (Exception exc){return;}

    }
    
    //Formats the string.
    public String format(int n){
        int temp = n;
        int numberOfDigits = 0;
        while(temp != 0){
            temp /= 10;
            numberOfDigits += 1;
        }
        String originalInt = String.valueOf(n);
        String formattedInt = "";
        for(int i = 1; i <= numberOfDigits; i++){
            if(((i) % 3 == 0) && (i != numberOfDigits)){
                formattedInt += ',';
            }
            formattedInt += originalInt.subSequence(i - 1, i);
        }

        return(formattedInt + " ");
    }
}
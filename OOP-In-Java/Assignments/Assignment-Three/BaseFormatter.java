//This class will format the numbers in the necessary base.

//The necessary files are imported here.
import java.lang.Math;
import java.io.File;
import java.io.FileReader;
import java.io.BufferedReader;
import java.util.Scanner;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.PrintWriter;

//The class BaseFormatter implements the interface NumberFormatter.
public class BaseFormatter implements NumberFormatter{
    String fileName;
    int[] number;
    int secondBase;
    //The constructor gets the name of the file.
    BaseFormatter(String fileName, int secondBase){ 
        this.fileName = fileName;
        this.secondBase = secondBase;
    }

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


            formattedNumbersOutput.write("Base " + this.secondBase + " Format: ");

            for(int i = 0; i < stringNumbers.length; i++){
                formattedNumbersOutput.write(format(number[i]));
            }   

            formattedNumbersOutput.println();
            formattedNumbersOutput.close();
        }

        catch (Exception exc){return;}

    }



    //Formats the string.
    public String format(int n){ return(Integer.toString(Integer.parseInt(String.valueOf(n), 10), this.secondBase) + " ");}
}
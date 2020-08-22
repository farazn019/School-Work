//This class will format the numbers in the necessary base.

//The necessary files are imported here.
import java.io.File;
import java.io.FileReader;
import java.io.BufferedReader;
import java.util.Scanner;
import java.io.BufferedWriter;
import java.io.FileWriter;

//The class DfeaultFormatter implements the interface NumberFormatter.
public class DefaultFormatter implements NumberFormatter{
    String fileName;
    //The constructor gets the name of the file.
    DefaultFormatter(String fileName){ this.fileName = fileName;}
    int []number;

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
            FormattedNumbers.setWritable(true);
            BufferedWriter writeToFile = new BufferedWriter(new FileWriter(FormattedNumbers.getPath()));
            writeToFile.write("Default Format: ");

            for(int i = 0; i < stringNumbers.length; i++){
                writeToFile.write(format(number[i]));
            }   
            writeToFile.newLine();
            writeToFile.close();
        }

        catch (Exception exc){
            return;
        }

    }

    //Formats the string.
    public String format(int value){return(Integer.toString(value) + " ");}
}
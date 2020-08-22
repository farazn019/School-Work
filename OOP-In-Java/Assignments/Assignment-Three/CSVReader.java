//The necessary files are imported here.
import java.io.*;
import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;
import java.util.Stack;

public class CSVReader{
    LineNumberReader reader;
    String fileName;

    //This constructor takes the name of a CSV file as input.
    CSVReader(String fileName) {
        try {
            this.reader = new LineNumberReader(new FileReader(fileName));
            this.fileName = fileName;
            this.numberOfRows();
        } catch (Exception exc) {
            System.out.println("Sorry, couldn't find " + fileName + "!");
        }
    }

    //This method determines the number of rows in a CSV file.
    int numberOfRows(){
        try {
            while (this.reader.readLine() != null) {
            }
            return(this.reader.getLineNumber());
        } catch (Exception exc){
            return(0);
        }
    }

    //This method will compute the number of columns at a specific row.
    int numberOfFields(int row){
        String currentRow;
        try {
            int size = 0;
            BufferedReader csvReader = new BufferedReader(new FileReader(this.fileName));
            Scanner inputStream = new Scanner(csvReader);

            for(int i = 0; i < row - 1; i++){csvReader.readLine();}

            while(inputStream.hasNextLine()){
                currentRow = inputStream.nextLine();
                //The splitValues array will ensure that commas inside quotes will not count as individual columns.
                String[] splitvalues = currentRow.split(",(?=([^\"]*\"[^\"]*\")*[^\"]*$)");
                Arrays.toString(splitvalues);
                size = splitvalues.length;
            }

            inputStream.close();
            csvReader.close();
            return(size);
        }
        catch (Exception exc){
            return (0);
        }
    }

    //This method will find the value at a specific column and row. Returns a string value.
    String field(int row, int column){
        String currentRow;
        try{
            BufferedReader csvReader = new BufferedReader(new FileReader(this.fileName));
            Scanner currentFile = new Scanner(csvReader);

            for(int i = 0; i < row; i++){csvReader.readLine();}
            while(currentFile.hasNextLine()){
                currentRow = currentFile.nextLine();
                String[] splitvalues = currentRow.split(",(?=([^\"]*\"[^\"]*\")*[^\"]*$)");
                String value = splitvalues[column];
                Arrays.toString(splitvalues);
                return(value);

            }

            //Will return Not Found is the value doesn't exist.
            return("Not Found!");
        }catch (Exception exc){
            return("File not found");
        }
    }
}
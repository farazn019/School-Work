import java.util.ArrayList;
import java.io.File;
import java.io.FileWriter;
import java.io.Writer;
import java.io.BufferedWriter;

public class main {
    public static void main (String[] args){
        /*
        CSVReader secondActivity = new CSVReader("quotes.csv");
        System.out.println("The number of rows in this file is, " + secondActivity.numberOfRows());
        secondActivity.numberOfFields(2);
        secondActivity.field(1, 1);*/
        
        DefaultFormatter defaultformat = new DefaultFormatter("Numbers.txt");
        defaultformat.calculateNumber();
        DecimalSeperatorFormatter decimalformat = new DecimalSeperatorFormatter("Numbers.txt");
        decimalformat.calculateNumber();
        AccountingFormatter accountingFormat = new AccountingFormatter("Numbers.txt");
        accountingFormat.calculateNumber();
        BaseFormatter base8 = new BaseFormatter("Numbers.txt", 8);
        base8.calculateNumber();
        BaseFormatter base2 = new BaseFormatter("Numbers.txt", 2);
        base2.calculateNumber();

        

        /*
        activityTwo secondActivity2 = new activityTwo();
        secondActivity2.openFile("att2007.csv");
        System.out.println("The number of rows in this file is, " + secondActivity2.numberOfRows());*/

        //activityFour fourth = new activityFour("test1.txt");
        /*
        ArrayList<Integer> arraylist = new ArrayList<Integer>();
        arraylist.add(1);
        arraylist.add(2);
        arraylist.add(3);
        System.out.println(ArrayListUtil.reverseModification(arraylist));
        */
    }
}
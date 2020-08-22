
//All the necessary files are imported.
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Iterator;
import java.util.Map;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;

//The activityFour class code is declared here.
public class FirstLetterMap{
        
    public static void main(String[] args) throws FileNotFoundException {
        Scanner readFile = new Scanner(System.in);
        //The user is prompted to enter the name of the file.
        System.out.print("Please enter the name of the file: ");
        String filename = readFile.nextLine();


        readFile = new Scanner(new File(filename));
        //A delimeter so that we ignore the sequences of character(s) specified in the useDelimeter parameter.
        readFile.useDelimiter("\\W+");

        Map<Character, Set<String>> map = new TreeMap<Character, Set<String>>();
        while (readFile.hasNext()) {
                String word = readFile.next().toLowerCase();
                char currentCharacter = word.charAt(0);

                if (!map.containsKey(currentCharacter)) { map.put(currentCharacter, new TreeSet<String>());}
                map.get(currentCharacter).add(word);
        }
        //The file is closed.
        readFile.close();

        for (Character key : map.keySet()) {
                System.out.print(key + ": [");
                Iterator<String> it = map.get(key).iterator();
                while (it.hasNext()) {
                    System.out.print(it.next());
                    if (it.hasNext()) {
                            System.out.print(", ");
                    }
                }
                System.out.println("]");

        }

    }
}
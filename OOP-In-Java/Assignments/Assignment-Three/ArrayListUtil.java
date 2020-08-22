
//The necessary files are imported.
import java.util.ArrayList;
import java.util.Collections;

public class ArrayListUtil {
    
    //This method will reverse an arrayList by making a modification to the original list.
    static ArrayList <String> reverseModification(ArrayList<String> originalList){
        Collections.reverse(originalList);
        return(originalList);
    }

    //This method will reverse the arraylist by making a new arraylist, thus not modifying the original arraylist.
    static ArrayList<String> reverseNoModification(ArrayList<String> originalList){
        ArrayList <String> reverseList = new ArrayList<>();

        for(int i = 0, j = originalList.size() - 1; i < originalList.size(); i++, j--){
            reverseList.add(originalList.get(j));
        }
        return(reverseList);
    }

}
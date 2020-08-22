import java.util.LinkedList;
import java.util.Iterator;
/**
 This class supplies a utility method to reverse the entries in a linked list.
 */
public class ListUtil
{
    /**
     Reverses the elements in a linked list
     @param strings the linked list to reverse
     */
    static LinkedList<String> reversed;
    public static LinkedList reverse(LinkedList<String> strings)
    {
        reversed = new LinkedList<>();


        System.out.println();
        Iterator linkedListIterator = strings.descendingIterator();
        int current_index = 0;

        while(linkedListIterator.hasNext()){
            reversed.add(current_index, linkedListIterator.next().toString());
            ++current_index;
        }

        current_index = 0;
        while(current_index != reversed.size() - 1){
            strings.set(current_index, reversed.get(current_index));
            ++current_index;
        }

        System.out.printf("\n");
        return(strings);
    }

    public String toString(){
        String LinkedListString = "";
        for(int i = 0; i < reversed.size(); i++){
            LinkedListString += reversed.get(i) + " ";
        }
        return(LinkedListString);
    }
}
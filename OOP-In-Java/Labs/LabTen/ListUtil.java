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
    public static LinkedList reverse(LinkedList<String> strings)
    {
        LinkedList<String> reversed = new LinkedList<>();
        Iterator linkedListIterator = strings.descendingIterator();
        while(linkedListIterator.hasNext()){
            System.out.printf("%s ", linkedListIterator.next());
        }
        System.out.printf("\n");
        return(reversed);
    }
}
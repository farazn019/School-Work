import java.util.ArrayList;

public class genericPractice <T>{
    private T item;
    private ArrayList<T> itemsList;

    genericPractice(){itemsList = new ArrayList<>();}

    void addElement(T element){
        this.item = element;
        itemsList.add(this.item);
    }

    int getElementAtIndex(int index){
        if(itemsList.size() - 1 > index){
            System.out.println("The index is out of range!");
            return -1;
        }
        else{
            System.out.println("The item at index " + index + " is, "  +itemsList.get(index));
            return(index);

        }
    }

    void printAllElements(){
        for(T item : itemsList){ System.out.println(item);}
    }
}
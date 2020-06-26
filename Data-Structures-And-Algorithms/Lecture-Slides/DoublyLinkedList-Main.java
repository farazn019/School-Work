public class Main {
    public static void main(String[] args)
    {
        DoublyLinkedList<Integer> dblist=new DoublyLinkedList<Integer>();

        System.out.println(dblist.isEmpty());

        dblist.insertFirst(20);
        dblist.insertFirst(15);
        dblist.insertFirst(30);
        dblist.insertFirst(10);

        dblist.displayList();

        dblist.deleteFirst();

        dblist.displayList();

    }
}

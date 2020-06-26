public class MainCircular {

    public static void main(String[] args) {

        CircularLinkedList cirList=new CircularLinkedList();

        cirList.insertEnd(10);
        cirList.insertEnd(20);
        cirList.insertEnd(30);
        cirList.insertEnd(40);
        cirList.insertEnd(50);


        cirList.displayData();
    }
}

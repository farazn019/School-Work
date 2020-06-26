public class CircularLinkedList {
    public Node head;
    public Node tail;
    public int length;

    public CircularLinkedList()
    {
        this.head=null;
        this.tail=null;
        this.length=0;
    }

    public void insertEnd(int data) {
        Node newNode = new Node(data);

        if (head == null) {
            head = newNode;
        } else {
            tail.next = newNode;
        }
        tail = newNode;
        tail.next = head;
    }


    public void insertAt(int position,int data) {}
    public void insertFirst(int data){}
    public void deleteAt(int position) {}
    public void deleteEnd(){}


    // print element in the linkedlist
    public void displayData()
    {
        Node current = head;
        while(current.next!=head)
        {
            System.out.print(current.data+" --> ");
            current=current.next;
        }
        System.out.println(current.data);
    }

}

/*
Created by Kalyani 2020
*/

public class DoublyLinkedList<E> {

    private Node<E> head;
    private Node<E> tail;
    private int length;

    //create a inner class for a Node
    private class Node<E>{
        private E data;
        private Node<E> previous;
        private Node<E> next;

        //constructor for Node class
        public Node(E data) {
            this.data = data;
        }
    }

    //create a constructor for Doubly linked list class
    public DoublyLinkedList()
    {
        this.head=null;
        this.tail=null;
        this.length=0;
    }

    public boolean isEmpty()
    {
        return length==0;
    }

    public void insertFirst(E data) {
        Node<E> newNode=new Node<E>(data);  //create a new node
        if(head==null)
            tail=newNode;           // in the empty list
        else
            head.previous=newNode;  // if the list is not empty
        newNode.next=head;
        head=newNode;
    }

    public void insertAt(int position,E data) {}
    public void insertEnd(E data){}
    public void deleteAt(int position) {}
    public void deleteEnd(){}

    public void deleteFirst()
    {
        if(head==null)
            return;

        Node<E> current = head;
//        head = head.next;
//        head.previous = null;

        head.next.previous=null;
        head=head.next;
        length--;
    }



    public void displayList()
    {
        if(head==null)
            return;
        else {
            Node<E> current = head;
            System.out.print("null <--> ");
            while (current != null) {
                System.out.print(current.data+" <--> ");
                current = current.next;
            }
            System.out.println("null");
        }
    }
}

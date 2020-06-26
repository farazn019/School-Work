// Created By Kalyani 2020


public class CQueueADT {

    int front, rear, size;
    int capacity;
    int[] myArray;

    public CQueueADT(int capacity)
    {
        this.capacity = capacity;
        this.front = -1;
        this.rear = - 1;
        myArray = new int[capacity];
        this.size=0;
    }

    public boolean isFull()
    {
        return (((rear+1) % capacity) == front);
    }

    public boolean isEmpty()
    {
        return (front == rear );
    }

    public int peek()
    {
        if (isEmpty())
            return -1;
        else
            return myArray[front];

    }

    public void enqueue(int data)
    {
        if (isFull()) {
            System.out.println("Queue is Full.");
            return;
        }
        else{
            if(isEmpty()) {
                front = 0;
            }
            rear=(rear+1)%capacity;
            myArray[rear]=data;
            size++;
        }
    }

    public void dequeue()
    {
        if(isEmpty())
        {
            System.out.println("Queue is Empty!");
        }
        else{
            if(front==rear) {
                front = rear = -1;
            }
                front = (front + 1)%capacity;
                size--;
            }
    }

    public int getSize()
    {
        return size;
    }

    public int peekFront()
    {
        if(isEmpty()) {
            System.out.println("Queue is Empty!");
            return -999;
        }
        else
            return myArray[front];
    }

    public int peekRear()
    {
        if(isEmpty()) {
            System.out.println("Queue is Empty!");
            return -999;
        }
        else
            return myArray[rear];
    }

    public void displayQueue()
    {
        if(isEmpty())
        {
            System.out.println("Queue is Empty!");
        }
        else {
            for (int i = front; i <= rear; i++)
                System.out.print(myArray[i] + "  ");
            System.out.println();
        }
    }

}

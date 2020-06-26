public class MainCQueue {
    public static void main(String[] args) {

        CQueueADT queue= new CQueueADT(5);

        queue.enqueue(10);
        queue.enqueue(20);
        queue.enqueue(30);
        queue.enqueue(40);
        queue.enqueue(50);

        queue.displayQueue();

        queue.dequeue();
        queue.dequeue();
        queue.dequeue();

        queue.displayQueue();

    }
}

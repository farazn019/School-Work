import java.util.ArrayList;
import java.util.Scanner;
import java.util.Random;
import java.io.PrintStream;
class activityTwo{

    public static void main(String[] args) {
        ArrayList <Shape> shapes = new ArrayList<Shape>();
        Scanner in = new Scanner(System.in);
        Random random_number = new Random();
        String userInput = in.nextLine();
        Shape shape;
        while (!userInput.equals("E")) {
            if (userInput.equals("T")) {
                shape = new Triangle(random_number.nextDouble() * 10, random_number.nextDouble() * 10);
                shapes.add(shape);
            }
            else if (userInput.equals("Q")) {
                shape = new Square(random_number.nextDouble() * 10);
                shapes.add(shape);
            }
            else if(userInput.equals("C")){
                shape = new Circle(random_number.nextDouble() * 10);
                shapes.add(shape);
            }
            else if (userInput.equals("O")) {
                shape = new Oval(random_number.nextDouble() * 10, random_number.nextDouble() * 10);
                shapes.add(shape);
            }
            userInput = in.nextLine();
        }
        for (int i = 0; i < shapes.size(); i++) {
            System.out.printf("Shape Type: %s \nArea: %.2f\n", shapes.get(i).getName(), shapes.get(i).area());
        }
    }
}
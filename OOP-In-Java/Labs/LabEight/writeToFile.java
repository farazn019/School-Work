import java.io.PrintWriter;
import java.io.IOException;

class writeToFile{
    public static void main(String[] args) {

        try {
            PrintWriter printer = new PrintWriter("hello.txt", "UTF-8");
            printer.println("Hello World!");
            printer.close();
        }
        catch (IOException io_exception){
            System.out.println("Sorry, couldn't find the file!");
        }
    }

}
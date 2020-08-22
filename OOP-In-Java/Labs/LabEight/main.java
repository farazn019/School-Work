import java.io.File;
import java.io.IOException;
import java.io.BufferedReader;
import java.io.PrintWriter;
import java.util.Scanner;
import java.util.ArrayList;
import java.nio.file.*;
import java.io.FileReader;
import java.util.Collections;

class main {
    public static void main(String[] args) {

        Chicken chicken = new Chicken(true);
        System.out.println(chicken.howToEat());

        Fish fish = new Fish(true);
        System.out.println(fish.howToEat());

        Tiger tiger = new Tiger(true);
        System.out.println(tiger.howToEat());

        try {
            PrintWriter printer = new PrintWriter("hello.txt", "UTF-8");
            printer.println("Hello World!");
            printer.close();
        }
        catch (IOException io_exception){
            System.out.println("Sorry, couldn't find the file!");
        }


        int lineNumber = 1;
        BufferedReader br;
        Scanner in;

        try {

            {
                br = new BufferedReader(new FileReader("Input1.txt"));
                in = new Scanner(new File("Input1.txt"));
                String input = in.nextLine();
                if (input.equals("String")) {
                    ArrayList<String> outputStringFile = new ArrayList<String>();
                    while (((br.readLine()) != null) && (lineNumber <= 4)) {
                        outputStringFile.add(Files.readAllLines(Paths.get("Input1.txt")).get(lineNumber));
                        lineNumber += 1;
                    }
                    Collections.sort(outputStringFile);
                    PrintWriter stringPrinter = new PrintWriter("outputString.txt", "UTF-8");
                    for(int i = 0; i < outputStringFile.size(); i++){
                        stringPrinter.println(outputStringFile.get(i));
                    }
                    stringPrinter.close();
                }


            }

            {
                br = new BufferedReader(new FileReader("Input2.txt"));
                in = new Scanner(new File("Input2.txt"));
                String input = in.nextLine();
                if(input.equals("Integer")){
                    lineNumber = 1;
                    ArrayList<Integer> outputIntegerFile = new ArrayList<Integer>();

                    while(in.hasNextInt()){
                        outputIntegerFile.add(in.nextInt());
                    }
                    Collections.sort(outputIntegerFile);
                    PrintWriter intPrinter = new PrintWriter("outputInt.txt", "UTF-8");
                    for(int i = 0; i < outputIntegerFile.size(); i++){
                        intPrinter.println(outputIntegerFile.get(i));
                    }
                    intPrinter.close();
                }
            }

            {
                br = new BufferedReader(new FileReader("Input3.txt"));
                in = new Scanner(new File("Input3.txt"));
                String input = in.nextLine();
                if(input.equals("Double")){
                    ArrayList <Double> outputDoubleFile = new ArrayList <Double>();

                    while(in.hasNextDouble()){
                        outputDoubleFile.add(in.nextDouble());
                    }

                    Collections.sort(outputDoubleFile);
                    PrintWriter doublePrinter = new PrintWriter("outputDouble.txt", "UTF-8");
                    for(int i = 0; i < outputDoubleFile.size(); i++){
                        doublePrinter.println(outputDoubleFile.get(i));
                    }
                    doublePrinter.close();
                }
            }

        } catch (IOException io_exception) {
            System.out.println("Sorry, couldn't find the file!");
        }
    }

}

import java.io.File;
import java.io.PrintWriter;
import java.io.FileNotFoundException;

public class genericFile <T extends Comparable<T>>{

    File newFile;
    String fileName;
    PrintWriter outputFile;

    genericFile(String fileName) {
        try {
            newFile = new File(fileName);
            this.fileName = fileName;
            this.newFile.createNewFile();
            outputFile = new PrintWriter(newFile);

        } catch (Exception exc) {
            System.out.println("File not found!");
        }
    }

    void addContent(T content) throws Exception{outputFile.println(content); }

    void closeFile(){ outputFile.close();}

}
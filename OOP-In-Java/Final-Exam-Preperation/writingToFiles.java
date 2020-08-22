import java.io.File;
import java.io.PrintWriter;


class writingToFiles{
    private String fileName;
    private File file;
    private PrintWriter writer;

    writingToFiles(String name){
        this.fileName = name;
        try{
            this.file = new File(this.fileName);
        }
        catch(Exception exception){
            System.out.println("Warning! File will not open!");
        }
    }

    void textToWrite(String text){
        try{
        this.writer = new PrintWriter(this.file.getPath());
        this.writer.println(text);
        }
        catch(Exception Exc){
            System.out.println("Error! Can not print to the file!");
        }
    }

    void closeFile(){this.writer.close();}

}
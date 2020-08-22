public class mainWritingToFiles {
    public static void main (String[] args){
        writingToFiles fileOne = new writingToFiles("file1.txt");
        fileOne.textToWrite("Hello my name is Faraz Naseem!");
        fileOne.textToWrite("I was born on the 19th of July!");
        fileOne.textToWrite("I was born in London, England.");
        fileOne.closeFile();
    }
}
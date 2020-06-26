class testBookClass{
    public static void main(String[] args){
        book newBook = new book("C++ is better than Java");
        System.out.println(newBook.getNameBook());

        newBook.setNameAuthor("Faraz Naseem");
        newBook.setYearOfPublication(2020);
        newBook.setNumberOfPages(365);

        System.out.println("The name of the author is, " + newBook.getNameAuthor() + '.');
        System.out.println("The year that " + newBook.getNameBook() + " was published is, " + newBook.getYearOfPublication() + '.');
        System.out.println(newBook.getNameBook() + " has, " + newBook.getNumberOfPages() + " pages.");
    }
}
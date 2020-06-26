class book{
    private String nameBook;
    private String nameAuthor;
    private int yearOfPublication;
    private int numberOfPages;

    book(String name){
        this.nameBook = name;
    }

    String getNameBook(){
        return this.nameBook;
    }

    void setNameAuthor(String author){
        this.nameAuthor = author;
    }

    void setYearOfPublication(int year){
        this.yearOfPublication = year;
    }

    void setNumberOfPages(int number){
        this.numberOfPages = number;
    }


    String getNameAuthor(){
        return(this.nameAuthor);
    }

    int getYearOfPublication(){
        return (this.yearOfPublication);
    }

    int getNumberOfPages(){
        return (this.numberOfPages);
    }
}
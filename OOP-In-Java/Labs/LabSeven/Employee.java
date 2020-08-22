
class Employee extends Person{
    private double salary;
    private String hiringDate;

    void setSalary(double salary){ this.salary = salary;}
    void setHiringDate(String hiringDate){ this.hiringDate = hiringDate;}

    double getSalary(){ return(this.salary);}
    String getHiringDate() { return (this.hiringDate);}

    String getName(){ return(super.getName());}

    public String toString(){
        return("Salary: " + String.valueOf(this.getSalary()) + "\nHiring Date: " + this.getHiringDate());
    }
}
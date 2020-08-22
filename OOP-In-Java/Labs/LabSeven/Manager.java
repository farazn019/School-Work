

public class Manager extends Employee{

    private double salary = super.getSalary(), bonusSalary;

    void setBonusSalary(double bonusSalary){ this.bonusSalary = bonusSalary;}
    void setSalary(double salary){ this.salary = salary;}

    double getSalary(){ return(this.salary);}
    double getWeeklyBonus(){ return(this.bonusSalary);}
    double getTotalSalary(){ return(this.salary + this.bonusSalary);}

    public String toString(){
        return("Name: " + super.getName() + "\nSalary: $" + String.valueOf(this.getSalary()) + "/year\nWeekly Bonus: $" + String.valueOf(this.getWeeklyBonus()));
    }
}
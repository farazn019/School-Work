
class Employee1 implements Payable{
    private double workingHours;
    private double hourlyRate;
    private double paymentAmount;

    void setWorkingHours(double workingHours){this.workingHours = workingHours;}
    void setHourlyRate(double hourlyRate){this.hourlyRate = hourlyRate;}
    void setPaymentAmount(double workingHours, double hourlyRate){ this.paymentAmount = workingHours*hourlyRate;}

    double getWorkingHours(){return(this.workingHours);}
    double getHourlyRate(){return(this.hourlyRate);}
    double getPaymentAmount(){return(this.paymentAmount);}

}
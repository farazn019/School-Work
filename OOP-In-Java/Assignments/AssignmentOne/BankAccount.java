
//The math library is imported.
import java.lang.Math;

class BankAccount{
    //All the private variables are declared here.
    private double withdrawMoney;
    private double withdrawTracker = 0;
    private double depositMoney;
    private double depositTracker = 0;
    private double balance = 0 ;
    double charge = 0;
    private static int initalNumberFreeTransactions = 10;
    private int numberOfTransactions = 0;

    private int currentMonth = 0;
    private String [] months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};


    void printMonth(int month){
        this.currentMonth = month;
        System.out.println("Now, the current month is, " + months[this.currentMonth]);
    }

    //Deposits a certain amount of money into the user's account.
    void deposit(double amount){

        if((this.currentMonth == 0) && (this.numberOfTransactions == 0)){ System.out.println("The current month is, " + months[this.currentMonth] + '.'); }
        System.out.println("You have decided to deposit, $" + amount + " in your bank account.");
        this.balance += amount;
        this.depositTracker += amount;
        this.numberOfTransactions += 1;

        System.out.println("Your bank account now has, $" + this.getBalance() + '.');

        //If the user despoits more than $10000 then the month will change, and the monthly charge is deducted.
        if(this.depositTracker >= 10000){
            deductMonthlyCharge();
            printMonth(this.currentMonth);
        }

    }

    //Withdraws a certain amount of money from the user's account
    void withdraw(double amount){
        //Checks to see if the user has enough money in the bank account to withdraw the amount that he/she specified.
        if(amount <= this.getBalance()) {
            System.out.println("You have chosen to withdraw $" + amount + '.');
            this.balance -= amount;
            System.out.println("The amount of money that is now in  your bank account is, $" + this.getBalance() + '.');
            this.withdrawTracker += amount;
            this.numberOfTransactions += 1;
        }
        //If the user doesn't have enough money in the bank account, they are notified about that.
        else{
            System.out.println("Invalid operation! You are requesting for $" + amount + ", but your bank account only has $" + this.getBalance() + '.');
        }
    }

    //After every month this function will deduct monthly charges from the user.
    void deductMonthlyCharge(){
        int paidCharges = Math.max(this.numberOfTransactions, this.initalNumberFreeTransactions);

        //If the number of transactions that the user makes is greater than 10, then there will be a deduction made, based on how many additional transactions the user made above 10 times 0.50.
        if(this.numberOfTransactions > 10) {
            this.numberOfTransactions -= this.initalNumberFreeTransactions;
            this.charge += (this.numberOfTransactions * 0.50); //Determines how much to charge the user.
            this.balance -= charge; //The charged amount is deducted from the user's balance.
            System.out.println("The amount of money that was charged is, $" + this.charge + '.');
        }

        //Resets all the important variables, for next month.
        this.numberOfTransactions = 0;
        this.withdrawTracker = 0;
        this.depositTracker = 0;
        this.currentMonth += 1;
    }
    double getBalance(){ return (this.balance); } // returns the balance in the user's account
}


class TestBankAccount{

    public static void main(String[] args){

        BankAccount faraz_account  = new BankAccount();
        faraz_account.deposit(1000);
        faraz_account.deposit(2000);
        faraz_account.withdraw(3000);
        faraz_account.deposit(7000);
        System.out.println("The amount of money in your bank account is, $" + faraz_account.getBalance());
        faraz_account.deposit(5000);
        faraz_account.withdraw(8000);
        faraz_account.getBalance();
        faraz_account.deposit(7000);
        System.out.println("The amount of money in your bank account is, $" + faraz_account.getBalance());
        faraz_account.withdraw(11000);
        faraz_account.deposit(10000.00);
        System.out.println("The amount of money in your bank account is, $" + faraz_account.getBalance());

    }
}

//This is the ComboLockTester class.
class ComboLockTester{
    //This is the main method.
    public static void main(String[] args){
        ComboLock lockOne = new ComboLock(1, 0, 0); //Declares a comboination lock, with the three secret numbers.
        lockOne.turnRight(1);
        lockOne.turnLeft(40);
        lockOne.turnRight(0);

        //If the guess is correct, then a message will be printed to the user telling them that the lock is open.
        if(lockOne.open() == true){
            System.out.println("DING! The lock has opened.");
        }

        //If the guess is incorrect, then a message will be printed to the user telling them that the lock will not open.
        else if(lockOne.open() == false){
            System.out.println("CLUCK! The lock has not opened please try again!");
        }

        //Here is the code for the second lock.
        ComboLock lockTwo = new ComboLock(8, 6, 10);
        lockTwo.turnRight(8);
        lockTwo.turnLeft(42);
        lockTwo.turnRight(4);
        if(lockTwo.open() == true){
            System.out.println("DING! The lock has opened.");
        }
        else if(lockTwo.open() == false){
            System.out.println("CLUCK! The lock has not opened please try again!");
        }

        //Here is the code for the third lock.
        ComboLock lockThree = new ComboLock(34, 17, 1);
        lockThree.turnRight(34);
        lockThree.turnLeft(17);
        lockThree.turnRight(24);
        if(lockTwo.open() == true){
            System.out.println("DING! The lock has opened.");
        }
        else if(lockTwo.open() == false){
            System.out.println("CLUCK! The lock has not opened please try again!");
        }

    }
}
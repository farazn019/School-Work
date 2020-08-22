
class Chicken extends Animal implements Edible{
    private static String animalName = "Chicken";
    Chicken(boolean isEdible){ this.setIsEdible(isEdible);}

    public String howToEat() {
        if (this.getIsEdible() == true) {
            return (this.getAnimalName() + ": Fry it and enjoy eating it with ketchup, fries and Coke!");
        }
        else{
            return(this.getAnimalName() + ": Can not be cooked! Sorry.");
        }
    }

    String getAnimalName(){ return(animalName);}
}
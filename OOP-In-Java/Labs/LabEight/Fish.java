

class Fish extends Animal implements Edible{
    private static String animalName = "Fish";
    Fish(boolean isEdible){ this.setIsEdible(isEdible); }

    public String howToEat(){
        if(this.getIsEdible() == true){
            return(this.getAnimalName() + ": Cut it up, season it, bake it in the oven, and eat it with ketchup and some beer!");
        }
        else{
            return(this.getAnimalName() + ": Can not be eaten!");
        }
    }

    public static String getAnimalName() {
        return (animalName);
    }
}
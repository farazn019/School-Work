

class Tiger extends Animal implements Edible{
    private static String animalName = "Tiger";
    Tiger(boolean isEdible){ this.setIsEdible(isEdible);}


    public String howToEat(){
        if(this.getIsEdible() == true){
            return(this.getAnimalName() + ": Bake it's meat in the oven, and enjoy it with mustard and water!");
        }
        else{
            return(this.getAnimalName() + ": Can not be eaten!");
        }
    }

    String getAnimalName(){ return(animalName);}
}
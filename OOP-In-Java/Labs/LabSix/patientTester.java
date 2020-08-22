
class patientTester{

    public static void main(String[] args){
        patient patientOne = new patient("Faraz", "Male", "July 19", 1, 34, "street name drive", "Windsor", "Ontario", "N0R 1A0");
        patientOne.printCurrentAddress();
        patientOne.addRelative("Arthur", 226, 2264570, "Nobody");
        patientOne.previousDiseases.add("Common Flu");
        patientOne.printDiseases();

        System.out.println("The number of " + patientOne.name + " is, " + patientOne.relatives.get(0).number);
        System.out.println("One of the emergency contact's of " + patientOne.name + " is, " + patientOne.relatives.get(0).getName() + ", and he is, " + patientOne.name + "'s " + patientOne.relatives.get(0).getRelation());

    }
}
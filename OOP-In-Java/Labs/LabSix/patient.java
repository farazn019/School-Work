import java.util.ArrayList;

class patient{
    String name, gender, DOB;
    ArrayList<relative> relatives = new ArrayList<relative>();
    ArrayList<String> previousDiseases = new ArrayList<String>();
    ArrayList<specialist> specialists = new ArrayList<specialist>();

    int apartmentNumber, houseNumber;
    String streetName, city, province, postalCode;
    patient(String name, String gender, String DOB, int apartmentNumber, int houseNumber, String streetName, String city, String province, String postalCode){
        this.name = name;
        this.gender = gender;
        this.apartmentNumber = apartmentNumber;
        this.houseNumber = houseNumber;
        this.streetName = streetName;
        this.city = city;
        this.province = province;
        this.postalCode = postalCode;
    }
    address currentAddress = new address(this.apartmentNumber, this.houseNumber, this.streetName, this.city, this.province, this.postalCode);


    void addRelative(String name, int areaCode, int number, String relation){
        relatives.add(new relative(name, areaCode, number, relation));
    }


    void printCurrentAddress(){
        if(this.apartmentNumber != 0) {
            System.out.print("Apartment Number: " + this.apartmentNumber + "\n");
        }
        System.out.print("House Number: " + this.houseNumber + "\nStreet Name: " + this.streetName + "\nCity: " + this.city + "\nProvince: " + this.province + "\nPostal Code: " + this.postalCode + "\n");
    }

    void printDiseases(){
        for(String disease: previousDiseases){
            System.out.println(disease);
        }
    }
}

class specialist{
    private String name, specialty;
    int areaCode, number;
    private contactNumber information = new contactNumber(this.areaCode, this.number);

    private int apartmentNumber, houseNumber;
    private String streetName, city, province, postalCode;

    private address doctorAddress = new address(this.apartmentNumber, this.houseNumber, this.streetName, this.city, this.province, this.postalCode);

    void setName(String name){ this.name = name;}
    void setSpecialty(String specialty) {this.specialty = specialty;}

    String getName() {return (this.name);}
    String getSpecialty() {return (this.specialty);}



}
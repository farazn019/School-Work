class address{

    int apartmentNumber, houseNumber;
    String streetName, city, province, postalCode;

    address(int apartmentNumber, int houseNumber, String streetName, String city, String province, String postalCode){
        this.apartmentNumber = apartmentNumber;
        this.houseNumber = houseNumber;
        this.streetName = streetName;
        this.city = city;
        this.province = province;
        this.postalCode = postalCode;
    }

    void setApartmentNumber(int apartmentNumber) {this.apartmentNumber = apartmentNumber;}
    void setHouseNumber(int houseNumber) {this.houseNumber = houseNumber;}
    void setStreetName(String streetName) {this.streetName = streetName;}
    void setCity(String city) {this.city = city;}
    void setProvince(String province) {this.province = province;}
    void setPostalCode(String postalCode) {this.postalCode = postalCode;}

    int getApartmentNumber(){return (this.apartmentNumber);}
    int getHouseNumber(){return (this.houseNumber);}
    String getStreetName(){return (this.streetName);}
    String getCity(){return (this.city);}
    String getProvince(){return (this.province); }
    String getPostalCode(){return (this.postalCode);}

}
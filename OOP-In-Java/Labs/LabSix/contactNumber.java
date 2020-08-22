
class contactNumber{
    private int areaCode;
    private int number;


    contactNumber(int areaCode, int number){
        this.areaCode = areaCode;
        this.number = number;
        setAreaCode(this.areaCode);
        setNumber(this.number);
    }

    void setAreaCode(int area_code){
        this.areaCode = area_code;
    }
    void setNumber(int number){
        this.number = number;
    }

    int getAreaCode(){ return(this.areaCode); }
    int getNumber(){ return(this.number); }
}
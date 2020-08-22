class relative{
    private String name;
    int areaCode;
    int number;
    private contactNumber information = new contactNumber(this.areaCode, this.number);
    private String relation;
    private int priority;

    relative(String name, int areaCode, int number, String relation){
        this.name = name;
        this.areaCode = areaCode;
        this.number = number;
        this.relation = relation;
    }

    void setName(String name){ this.name = name;}
    void setRelation(String relation) {this.relation = relation;}
    void setPriority(int priority) {this.priority = priority;}
    void setAreaCode(int areaCode) {this.areaCode = areaCode;}
    void setNumber(int number) {this.number = number;}

    String getName(){ return (this.name);}
    String getRelation() {return (this.relation);}
    int getPriority() {return (this.priority);}
    int getAreaCode() {return (this.areaCode);}
    int getNumber() {return (this.number);}
}
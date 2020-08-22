

class Student extends Person{
    private String programName;
    private String level;
    private int programYear;

    void setProgramName(String programName){ this.programName = programName;}
    void setLevel(String level){ this.level = level;}
    void setProgramYear(int programYear){ this.programYear = programYear;}
    
    String getProgramName(){ return(this.programName);}
    String getLevel(){ return(this.level);}
    int getProgramYear(){ return(this.programYear);}



}
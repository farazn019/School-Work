import java.util.ArrayList;

class visit{
    private String date, reason, note;
    private ArrayList <String> prescriptions = new ArrayList <String>();

    void setDate(String date){ this.date = date;}
    void setReason(String reason) {this.reason = reason;}
    void setNote(String note) {this.note = note;}
    void setPrescriptions(String prescription) {prescriptions.add(prescription); }

    String getDate(){ return(this.date);}
    String getReason() { return(this.reason); }
    String getNote(){ return(this.note); }

    void printPrescriptions(){
        for(String prescription: prescriptions){
            System.out.println(prescription);
        }
    }

}
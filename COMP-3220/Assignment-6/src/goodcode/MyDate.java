package goodcode;

import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.StringTokenizer;

public abstract class MyDate {

	public abstract String toString();
	   
	   public int day;
	   public int month;
	   public int year;
	    
	   public MyDate(){
	       String inputString = "";
	       Calendar cal = Calendar.getInstance();
	        SimpleDateFormat sdf ;
	        sdf = new SimpleDateFormat("dd/MM/yyyy");
	        inputString = sdf.format(cal.getTime());
	        
	        StringTokenizer tokenizeDate = new StringTokenizer(inputString, "/");
	        this.day = Integer.parseInt(tokenizeDate.nextToken());
	        this.month = Integer.parseInt(tokenizeDate.nextToken());
	        this.year = Integer.parseInt(tokenizeDate.nextToken());
	    }
}


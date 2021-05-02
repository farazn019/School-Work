package main;

public class NewDate {
	
	private int day;
	private int month;
	private int year;
	
	public NewDate(int day, int month, int year) throws Exception{
		if ((day < 1) || (day > 31) || (month < 1) || (month > 12) || (year < 1900) || (year > 2099)) 
			throw new Exception("Illegal data");
		this.day = day;
		this.month = month;
		this. year = year;
	}
	
	public String toString(){
		return day + "/" + month + "/"+ year;
	}
}
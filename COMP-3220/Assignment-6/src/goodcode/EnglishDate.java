package goodcode;

public class EnglishDate extends MyDate{
	public EnglishDate() {
		super();
		// TODO Auto-generated constructor stub
	}

	public String toString(){
		String monthNames[] = {"January", "February", "March", "April", "May",
                "June", "July", "August", "September", "October",
                "November", "December"};	

			return ( monthNames[month-1] + " " + day +  ", " + year );
		
	}
}

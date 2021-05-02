package goodcode;

public class FrenchDate extends MyDate{

	public FrenchDate() {
        super();		
        // TODO Auto-generated constructor stub
	}
	
	@Override
    public String toString(){    
        String monthNames[] = {"janvier", "fevrier", "mars",
                "avril", "mai", "juin", "juillet", "aout", 
                "septembre", "octobre", "novembre", "decembre"};
            return ( day + " " + monthNames[month-1] +  ", " + year );
        
    }
	
}

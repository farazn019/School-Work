package badCode;


public abstract class IncomeTaxCalculator {
	public abstract String createDateAddress(String gender, 
			                                 MyDate aDate, 
			                                 String province);
	public abstract double computeTax(double income);
	public abstract String displayBodyLetter(double taxPayable, 
			                                 String province);
	public abstract String displaySalutation(String name, 
			                                 String gender, 
                                             String province);

}

package goodcode;

public abstract class IncomeTaxFactory {
	
	public abstract DateAddress createDateAddress();
	public abstract TaxCalculator doCalculateTax();
	public abstract LetterBody displayBodyLetter();
	public abstract Salutation displaySalutation();
	public abstract MyDate dateFactory();

}

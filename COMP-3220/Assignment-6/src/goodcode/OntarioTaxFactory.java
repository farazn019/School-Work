package goodcode;

public class OntarioTaxFactory extends IncomeTaxFactory{

	@Override
	public DateAddress createDateAddress() {
		// TODO Auto-generated method stub		
		return new OntarioDateAddress();
				
	}

	@Override
	public TaxCalculator doCalculateTax() {
		// TODO Auto-generated method stub
		return new OntarioTaxCalculator();
	}

	@Override
	public LetterBody displayBodyLetter() {
		// TODO Auto-generated method stub
		return new OntarioLetterBody();
	}

	@Override
	public Salutation displaySalutation() {
		// TODO Auto-generated method stub
		return new EnglishSalutation();
	}

	@Override
	public MyDate dateFactory() {
		// TODO Auto-generated method stub
		return new EnglishDate();
	}
	
	
}

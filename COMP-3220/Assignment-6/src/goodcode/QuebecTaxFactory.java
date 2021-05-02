package goodcode;

public class QuebecTaxFactory extends IncomeTaxFactory{

	@Override
	public DateAddress createDateAddress() {
		// TODO Auto-generated method stub
		return new QuebecDateAddress();
	}

	@Override
	public TaxCalculator doCalculateTax() {
		// TODO Auto-generated method stub
		return new QuebecTaxCalculator();
	}

	@Override
	public LetterBody displayBodyLetter() {
		// TODO Auto-generated method stub
		return new QuebecLetterBody();
	}

	@Override
	public Salutation displaySalutation() {
		// TODO Auto-generated method stub
		return new FrenchSalutation();
	}

	@Override
	public MyDate dateFactory() {
		// TODO Auto-generated method stub
		return new FrenchDate();
	}

}

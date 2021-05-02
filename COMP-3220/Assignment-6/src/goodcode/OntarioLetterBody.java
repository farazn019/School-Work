package goodcode;


public class OntarioLetterBody extends LetterBody{

	@Override
	public String generateLetterBody(double taxPayable) {
		// TODO Auto-generated method stub
		return "Your tax is $" + taxPayable + "\n\n" + "Yours sincerely"; 
	}

}

package goodcode;


public class QuebecLetterBody extends LetterBody{

	@Override
	public String generateLetterBody(double taxPayable) {
		// TODO Auto-generated method stub
		return "Votre taxe est $" + taxPayable + "\n\n" + "Sincerement votre"; 

	}

}

package goodcode;


public class EnglishSalutation extends Salutation{


	@Override
	public String salutationGenerator(String name, String gender, String province) {
		// TODO Auto-generated method stub
		if(gender.equals("male")) {
			return "Dear Mr " + name + ",\n";
		}
		else {
			return "Dear Ms " + name + ",\n";
		}
	}
	
}

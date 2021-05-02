package goodcode;


public class FrenchSalutation extends Salutation{

	@Override
	public String salutationGenerator(String name, String gender, String province) {
		// TODO Auto-generated method stub
		if (gender.equals("male")){
			return "Cher Mr " + name +",\n";
		} else{
			return "Chere Mme/Melle " + name + ",\n";
		}
	}

}

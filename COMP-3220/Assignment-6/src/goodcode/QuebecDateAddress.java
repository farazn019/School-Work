package goodcode;

import java.util.Calendar;
public class QuebecDateAddress extends DateAddress{

	@Override
	public String displayDateAddress(MyDate today, String address, String province) {
		// TODO Auto-generated method stub
		return today.toString() + "\n\n" + address + "\n" + province + "\n\n";
		
	}
}

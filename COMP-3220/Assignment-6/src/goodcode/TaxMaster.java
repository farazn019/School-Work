package goodcode;

import java.text.SimpleDateFormat;
import java.util.Calendar;

public class TaxMaster {
    
    public String generateLetter(String name, String gender,  String address, String province, double income) {
        
        IncomeTaxFactory incomeTax;
        double taxPayable = 0;
        
        if(province.equals("Ontario")) {
            incomeTax = new OntarioTaxFactory();
            
        }
        else {
            incomeTax = new QuebecTaxFactory();
            
        }
        
        
        Calendar cal = Calendar.getInstance();
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        String dateFormat = sdf.format(cal.getTime());
        
        DateAddress dateAddressType = incomeTax.createDateAddress();
        MyDate date = incomeTax.dateFactory(); 
        Salutation salutationType = incomeTax.displaySalutation();
        LetterBody letterBodyType = incomeTax.displayBodyLetter();
        TaxCalculator taxCalculatorType = incomeTax.doCalculateTax();
        taxPayable = taxCalculatorType.calculateTax(income);
        
         
        String letter = dateAddressType.displayDateAddress(date, address, province) + salutationType.salutationGenerator(name, gender, province) + letterBodyType.generateLetterBody(taxPayable);
                 
        return letter;        
        
    }

}
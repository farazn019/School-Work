package strategyBasket;

import java.text.DecimalFormat;

//This is the main function.
public class StrategyBasketMain {
	
	//The decimal format is initialized.
	private static DecimalFormat decimalFormat = new DecimalFormat("#.##");
	static Basket basket; //A static variable of type Basket is initialized.
	
	public static void main(String[] args) {
		//basket is set to nodiscount.
		basket = new Basket(DiscountType.NoDiscount);
		basket.setTotalCost(299.99);
		//Prints out info for no discount when the price is 299.99
		System.out.println("--------- NoDiscount ( set total cost to 299.99) ---------");
		System.out.println("Total cost after applying NoDiscount"  + ": " + decimalFormat.format(basket.getTotalCostAfterDiscount()) + "\n");

		//basket is set to MoneyOff.
		basket = new Basket(DiscountType.MoneyOff);
		basket.setTotalCost(199.99);
		//Prints out info for MoneyOff when the price is 199.99
		System.out.println("--------- MoneyOffDiscount ( set total cost to 199.99) ---------");
		System.out.println("Total cost after applying MoneyOff discount" + ": " + decimalFormat.format(basket.getTotalCostAfterDiscount()) + "\n");

		basket.setTotalCost(89.99);
		//Prints out info for MoneyOff when the price is 89.99
		System.out.println("--------- MoneyOffDiscount ( set total cost to 89.99) ---------");
		System.out.println("Total cost after applying MoneyOff discount" + ": " + decimalFormat.format(basket.getTotalCostAfterDiscount()) + "\n");

		basket.setTotalCost(49.99);
		//Prints out info for MoneyOff when the price is 49.99
		System.out.println("--------- MoneyOffDiscount ( set total cost to 49.99) ---------");
		System.out.println("Total cost after applying MoneyOff discount" + ": " + decimalFormat.format(basket.getTotalCostAfterDiscount()) + "\n");
		
		basket = new Basket(DiscountType.PercentageOff);
		basket.setTotalCost(399.99);
		//Prints out info for MoneyOff when the price is 399.99
		System.out.println("--------- PercentageOffDiscount ( set total cost to 399.99) ---------");
		System.out.println("Total cost after applying PercentageOff discount" + ": " + decimalFormat.format(basket.getTotalCostAfterDiscount()));
	}

}

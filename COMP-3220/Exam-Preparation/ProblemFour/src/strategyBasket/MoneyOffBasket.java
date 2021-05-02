package strategyBasket;

//The MoneyOffBasket class implements the IBasketDiscountStrategy
public class MoneyOffBasket implements IBasketDiscountStrategy{

	//This will return the total cost after applying discounts, and it will return a double.
	@Override
	public double getTotalCostAfterApplyingDiscountTo(Basket basket) {
		//If the total cost is greater than 100, then a discount of 10 is applied.
		if (basket.getTotalCost() >= 100) {
			return basket.getTotalCost() - 10;
		}
		//If the total cost is greater than or equal to 50 but less than 100 then a discount of 5 is applied.
		else if (basket.getTotalCost() < 100 && basket.getTotalCost() >= 50) {
			return basket.getTotalCost() - 5;
		}
		//If neither of those options hold, then the original amount is returned.
		else {
			return basket.getTotalCost();
		}
	}

}

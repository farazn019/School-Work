package strategyBasket;

//The PercentageOffBasket class implements the IBasketDiscountStrategy, and it return a percent off of the original amount.
public class PercentageOffBasket implements IBasketDiscountStrategy{
	
	//This will return the total cost after applying discounts, and it will return a double.
	@Override
	public double getTotalCostAfterApplyingDiscountTo(Basket basket) {
		//This will return 90% of the original cost as the total cost.
		return basket.getTotalCost() * 0.9;
	}
	
}

package strategyBasket;

//The MoneyOffBasket class implements the IBasketDiscountStrategy, and it returns the original amount.
public class NoDiscountBasket implements IBasketDiscountStrategy{

	//This will return the total cost after applying discounts, and it will return a double.
	@Override
	public double getTotalCostAfterApplyingDiscountTo(Basket basket) {
		//It will return the original amount.
		return basket.getTotalCost();
	}
	
	

}

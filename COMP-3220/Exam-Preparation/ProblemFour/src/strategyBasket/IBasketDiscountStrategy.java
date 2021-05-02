package strategyBasket;

//This is the IBasketDiscountStrategy interface.
public interface IBasketDiscountStrategy {
	//The getTotalCostAfterApplyingDiscounts method returns a type double and takes as input a type Basket.
	double getTotalCostAfterApplyingDiscountTo (Basket basket);
}

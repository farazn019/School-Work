package strategyBasket;

//This is the Basket class.
public class Basket {
	private IBasketDiscountStrategy basketDiscount;
	private double totalCost;
	
	//This is the Basket constructor, and it sets basketDiscount to a value of basketDiscountFactory.getDiscount(discountType)
	Basket(DiscountType discountType){
		basketDiscount = BasketDiscountFactory.getDiscount(discountType);
	}
	
	//This returns the total cost.
	double getTotalCost() {
		return (this.totalCost);
	}
	
	//This sets the total cost.
	void setTotalCost(double totalCost) {
		this.totalCost = totalCost;
	}
	
	
	//This returns the total cost after discounts.
	double getTotalCostAfterDiscount() {
		return basketDiscount.getTotalCostAfterApplyingDiscountTo(this);
	}
	
}

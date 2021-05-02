package strategyBasket;

//This is the BasketDiscountFactory class.
public class BasketDiscountFactory {
	
	//This static method getDiscount determines what the disount type is.
	public static IBasketDiscountStrategy getDiscount(DiscountType discountType) {
		IBasketDiscountStrategy basketDiscountStrategy = null;

		//This switch statement determines which discountType it is.
		switch (discountType) {
		case NoDiscount:
			basketDiscountStrategy = new NoDiscountBasket();
			break;
		case MoneyOff:
			basketDiscountStrategy = new MoneyOffBasket();
			break;
		case PercentageOff:
			basketDiscountStrategy = new PercentageOffBasket();
			break;
		default:
			break;

		}

		return basketDiscountStrategy;		
		
	}
}

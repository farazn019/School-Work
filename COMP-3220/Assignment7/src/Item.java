

//This is the abstract item class.
public abstract class Item {
	protected String description;
	protected double cost;
	
	//The constructor will set the description of the item and the cost of the item.
	public Item(String description, double cost) {
		this.description = description;
		this.cost = cost;
	}
	
	//This method will return a description of the item.
	public String getDescription() {
		return(this.description);
	}
	
	//This method will return the cost of the item.
	public double getCost() {
		return(this.cost);
	};
	
	
	//This method will print how much the item costs in Canadian Dollars.
	public String toString() {
		return(this.description + " costs " + this.getCost() + " CAD");
	}
	
}

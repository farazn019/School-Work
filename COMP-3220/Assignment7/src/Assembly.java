import java.util.ArrayList;

//This is the Assembly class which extends the Item clas.
public class Assembly extends Item{
	
	ArrayList<Item> items;
	
	String description;
	
	//The constructor declares the ArrayList, sets the description, and sets cost to be 0.
	public Assembly (String description){
		super(description, 0);
		items = new ArrayList<Item>();
		this.description = description;
	}
	
	
	//This method will return the cost of Assembly.
	public double getCost() {
		double totalSum = 0.0;
		
		//Iterates through all of the items, incrementing totalSum by the value of each item.
		for(int i = 0; i < items.size(); i++) {
			totalSum += (items.get(i)).getCost();
		}

		return(totalSum); //Returns the total sum needed to build the product.
	}
	
	//This method will add an item that is required to build a product which requires assembly.
	void addItem(Item item) {
		items.add(item);
	}
	
	//This method will remove an item that is required to build a product which requires assembly.
	void removeItem(Item item) {
		items.remove(item);
	}

	//This method returns all the items needed to build the product.
	String getItems() {
		
		String itemString = this.description + " has ";
		for(int i = 0; i < items.size(); i++) {
			if(i != items.size() - 1) {
				itemString += ((items.get(i)).getDescription() + ", ");
			}
			else {
				itemString += "and " + (items.get(i)).getDescription();
			}
		}
		
		return itemString;
	}
}

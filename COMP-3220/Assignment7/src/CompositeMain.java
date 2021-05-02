

//This is the main class.
public class CompositeMain {
	public static void main(String[] args) {
				
		//A nut Part (object) is created.
		Part nut = new Part("Nut", 4.99);
		System.out.println(nut.toString());
		
		//A bolt Part (object) is created,
		Part bolt = new Part("Bolt", 8.99);
		System.out.println(bolt.toString());

		//A panel Part (object) is created.
		Part panel = new Part("Panel", 34.99);	
		System.out.println(panel.toString());		

		//A gizmo Assembly (object) is created,
		Assembly assemblyGizmo = new Assembly("Gizmo");
		assemblyGizmo.addItem(nut);
		assemblyGizmo.addItem(bolt);
		assemblyGizmo.addItem(panel);
		
		System.out.println(assemblyGizmo.toString());
		System.out.println(assemblyGizmo.getItems());
		
		
		//A widget Assembly (object) is created.
		Assembly assemblyWidget = new Assembly("Widget");
		assemblyWidget.addItem(assemblyGizmo);
		assemblyWidget.addItem(nut);
		System.out.println(assemblyWidget.toString());
		System.out.println(assemblyWidget.getItems());
		
	}
}

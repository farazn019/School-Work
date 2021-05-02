package main;

public class Employee extends Person{
	
	public static final int PLUMBER = 1, ELECTRICIAN = 2, MECHANIC = 3;
	private String employeeName;
	private int employeeType;
	private int hoursWorkedPerWeek;
	
	public Employee(String employeeName, int employeeType, int hoursWorkedPerWeek){
		super(employeeName);
		this.employeeType = employeeType;
		this.hoursWorkedPerWeek = hoursWorkedPerWeek;
	}
	
	public String getEmployeeName(){
		return getName();
	}
	
	public int getEmployeeType(){
		return employeeType;
	}
	
	public int getHoursWorkedPerWeek(){
		return hoursWorkedPerWeek;
	}
}
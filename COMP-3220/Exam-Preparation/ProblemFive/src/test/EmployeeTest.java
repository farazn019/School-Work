package test;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

import main.Employee;

class EmployeeTest {
	
	Employee employee1;
	Employee employee2;
	Employee employee3;
	//public static final int PLUMBER = 1, ELECTRICIAN = 2, MECHANIC = 3

	@BeforeEach
	void setUp() throws Exception {
		employee1 = new Employee("Arthur", 1, 40);
		employee2 = new Employee("Jon Jones", 2, 45);
		employee3 = new Employee("Sam", 3, 50);
	}

	@Test
	void testGetEmployeeName1() {
		assertEquals(employee1.getEmployeeName(), "Arthur");
	}
	
	@Test
	void testGetEmployeeName2() {
		assertEquals(employee2.getEmployeeName(), "Jon Jones");
	}
	
	@Test
	void testGetEmployeeName3() {
		assertEquals(employee3.getEmployeeName(), "Sam");
	}
	
	@Test
	void testGetEmployeeType1() {
		assertEquals(employee1.getEmployeeType(), 1);
	}
	
	@Test
	void testGetEmployeeTest2() {
		assertEquals(employee2.getEmployeeType(), 2);
	}
	
	@Test
	void testGetEmployeeTest3() {
		assertEquals(employee3.getEmployeeType(), 3);
	}
	
	@Test
	void testGetHoursWorkedPerWeek1() {
		assertEquals(employee1.getHoursWorkedPerWeek(), 40);
	}
	
	@Test 
	void testGetHoursWorkedPerWeek2(){
		assertEquals(employee2.getHoursWorkedPerWeek(), 45);
	}
	
	@Test 
	void testGetHoursWorkedPerWeek3(){
		assertEquals(employee3.getHoursWorkedPerWeek(), 50);
	}
}

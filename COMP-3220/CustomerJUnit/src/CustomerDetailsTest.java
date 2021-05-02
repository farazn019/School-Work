import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

public class CustomerDetailsTest {
	
	private CustomerDetails c1, c2;

	@BeforeEach
	public void runBeforeEach() {
		c1 = new CustomerDetails();
		c2 = new CustomerDetails("John", 'm');
		System.out.println("Print before each test method...");
	}

	@Test
	public void testGetName() {
		assertEquals(c1.getName(), "Unknown");
		assertEquals(c2.getName(), "John");
	}

	@Test
	public void testSetName() {
		c1.setName("Mary");
		c2.setName("Tom");
		assertEquals(c1.getName(), "Mary");
		assertEquals(c2.getName(), "Tom");
	}

	@Test
	public void testGetGender() {
		c2.setName("Tom");
		assertEquals(c1.getGender(), 'x');
		assertEquals(c2.getGender(), 'm');
	}

	@Test
	public void testSetGender() {
		c1.setName("Marry");
		c1.setGender('f');
		assertEquals(c1.getGender(), 'f');
	}

	@Test
	public void testToString() {
		assertEquals(c1.toString(), "Name and gender unknown");
		c1.setName("Mary");
		c1.setGender('f');
		assertEquals(c1.toString(), "Name Mary - female");
		assertEquals(c2.toString(), "Name John - male");
	}
	
	@AfterEach
	public void runAfterEach() {
		System.out.println("Print after each test method....");
		System.out.println("................................");
	}
}

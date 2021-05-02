package test;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

import main.NewDate;

class NewDateTest {
	NewDate newDate;

	@BeforeEach
	void setUp() throws Exception {
	}
	/*
	@Test
	void test() {
		//fail("Not yet implemented");
	}*/
	
	@Test
	public void setNewDate() {
		try {
			newDate = new NewDate(19, 07, 2001);
			assertEquals(newDate.toString(), "19/7/2001");
		} catch (Exception e) {
			fail("Failed");
		}
	}
	

}

package test;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

import main.Person;

class PersonTest {
	
	Person person;

	@BeforeEach
	void setUp() throws Exception {
		person = new Person("Douglas");
		System.out.println("The test for Person now begins: ");
	}

}

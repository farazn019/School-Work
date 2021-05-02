package test;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

import main.NewDate;
import main.Project;

class ProjectTest {

	Project project;
	NewDate finishDate;
	
	@BeforeEach
	void setUp() throws Exception {
		project = new Project("Plan Z", 2010, 12, 23, 2);
		finishDate = new NewDate(15, 10, 2020);
		project.setFinishDate (finishDate);
	}

	@Test
	void testGetProjectNameAndStartDate() {
		assertEquals(project.getProjectNameAndStartDate(), "Project Plan Z started on 23/12/2010");
		project.toString();
	}
	
	@Test
	void testToString() {
		assertEquals(project.toString(), "The project has the following workers:\nThe total salary paid to all employees working on the project is 0.0");
	}

}

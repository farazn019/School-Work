package com.emp.pay.bb;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class CompanyEmployeePayrollTest {

	//This runs test cases for CommissionEmployee.java class.
	@Test
	void CommissionEmployeeTest() {
		//fail("Not yet implemented");
		double commissionRate = 30.00;
		double grossSales = 30.00;
		double commissionEmployeeEarnings = commissionRate * grossSales;
		double delta = 0.00;
		
		
		CommissionEmployee comissionemployee = new CommissionEmployee();
		comissionemployee.setCommissionRate(30.00);
		comissionemployee.setGrossSales(40.00);
		
		assertEquals(commissionRate, comissionemployee.getCommissionRate(), delta);
		assertEquals(grossSales, comissionemployee.getGrossSales(), delta);
		assertEquals(commissionEmployeeEarnings, comissionemployee.commissionEmployeeEarnings(), delta);	
	}
	
	//This runs test cases for HourlyEmployee.java class.
	@Test
	void HourlyEmployeeTest() {
		
		double wage = 35.00;
		double hours = 35;
		double pay = hours * wage;
		
		double deltaWage = 2.50;
		double deltaHours = 5;
		double deltaPay = 0.0;
		
		HourlyEmployee hourlyEmployee = new HourlyEmployee();
		
		hourlyEmployee.setHours(40);
		hourlyEmployee.setWage(37);
		
		assertEquals(wage, hourlyEmployee.getWage(), 2.50);
		assertEquals(hours, hourlyEmployee.getHours(), deltaHours);
		assertEquals(pay, hourlyEmployee.hourlyEmployeeEarnings(), deltaPay);
	}
	
	//This runs test cases for SalariedEmployee.java class.
	@Test
	void SalariedEmployeeTest() {
		double weeklySalary = 3000;
		double deltaWeeklySalary = 750;
		
		SalariedEmployee salariedEmployee = new SalariedEmployee();
		salariedEmployee.setWeeklySalary(2500);
		
		assertEquals(weeklySalary, salariedEmployee.getWeeklySalary(), deltaWeeklySalary);
		assertEquals(salariedEmployee.getWeeklySalary(), salariedEmployee.salariedEmployeeEarnings(), 0.00);
	}
	
	//This runs test cases for PieceWorkerEmployee.java class.
	@Test
	void PieceWorkerEmployeeTest() {
		double wagePerPiece = 19.00;
		int numberOfPiecesMerchandise = 100;
		double employeeEarnings = wagePerPiece +(wagePerPiece * 0.01) * numberOfPiecesMerchandise;
		
		double delta = 0.0;
		
		PieceWorkerEmployee pieceWorkerEmployee = new PieceWorkerEmployee();
		pieceWorkerEmployee.setWagePerPieces(19.00);
		pieceWorkerEmployee.setNumberOfPiecesOfMerchandise(100);
		
		assertEquals(wagePerPiece, pieceWorkerEmployee.getWagePerPieces(), delta);
		assertEquals(numberOfPiecesMerchandise, pieceWorkerEmployee.getNumberOfPiecesOfMerchandise(), delta);
		assertEquals(employeeEarnings, pieceWorkerEmployee.pieceWorkerEmployeeEarnings(), delta);
	}
	
	//This runs test cases for BaseSalariedCommissionEmployee.java class
	@Test
	void BaseSalariedCommissionEmployeeTest() {
		double commissionRate = 20.00;
		double grossSales = 100.00;
		double commissionEmployeeEarnings = commissionRate * grossSales;
		double delta = 0.00;
		
		
		CommissionEmployee comissionemployee = new CommissionEmployee();
		comissionemployee.setCommissionRate(20.00);
		comissionemployee.setGrossSales(100.00);
		
		double baseSalary = 30000;
		double total = (commissionRate * grossSales) + baseSalary;
		
		BaseSalariedCommissionEmployee baseSalariedCommissionEmployee = new BaseSalariedCommissionEmployee();
		baseSalariedCommissionEmployee.setBaseSalary(30000);
		
		assertEquals(baseSalary, baseSalariedCommissionEmployee.getBaseSalary(), delta);
		assertEquals(total, baseSalariedCommissionEmployee.baseSalariedCommissionEmployeeEarnings(), delta);
		
		//assertEquals(commissionRate, comissionemployee.getCommissionRate(), delta);
		//assertEquals(grossSales, comissionemployee.getGrossSales(), delta);
		//assertEquals(commissionEmployeeEarnings, comissionemployee.commissionEmployeeEarnings(), delta);
		
	}

}

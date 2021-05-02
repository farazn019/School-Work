public class Project {
	
	private String projectName;
	private NewDate startDate;
	private NewDate finishDate = null;
	
	private Employee teamWorkingOnProject[];
	private int numPeopleWorkingOnProject = 0;
	
	public Project(String projectName, int startYear, int startMonth, int startDay, int sizeTeam) throws Exception{ 
		this.projectName = projectName;
		startDate = new NewDate(startDay, startMonth, startYear);
		if (sizeTeam < 1){
			throw new Exception("size of the team must be at least 1");
		}
		teamWorkingOnProject = new Employee[sizeTeam];
	}
	
	public void setFinishDate(NewDate finishDate){
		this.finishDate = finishDate;
	}
	
	public void addEmployeeToTeam(Employee newTeamMember){
		if (finishDate == null){
			teamWorkingOnProject[numPeopleWorkingOnProject] = newTeamMember;
			numPeopleWorkingOnProject++;
		}
	}
	
	public String getProjectNameAndStartDate(){
		return "Project " + projectName + " started on " + startDate.toString();
	}
	
	public String toString(){
		String outputString; 
		double totalSalaryPaidPerWeek = 0.0;
		double salaryOfEmployee;
		int employeeType;
		int hoursWorkedPerWeek;
		
		if (finishDate == null){
			outputString = getProjectNameAndStartDate() + "\n";
		} else {
			outputString = getProjectNameAndStartDate() + " and finished on "+ finishDate.toString() + "\n";
		}
		outputString += "The project has the following workers:\n";
		
		for (int index = 0; index < numPeopleWorkingOnProject; index++){
			outputString += teamWorkingOnProject[index].getEmployeeName() + "\n";
			employeeType = teamWorkingOnProject[index]. getEmployeeType();
			hoursWorkedPerWeek = teamWorkingOnProject[index]. getHoursWorkedPerWeek();
			if (employeeType == Employee.PLUMBER){
				salaryOfEmployee = hoursWorkedPerWeek * 25.00; 
			} else if (employeeType == Employee.MECHANIC){
				salaryOfEmployee = hoursWorkedPerWeek * 30.00; 
			} else {
				salaryOfEmployee = hoursWorkedPerWeek *20.00; 
			}
			totalSalaryPaidPerWeek += salaryOfEmployee;
		}
		outputString += "The total salary paid to all employees working on the project is " +totalSalaryPaidPerWeek + "\n";
		return outputString;
	}
}

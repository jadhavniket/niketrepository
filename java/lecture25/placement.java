class PICT{

	static int noOfCompanies = 150;
	int noOfITStudents = 4500;

	void studentsPlaced(){
		System.out.println("Total no of students hired = "+noOfITStudents);
	}

	static void cmpInfo(){
		System.out.println("Total companies visted = "+noOfCompanies);
	}
}

class SCOE{
	
	static int noOfCompanies = 220;
	int noOfITStudents = 6500;

	void studentsPlaced(){
		System.out.println("Total no of students hired = "+noOfITStudents);
	}

	static void cmpInfo(){
		System.out.println("Total no of companies visited = "+noOfCompanies);
	}
}

class PlacementsInfo{
	
	public static void main(String[] args){
	//PICT Placement Info
//	System.out.println("PICT Barclays Info");
	PICT barclays = new PICT();		//barclays
	barclays.noOfITStudents = 550;

	barclays.studentsPlaced();
	barclays.cmpInfo();

//	System.out.println("PICT Accenture Info");
	PICT accenture = new PICT();		//accenture
	accenture.noOfITStudents = 750;

	accenture.studentsPlaced();
	accenture.cmpInfo();
	
//	System.out.println("______________________________");
	
	//SCOE Placement Info
//	System.out.println("SCOE Infosys Info");
	SCOE infosys = new SCOE();		//infosys
	infosys.noOfITStudents = 970;

	infosys.studentsPlaced();
	infosys.cmpInfo();

//	System.out.println("SCOE Amazon Info");
	SCOE amazon = new SCOE();		//amazon
	amazon.noOfITStudents = 896;

	amazon.studentsPlaced();
	amazon.cmpInfo();
	}
}

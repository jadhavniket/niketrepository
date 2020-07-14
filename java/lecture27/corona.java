class Maharashtra{
	static int totalPositiveCases = 230600;
	int casesRecoverd = 0;

	void covidMahaStat(){
		System.out.println("Total covid cases in maharashtra = "+totalPositiveCases);
		System.out.println("Total covid cases recoverd in maharashtra = "+casesRecoverd);
	}
}

class Pune{
	static int totalPositiveCases = 33400;
	int casesRecoverd = 0;

	void covidPuneStat(){
		System.out.println("Total covid cases in Pune = "+totalPositiveCases);
		System.out.println("Total covid cases recoverd in Pune = "+casesRecoverd);
	}
}

class Government{
	
	public static void main(String[] args){

		Maharashtra july9 = new Maharashtra();
		july9.casesRecoverd = 127230;
		july9.covidMahaStat();
		
		Pune july10 = new Pune();
		july10.casesRecoverd = 15180;
		july10.covidPuneStat();

		july10.totalPositiveCases = 40000;

		Pune july11 = new Pune();
		july11.casesRecoverd = 17926;
		july11.covidPuneStat();

	}
}

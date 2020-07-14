class ChristopherNolan{
	String CN= "Christopher Nolan Movie :";
	int filmBudget = 18;
	
	static int boxOffice = 100;

	void displayMovieInfo(){
		System.out.println("The Dark Knight");
		System.out.println("Budget: "+filmBudget+" crores USD");
	}

	static void movieBusiness(){
		System.out.println("Business:"+boxOffice+" crores USD");
	}
}

class MartinScorsese{
	String MS= "Martin Scorsese Movie :";
	int filmBudget = 2;

	static int boxOffice = 5;

	void displayMovieInfo(){
		System.out.println("Goodfellas");
		System.out.println("Budget: "+filmBudget+" crores USD");
	}

	static void movieBusiness(){
		System.out.println("Business:"+boxOffice+" crores USD");
	}
}

class Cinema{

	public static void main(String[] a){
		ChristopherNolan obj1 = new ChristopherNolan();
		System.out.println(obj1.CN);
		obj1.filmBudget = 22;
		obj1.displayMovieInfo();
		obj1.movieBusiness();
		System.out.println("");
		
		MartinScorsese obj2 = new MartinScorsese();
		System.out.println(obj2.MS);
		obj2.filmBudget = 8;
		obj2.displayMovieInfo();
		obj2.movieBusiness();
	}
}

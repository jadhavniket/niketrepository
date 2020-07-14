class Kutumb{
	int mob = 1;
	int laptop = 1;
	static int tv = 1;

	void display(){
		System.out.println("In display");
	}
	static void statdisplay(){
		System.out.println("In stat display");
	}	
	public static void main(String[] args){
		Kutumb obj1 = new Kutumb();
		obj1.display();

		Kutumb.statdisplay();  //perfect way to write
		statdisplay();		// this too is correct
	
	}
}


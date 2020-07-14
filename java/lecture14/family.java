import java.lang.*;
class Family{			//extends Object
		//Constructor
	//Instance variable
	int mobile = 1;
	int laptop = 1;

	//Static variable
	static int fridge = 1;

	//Static block
	static{
		System.out.println(".............WELCOME...........");
	}

	//Static method
	static void kutumb(){

		System.out.println("=====>= WE ARE FAMILY <======");
	}
	
	//Instance method
	void Father(){

		System.out.println("In father method");
		System.out.println("My Mobile = "+mobile);
		System.out.println("My Laptop = "+laptop);
		System.out.println("Our Family fridge = "+fridge);
	}

	void Mother(){	

		System.out.println("In Mother method");
		System.out.println("My Mobile = "+mobile);
		System.out.println("My Laptop = "+laptop);
		System.out.println("Our Family fridge = "+fridge);
	}

	void Son(){
		
		System.out.println("In Son method");
		System.out.println("My Mobile = "+mobile);
		System.out.println("My Laptop = "+laptop);
		System.out.println("Our Family fridge = "+fridge);
	}
	
}

class Parivar{ 		//extends Object

	//constructor

	void in(){

	System.out.println("In PARIVAR");
}

	public static void main(String[] args){
		Family.kutumb();

		Parivar fam = new Parivar();
		fam.in();

		Family obj1 = new Family();
		obj1.fridge = 0;
		obj1.Father();

		Family obj2 = new Family();
		obj2.mobile = 2;
		obj2.Mother();

		Family obj3 = new Family();
		obj3.laptop = 3;
		obj3.Son();
	
	}
}

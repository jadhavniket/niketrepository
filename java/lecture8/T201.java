class T201{
	static String capt="Virat kohli";
		int toss=0;
	
	static void list(){	
		System.out.println(capt);
		System.out.println("Player list");
		T201 obj = new T201();
		System.out.println(obj.toss);
	}

	static{
	
		System.out.println("In static"); 
	}

	void batorBowl(){
		System.out.println("Decision");
		System.out.println(capt);
		System.out.println(toss);
	}

	public static void main(String[] args){	
		System.out.println("In main");
		list();
		T201 obj1 = new T201();
		obj1.batorBowl();
	}
}
/*Higher to lower priority
 Static block
 Static variable
 Static method

 Non-static block(instance)
 Non-static variable(instance)
 Non-static method(instance)*/

/*class Kutumb{
	int mob = 1;
	int laptop = 1;
	static int tv = 1;

	void shashiMethod(){
	System.out.println("Mob="+mob);
	System.out.println("laptop="+laptop);
	System.out.println("tv="+tv);
	}

	void vikasMethod(){
	System.out.println("Mob="+mob);
	System.out.println("laptop="+laptop);
	System.out.println("tv="+tv);
	}

	public static void main(String[] args){
	Kutumb obj1 = new Kutumb();
	obj1.shashiMethod();

	Kutumb obj2 = new Kutumb();
	obj2.vikasMethod();
	}
}*/

class kutumb{
	int mob = 1;
	int laptop = 1;
	static int tv = 1;

	void shashiMethod(){
	System.out.println("Mob = "+mob);
	System.out.println("laptop = "+laptop);
	System.out.println("tv = "+tv);
	}

	void vikasMethod(){	
	System.out.println("Mob = "+mob);
	System.out.println("laptop = "+laptop);
	System.out.println("tv = "+tv);
	}

	public static void main(String[] args){
	kutumb shashi = new kutumb();
	shashi.tv = 0;
	shashi.shashiMethod();

	kutumb vikas = new kutumb();
	vikas.vikasMethod();
	}
}


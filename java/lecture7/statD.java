class kutumb{
	int mob = 1;
	int laptop = 1;
	static int tv = 1;

	void display(){
	System.out.println("In display");
	}

	static void statDisplay(){
	System.out.println("In stat Display");
	}
}

class StaticDemo{
public static void main(String[] args){
kutumb obj1 = new kutumb();
obj1.display();

kutumb.statDisplay();
statDisplay(); //error
}
}

class cOVID19{  //Object is parent of COVID19
	//constructor
	//	COVID19 is constructor

}

class Lockdown4 extends cOVID19{
	Lockdown4(){
		//super
		System.out.println("In constructor");
	}
	public static void main(String[] args){
		Lockdown4 obj = new Lockdown4();
		System.out.println("Lockdown is extended");
	}
}

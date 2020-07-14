import java.lang.*;

class NiketJadhav{	//exdends Object -- Parent
	
	/*Constructor
	 *  super();
	 * 	NiketJadhav -- Class name and constructor name is same
	
	//Class name starts with Capital letters of a word
	/*eg -  System
	 *	PrintStream
	 *	NisargaVadal
	*/


	int MyAge = 22;
	    
	    //Variable name should be camel case
	    /* eg - friendAge
	     * 	    fAge
	     * 	    niketJadhav
	    */

	void myName(){		
		
		//Function name has first word letter small & 2nd capital
		/*eg -	getData
		 * 	getSuperclass
		*/
		
		System.out.println("Hello I'm Niket..!");

	}
	public static void main(String[] args){
		NiketJadhav obj = new NiketJadhav();	//Here is also invoke special when we create object, it points to the constructor of class
		obj.myName();
		System.out.println("I am "+obj.MyAge+" years old");

	}
}

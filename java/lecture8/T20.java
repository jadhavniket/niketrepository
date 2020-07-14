class T20{
	static String capt="Virat kohli";
		int toss=0;
	
	static void list(){
		System.out.println("Player list");
	}

	void batorBowl(){
		System.out.println("Decision");
	}

	public static void main(String[] args){
		System.out.println(capt);
		T20 obj = new T20();	
		System.out.println(obj.toss);
	}
}

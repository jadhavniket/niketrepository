class CoronaMaha{
	int count = 123456;
	
	void precaution(){
		System.out.println("Kalji ghya");
		System.out.println("Count = " +count);
	}

	static void impDecision(){
		System.out.println("CM Decision");
	}

	public static void main(String[] args){
		CoronaMaha Jun28 = new CoronaMaha();
		Jun28.precaution();
		Jun28.impDecision();

		CoronaMaha Jun29 = new CoronaMaha();
		Jun29.count = 98765;
		Jun29.precaution();
	}
}

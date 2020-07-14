class mummy{
	void kitchen(){
		System.out.println("Dhokla banvtey");
	}
	void aangan(){
		System.out.println("Angan zadtaey");
	}
}
class news{
	void lockdown(){
		System.out.println("Covid-19");
	}
	void bass(){
		System.out.println("bass ata bc");
	}
	public static void main(String args[]){
		news corona=new news();
		news corona1=new news();
		
		mummy kaam=new mummy();
		mummy kaam2=new mummy();
		
		corona.lockdown();
		corona1.bass();


		kaam.kitchen();
		kaam2.aangan();


	}
}

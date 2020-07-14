class ExamsCancle{
	int x = 10;
	static int y = 20;
	int z = 30;

	void happy(){
		System.out.println("Thanks CM");
	}

	static void decisionPending(){
		System.out.println("Angry Faces");
	}
}

class Students{
	public static void main(String[] args){
		ExamsCancle obj = new ExamsCancle();
		obj.happy();

		ExamsCancle.decisionPending();

		System.out.println(ExamsCancle.y);

		ExamsCancle obj1 = new ExamsCancle();
		System.out.println(obj1.x);
		System.out.println(obj1.z);
	}
}

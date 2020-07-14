#include<stdio.h>
void main(){
	int marks = 80;
//	int marks = 60;
//	int compMarks = 90;
	int compMarks = 75;

	if(marks > 70){
		printf("FC/Modern:\n");

		if(compMarks > 80){
		printf("FC BCS\n");
		}
		else {
			printf("Modern BCS\n");
		}
	}
	
	else{
		printf("Sports\n");
	}
	printf("Out of if-else\n");
}

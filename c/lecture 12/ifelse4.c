#include<stdio.h>
void main(){
	int marks = 90;
//	int marks = 85;
//	int marks = 75;
//	int marks = 50;

	if(marks >= 90){
		printf("FC\n");
	}

	else if(marks >= 80 && marks <= 90){
		printf("Modern\n");
	}

	else if(marks >= 70 && marks <= 80){
		printf("Garware\n");
	}
	else{
		printf("Jaikranti\n");
	}
}

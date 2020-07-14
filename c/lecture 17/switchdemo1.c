#include<stdio.h>
void main(){
	int ch;
	printf("Enter your hotel choice:\n");
	printf("1: Subu's poona excellence\n");
	printf("2: Westin pune\n");
	printf("3: JW Maroit pune\n");
	printf("4: Hyatt Pune:\n");

	scanf("%d",&ch);

	switch(ch){
		case 1:{
		       printf("Welcome to Subu's poona excellence\n");
		       }
		       break;
		case 2:{
		       printf("Welcome to Westin Pune\n");
		       }
		       break;
		case 3:{
		       printf("Welcome to JW Mariot Pune\n");
		       }
		       break;
		case 4:{
		       printf("Welcome to Hyatt Pune\n");
		       }
		       break;
		default:
		       printf("Wrong choice\n");
	}
}

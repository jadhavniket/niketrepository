#include<stdio.h>
void main(){
	char ch = 'd';
	
	switch(ch){
		case 'A':
			printf("case A\n");
			break;
		case 'B':
			printf("case B\n");
			break;
		case 'C':
			printf("case C\n");
			break;
		case 'D':
			printf("case D\n");
			break;
		default:
			printf("No match found\n");
			break;
	}

}

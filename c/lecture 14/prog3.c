#include<stdio.h>
void main(){
	char ch = 65;
	
	switch(ch){
		case 'A':
			printf("case A\n");
		case 'B':
			printf("case B\n");
		case 'a':
			printf("case a\n");
		case '65':
			printf("case '65'\n");
	}
	printf("Out of switch\n");

}

#include<stdio.h>
void main(){
	int a = 20;
	int b = 30;

	switch(a){
		case 20:
			printf("In first case\n");
			break;
/*		case 2:
			printf("In first(second) case\n");*/
	}

	printf("Out of first case\n");

	switch(b){
		case 30:
			printf("In second case\n");
			break;
/*		case 3:
			printf("In second(second) case\n");*/
	}

	printf("Out of second case\n");
}

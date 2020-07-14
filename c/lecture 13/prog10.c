#include<stdio.h>
void main(){
	int a = 1;
	char ch = 's';
	float f = 20.5;

	switch(a){
		case 1:
			printf("In integer\n");
			break;
	}

	switch(ch){
		case 's':
			printf("In character\n");
	}
/*
	switch(f){
		case 20.5:
			printf("In float\n");
	}
*/
	printf("Outside switch\n");
}

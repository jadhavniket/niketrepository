#include<stdio.h>
void main(){
	char ch = '*';
	int a = 10;
	int b = 20;
	switch(ch){
		case '*':{
				printf("%d\n",a + b);
			}
			break;

		case '#':{
				printf("%d\n",a - b);
			}
			break;
		default:
			printf("Welcome to default\n");
		}
	printf("Out of switch\n");
}

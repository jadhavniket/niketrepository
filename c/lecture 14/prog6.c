#include<stdio.h>
void main(){
	int a = 10;
	switch(a){
		case 10:{
				int x = 5;
				int y = 3;
				printf("%d\n",x+y);
			}
			break;

		case 11:{
				int x = 3;
				int y = 3;
				printf("%d\n",x+y);
			}
			break;
		}
	printf("Out of switch\n");
}

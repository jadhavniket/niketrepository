#include<stdio.h>
void main(){
	int x,y;
	printf("Enter two values:\n");
	scanf("%d %d",&x,&y);
	if(x > y){
		printf("x is greater\n");
	}

	else if(x == y){
		printf("both equal values\n");
	}

	else{
		printf("y is greater\n");
	}
	printf("Out of if\n");
}

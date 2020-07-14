#include<stdio.h>
void main(){
	int x,y,z;
	printf("Enter three number to compare:\n");
	scanf("%d %d %d",&x,&y,&z);

	if(x > y){
		if (x > z){
			printf("x is greater\n");
		}
		else{
			printf("z is greater\n");
		}
	}
	
	else{
		if(y > z){
			printf("y is greater\n");
		}
		else{
			printf("z is greater\n");
		}
	}
	
}

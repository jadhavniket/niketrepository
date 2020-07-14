#include<stdio.h>
void main(){
	int num;
	printf("Enter number:\n");
	scanf("%d",&num);

	if(num>=25 && num<=50){
		printf("%d is between 25 to 50\n",num);
	}

	else{
		printf("%d not ranges from 25 to 50\n",num);
	}
}

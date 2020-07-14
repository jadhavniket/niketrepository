#include<stdio.h>
void main(){
	int number1, number2;
	printf("Enter two numbers:\n");
	scanf("%d %d",&number1,&number2);

	if(number1>=number2){

		if(number1==number2){
			printf("%d = %d\n",number1,number2);
		}

		else{
			printf("%d > %d\n",number1,number2);
		}
	}

	else{
		printf("%d < %d\n",number1,number2);
	}

}

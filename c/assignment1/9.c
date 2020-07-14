#include<stdio.h>
void main(){
	int number = 10;

	if(number!=0 && number>0){
		printf("%d number is positive\n",number);
		number = -5;
	}

	if(number<0){
		printf("%d number is negative\n",number);
		number = 0;
	}

	if(number==0){
		printf("number is zero\n");
		number = 15;
	}

	if(number%4==0){
		printf("%d number is divisible by 4\n",number);

}
}

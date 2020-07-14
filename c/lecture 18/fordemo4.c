#include<stdio.h>
void main(){
	int ch;
	printf("Enter your choice\n");
	printf("1. Print 1 to 20 numbers\n");
	printf("2. Print even or odd(1 to 20)\n");
	printf("3 .Print if 1 to 20 numbers are divisible by 3 or not\n");
	scanf("%d",&ch);

	switch(ch){
		case 1:{
		       for(int i = 1; i <= 20; i++){
		       	printf("%3d\n",i);
		       }
		       }
			break;
		case 2:{
		       for(int i = 1; i <= 20; i++){
		       	if(i%2==0){
				printf("Even = %2d\n",i);
			} else {
				printf("Odd = %3d\n",i);
		       }
		       }
	       	       }
			break;
		case 3:{
		       for(int i = 1; i <= 20; i++){
		       	if(i%3==0){
				printf("%d divisible by 3\n",i);
			} else {
				printf("%d is not divisible by 3\n",i);
			}
		       }
		       }
		       break;
	}
}

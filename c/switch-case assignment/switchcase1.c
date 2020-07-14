#include<stdio.h>
void main(){
	int num;
	printf("Enter number from 0 to 5: ");
	scanf("%d",&num);

	if (num<=5){
		if(num==0)
			printf("Zero\n");
		if(num==1)
			printf("One\n");
		if(num==2)
			printf("Two\n");
		if(num==3)
			printf("Three\n");
		if(num==4)
			printf("four\n");
		if(num==5)
			printf("five\n");

	} else {
		printf("%d is greater than 5\n",num);
	}
}

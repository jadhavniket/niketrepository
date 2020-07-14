#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);

	if(num1 >= 0 && num2 >= 0){
		int ans;
		ans = num1 + num2;
		printf("answer = %d\n",ans);
	} else {
		printf("Sorry negative number entered\n");
	}
}

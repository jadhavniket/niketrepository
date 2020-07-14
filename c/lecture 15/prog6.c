#include<stdio.h>
void main(){
	int a,b,ans;
	printf("Enter two number:\n");
	scanf("%d %d",&a,&b);
	printf("num1 = %d num2 = %d\n",a,b);
	
	ans = a + b;
	printf("addition = %d\n",ans);

	ans = a - b;
	printf("substraction = %d\n",ans);

	ans = a * b;
	printf("Multiplication = %d\n",ans);

	ans = a / b;
	printf("Division = %d\n",ans);
}

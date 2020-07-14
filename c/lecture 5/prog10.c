#include<stdio.h>
void main(){
	int a = 3, b = 5;

	b = ++b + b++ + b++ + ++b;
	printf("%d\n",b);

	a = a++ + ++a + a++ + ++a;
	printf("%d\n",a);
}

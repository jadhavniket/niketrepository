#include<stdio.h>
void main(){
	int a = 3, b = 2,ans = 0;
	ans = (++b + b++)  * (++a + a++);
	printf("%d %d %d\n",a,b,ans);
}

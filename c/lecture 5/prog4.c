#include<stdio.h>
void main(){
	int a = 7,ans = 0;
	ans = ++a + ++a + ++a;
	printf("%d %d\n",a,ans);
}

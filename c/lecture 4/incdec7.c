#include<stdio.h>
void main(){
	int a = 10, b = 20, ans = 0;
	ans = --a + b++ + a-- + --b;
	printf("%d %d %d\n",a,b,ans);
}

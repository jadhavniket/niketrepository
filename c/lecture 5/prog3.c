#include<stdio.h>
void main(){
	int b = 8,ans = 0;
	ans = --b + --b + --b;
	printf("%d %d\n",b,ans);
}

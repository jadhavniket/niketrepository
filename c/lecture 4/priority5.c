#include<stdio.h>
void main(){
	int a=5, b=6, c=7, ans=0;
	ans = a + b / c - a * b;
		//a + b / c - a * b
		//5 + 0 - (5*6)
		//5 + 0 - 30
		//5 - 30
		//-25
	printf("%d\n",ans);
}

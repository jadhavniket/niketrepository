#include<stdio.h>
void main(){
	int a=3, b=7, c=3, d=8, ans=0 ;
	ans = a+b%c*d-a/b*d;
		//a+((b%c)*d)-((a/b)*d)
		//a+(1*8)-((0)*8)
		//3+(8)-(0)
		//3+8
		//11

	
	printf("%d\n",ans);
	
}

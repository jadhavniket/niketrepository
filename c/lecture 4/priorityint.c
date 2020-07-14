#include<stdio.h>
void main(){
	int a=5, b=9, c=2, ans=0;	
	ans = a+b-c/a*b;
		//a+b-((c/a)*b)
		//a+b-((0)*b)
		//a+b-(0)
		//5+9
		//14
	printf("%d\n",ans);
}

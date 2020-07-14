#include<stdio.h>
void main(){
	float a=5, b=9, c=2, ans=0;
	ans = a+b-c/a*b;
		//a+b-((c/a)*b)
		//a+b-(0.4*b)
		//a+b-3.6
		//14-3.6
		//10.4
	printf("%f\n",ans);
}

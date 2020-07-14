#include<stdio.h>
void main(){
	int x = 5, ans = 0;
	ans = x++ + ++x;
	printf("%d\n",ans);
}

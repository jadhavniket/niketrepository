#include<stdio.h>
void main(){
	int x = 3, y = 0,ans = 0;
	ans = x && y;
	printf("%d %d %d\n",x,y,ans);		//x=3 y=0 ans=0
	ans = x || y;
	printf("%d %d %d\n",x,y,ans);		//x=3 y=0 ans=1
}

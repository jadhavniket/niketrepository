#include<stdio.h>
void main(){
	int x = 5,y = 5, ans = 0;
	ans = ++x && y++;
	printf("%d %d %d\n",x,y,ans);
}

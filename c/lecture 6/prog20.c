#include<stdio.h>
void main(){
	int x = 0, y = 6, z = 0, p = 1,ans = 0;
	ans = x++ && y++ && ++z || p--;
	printf("%d %d %d %d %d\n",x,y,z,p,ans);
}

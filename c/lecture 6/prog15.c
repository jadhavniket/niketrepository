#include<stdio.h>
void main(){
	int x = 2, y = 6, z = 6, ans = 0;
	ans = x || y++ && z++;
	printf("%d %d %d %d\n",x,y,z,ans); // 2 6 6 1
}

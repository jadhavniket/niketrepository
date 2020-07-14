#include<stdio.h>
void main(){
	int x = 0, y = 6, z = 6, ans = 0;
	ans = x && y++ || z++;
	printf("%d %d %d %d\n",x,y,z,ans); // 0 6 7 1
}

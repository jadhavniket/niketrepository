#include<stdio.h>
void main(){
	int x = 0, y = 1, z = 0, p = 1, q = 1, ans = 0;
	ans = x++ || y++ && z++ || --p && q;
	printf("%d %d %d %d %d %d\n",x,y,z,p,q,ans);
}

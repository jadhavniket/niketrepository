#include <stdio.h>
void main(){
	int x = 10;
	const int y = 20;
	printf("%d\n%d\n",x,y);
	x = x+1;
	y = y+1;
	printf("%d\n%d\n",x,y);
}

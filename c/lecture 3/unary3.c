#include <stdio.h>
void main(){
	int x = 10;
	int y = 20;
	x = x++ + ++x;
	y = y-- + --y;
	printf("%d\n",x);
	printf("%d\n",y);
}

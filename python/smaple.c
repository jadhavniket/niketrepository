#include <stdio.h>
void main(){
	int x = 10;
	const y = 20;
	printf("%d\n%d\n",x,y);
	y = y+1;
	printf("%d\n",y);
}

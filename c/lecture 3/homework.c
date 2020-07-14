#include <stdio.h>
void main(){
	int x = 1;
	int y = 2;
	const int z = 3;
	const int w = 4;
	printf("%d\n%d\n%d\n%d\n",x,y,z,w);
	x = x + 1;
	y = y + 1;
	z = z + 1;
	w = w + 1;
	printf("%d\n%d\n%d\n%d\n",x,y,z,w);
}

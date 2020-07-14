#include<stdio.h>
void main(){
	extern int a;
//	printf("%d\n",a);
	printf("%ld\n",sizeof(a));
}

/*#include<stdio.h>
void main(){
	int i = 3,j;
	j = i++;
	printf("%d %d\n",i,j);


#include<stdio.h>
void main(){
	int i = -1;
	int j = 1;
	int m;
	m = i && j;
	printf("%d %d %d\n",i,j,m);
}

#include<stdio.h>
void main(){
	int i = -30, j = 20, k = 1, m;
	m = ++i && ++j && --k;
	printf("i = %d j = %d k = %d m = %d \n",i,j,k,m);
}


#include<stdio.h>
void main(){
	int i = -3, j = 2, k = 0, m;
	m = ++i && ++j && ++k;
	printf("i = %d j = %d k = %d m = %d\n",i,j,k,m);
}


#include<stdio.h>
void main(){
	printf("%x\n",2<<2);

}
*/

#include<stdio.h>
void main(){
	int i = -3,j = 2, k = 0, m;
	m = ++ i || ++ j && ++ k;
	printf("%d %d %d %d\n",i,j,k,m);
}

#include<stdio.h>
void main(){
	for(int i = 1; i <= 10 ; i++){
		if(i%2==0){
			printf("Even = %1d\n",i);
		} else {
			printf("Odd = %2d\n",i);
		}
	}
}

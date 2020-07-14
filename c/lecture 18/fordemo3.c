#include<stdio.h>
void main(){
	for(int i = 1; i <= 50; i++){
		if(i%5==0){
			printf("%2d is divisble by 5\n",i);
		} /*else {
			printf("%d is not divisible by 5\n",i);
		}*/
	}
}

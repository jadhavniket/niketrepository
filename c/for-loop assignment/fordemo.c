#include<stdio.h>
void main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	for(int i = 1; i<=30; i++){
		if(i%n==0){
			printf("%d\n",i);
		}
	}
}

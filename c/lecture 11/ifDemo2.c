#include<stdio.h>
void main(){
	int a = 5;
	int b = 10;
	int c = 0;

	if(a && b){
		printf("Core2web\n");
	}

	if(b && c){
		printf("BiEncaps\n");
	}

	if(c && a){
		printf("Amazon\n");
	}

	if(a || b){
		printf("Apple\n");
	}

	if(b || c){
		printf("Google\n");
	}

	if(c || a){
		printf("Microsoft\n");
	}
}

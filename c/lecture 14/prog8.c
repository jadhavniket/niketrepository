#include<stdio.h>
void main(){
	char ch = '>';
	switch(ch){
		case '<':{
			int a = 5, b = 0;
			switch(a && b){
				case 0:
					printf("True for a && b\n");
					break;
				case 1:
					printf("False for a && b\n");
					break;
				}
			}
			 break;
			 
		case '>':{
			int p = 5, q = 0;
			switch(p || q){
				case 0:
					printf("True for p || q\n");
					break;
				case 1:
					printf("False for p || q\n");
					break;
			}
		}
		break;

		default:
			 printf("No matches\n");
			 break;
	}
}

#include<stdio.h>
void main(){
	char ch;
	printf("Enter:\n");
	scanf("%c",&ch);

	if (ch >= 'A'  && ch <= 'Z'){
		printf("Upper case\n");
	}
	else if(ch >= 'a' && ch <= 'z') {
		printf("Lower case\n");
	}
	
	else{
		printf("%c is Special characters\n",ch);
	}
	
}


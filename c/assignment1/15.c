#include<stdio.h>
void main(){
	char c;
	printf("Enter an alphabet:\n");
	scanf("%c",&c);

	if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
		printf("%c is a vowel\n",c);
	}
	else{
		printf("%c is constant\n",c);
	}
}

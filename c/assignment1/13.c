#include<stdio.h>
void main(){
	float n1,n2,n3;
	printf("Enter n1, n2, n3:\n");
	scanf("%f %f %f",&n1, &n2, &n3);

	if(n1 >= n2 && n1 >= n3){
		printf("Largest number: %d\n",n1);
	}

	if(n2>=n1 && n2>=n3){
		printf("Largest number: %d\n",n2);
	}
		
	if(n3>=n1 && n3>=n2){
		printf("Largest number: %d\n",n3);
	}
}

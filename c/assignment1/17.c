#include<stdio.h>
void main(){
	int n1, n2, n3;
	printf("Enter n1, n2, n3:\n");
	scanf("%d %d %d",&n1, &n2, &n3);

	if(n1 >= n2 && n1 >= n3){
		if(n1%2!=0){
			printf("Largest number is %d and %d is odd\n",n1,n1);
		}
	}

	if(n2>=n1 && n2>=n3){
		if(n2%2!=0){	
			printf("Largest number is %d and %d is odd\n",n2,n2);
		}
	}
		
	if(n3>=n1 && n3>=n2){
		if(n3%2!=0){	
			printf("Largest number is %d and %d is odd\n",n3,n3);
		}
	}

}

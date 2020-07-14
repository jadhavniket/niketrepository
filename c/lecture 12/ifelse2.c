#include<stdio.h>
void main(){
//	int corona = 0;
	int corona = 1;
//	int precautions = 0;
	int precautions = 1;

	printf("Covid Regulations :\n");
	if(corona == 0){
		if(precautions == 0)
		printf("Lockdown will not  end soon...\nPrecautions must be taken...\n");
	}
	else{
		if(corona == 1 && precautions == 1){	
		printf("Covid will be defeted...\nContinue taking precautions\n");
		}
	
	}
}

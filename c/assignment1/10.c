#include<stdio.h>
void main(){
	int aNum = 0;
	char aChar;
	
	if(!aNum){
		printf("Inside first if..\n");
		aNum += 20;
		aChar = 'T';
	}


	if(aNum%4 != 0){
		printf("Inside second if..\n");
		aNum -= 20;
		aChar = 'F';
	}

	if(aNum == 0){
		printf("Inside Third if..\n");
		aChar = 'T';
	}
	
	printf("After all if, values are...,%d & %c\n",aNum,aChar);
}

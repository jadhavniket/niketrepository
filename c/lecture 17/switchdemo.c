#include<stdio.h>
void main(){
	int x,y,ch;
	printf("Enter two numbers:\n");
	scanf("%d %d",&x,&y);

	printf("Enter choice\n");
	printf("1:Add\n");
	printf("2:Sub\n");
	printf("3:Mul\n");
	printf("4:Div\n");

	scanf("%d",&ch);

	switch(ch){
		case 1:{
		       printf("Add: %d\n",x+y);
		       }
		       break;
		case 2:{
		       printf("Sub: %d\n",x-y);
		       }
		       break;
		case 3:{
		       printf("Mul: %d\n",x*y);
		       }
		       break;
		case 4:{
		       printf("Div: %d\n",x/y);
		       }
		       break;
		default:
		       printf("Wrong choice\n");
		       break;
	}


}

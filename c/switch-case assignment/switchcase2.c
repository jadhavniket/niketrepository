#include<stdio.h>
void main(){
	int num,a;
	printf("Enter number of month: ");
	scanf("%d",&num);

	switch(num){
		case 1:
			printf("January has 31 days\n");
			break;
		case 2:{
				int year;
			 	printf("Enter year of februay: ");
				scanf("%d",&year);

				if(year % 4 == 0) {
					printf("February is of 29 days in %d\n",year);
				} else {
					printf("February is of 28 days in %d\n",year);
				}
		       }
		       break;
		case 3:
			printf("March has 31 days\n");
			break;
		case 4:
			printf("April hay 30 days\n");
			break;
		case 5:
			printf("May has 31 days\n");
			break;
		case 6:
			printf("June has 30 days\n");
			break;
		case 7:
			printf("July has 31 days\n");
			break;
		case 8:
			printf("August has 31 days\n");
			break;
		case 9:
			printf("September has 30 days\n");
			break;
		case 10:
			printf("October has 31 days\n");
			break;
		case 11:
			printf("November has 30 days\n");
			break;
		case 12:
			printf("December has 31 days\n");
			break;
		default:
			printf("Enter valid month number\n");
			break;
	}
}

#include<stdio.h>
void main(){
	int hours,minutes,hrs,total;
	printf("Enter hours: ");
	scanf("%d",&hours);

	printf("Enter minutes: ");
	scanf("%d",&minutes);

	hrs = hours*60;
	total = hrs + minutes;

	printf("Total minutes: %d\n",total);

}

#include<stdio.h>
void main(){
	int radius;
	float area,circumference;
	printf("Enter radius: ");
	scanf("%d",&radius);

	area = 3.14 * radius * radius;
	circumference = 2 * 3.14 * radius;

	printf("Area of circle: %0.2f\n",area);
	printf("Circumference of circle: %0.2f\n",circumference);

}

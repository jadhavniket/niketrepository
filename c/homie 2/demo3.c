#include<stdio.h>
void main(){
	int age=20;
	char name='N';
	float weight=50.56;
	double height=5.56;
	printf("%ld\n",sizeof(age));
	printf("%ld\n",sizeof(name));
	printf("%ld\n",sizeof(weight));
	printf("%ld\n",sizeof(height));
	printf("Age of student=%d\n",age);
	printf("Name of student=%c\n",name);
	printf("Weight of student=%f\n",weight);
	printf("Height of student=%lf\n",height);


}

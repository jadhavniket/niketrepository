#include<stdio.h>
void main(){
	float fhar,cels;
	float lower,upper,steps;

	lower = 0.0;
	upper = 300.0;
	steps = 20.0;

	fhar = lower;
	while (fhar <= upper){
		cels = (fhar-32.0)*5.0/9.0;
		printf("%3.0f\t%6.1f\n",fhar,cels);
		fhar = fhar + steps;
	}
}

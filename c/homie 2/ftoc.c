#include<stdio.h>
void main(){

	/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300 */
	int fhar,cels;
	int lower,upper,step;

	lower = 1;		/* lower limit of temperature scale */
	upper = 300;		/* upper limit */
	step = 20;		/* step size */

	fhar = lower;
	while (fhar <= upper){
		cels = (fhar-32)*5/9;
		printf("%d\t %d\n",fhar,cels);
		fhar = fhar + step;
	}
	printf(".......End of while loop and program.......\n");
}

#include<stdio.h>
void main(){
	int math,sci,eng,geo,his,choice,total;
	printf("Enter marks of the following subjects out of 100:\n");
	
	printf("Math:\n");
	scanf("%d",&math);
	
	printf("Science:\n");
	scanf("%d",&sci);
	
	printf("English:\n");
	scanf("%d",&eng);
	
	printf("Geography:\n");
	scanf("%d",&geo);
	
	printf("History:\n");
	scanf("%d",&his);
	
	
	if(math >= 40 && sci >= 40 && eng >= 40 && geo >= 40 && his >= 40){

		total = math+sci+eng+geo+his;
		printf("Total = %d\n",total);
	
		printf("Enter 1 to see Result:\n");
		scanf("%d",&choice);

		switch(choice){
			case 1:{
			
				int total;
				total = math+sci+eng+geo+his;
		       
					if(total >= 350){
		       				printf("First class\n");
		       			}
		       			else{
		       				printf("Second class\n");
		      		 	} 
			       }
			} 
	}
		
	else {
		printf("Failed\n");
	}
}

#include<stdio.h>

int main()

{
	int hindi,math,english,science,art,
	total;
	float percentage;
		
	printf("Enter the marks of hindi: ");
	scanf("%d",&hindi);
	
	printf("Enter the marks of math: ");
	scanf("%d",&math);
	
	printf("Enter the marks of english: ");
	scanf("%d",&english);
	
	printf("Enter the marks of science: ");
	scanf("%d",&science);
	
	printf("Enter the marks of art: ");
	scanf("%d",&art);
	
	total=hindi+math+english+science+art;
	
	percentage=total/5;
	
	printf("\nAggregate marks: %d", total); printf("\nPercentage marks: %0.2f %%", percentage);
		
return(0) ;
}
	
	
	
	
	
	
	
	


 

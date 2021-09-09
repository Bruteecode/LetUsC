#include <stdio.h>
 
int main()
{
int x1,y1;
printf("Enter the value of coordinates\n");
scanf("%d %d",&x1,&y1);

	if(x1==0 && y1!=0)
	printf("the points lies on x-axis");
	
	else if(x1!=0 && y1==0)
	printf("the point lies on y-axis");
	
	else if(x1==0 && y1==0)
	printf("the point lies on origin");
	else
	printf("the point lies neither on x-axis and y-axis");
		return 0;
}
 

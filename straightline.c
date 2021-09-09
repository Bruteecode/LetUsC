#include <stdio.h>
 
int main()
{
	int x1,y1,x2,y2,x3,y3,area;
	
	printf("the values of x-coordinates x1,x2,x3");
	scanf("%f %f %f",&x1,&x2 &x3);
	
	printf("the values of y-coordinates y1,y2,y3");
	scanf("%f %f %f",&y1,&y2 &y3);
	
	area=1/2*[*(x1*y2+x2*y3+x3*y1)-(x1*y3+x3*y2+x2*y1)];
	 
	if(area==0)
	printf("the points fall on a straight line");
	
	else
	printf("the points do not fall on a straight line");
return 0;
}
 

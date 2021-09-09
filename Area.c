#include <stdio.h>
 
int main()
{
	int length,breadth,radius;
	float area,perimeter,areac,cc;
	length=2;
	breadth=10;
	radius=5;
	
	printf("The length and breadth and radius");
	scanf("%d,%d,%d,&length,&breadth,&radius");
	
	perimeter=2*(length+breadth);
	area=length*breadth;
	cc=2*3.14*radius;
	areac=3.14*radius*radius;

	printf("The perimeter of rectangle is,%f\n",perimeter);
	
		printf("The area of rectangle is,%f\n",area);
		
	printf("The area of circle is,%d\n",areac);
	
	printf("The circumference of circle is,%f\n",cc);
	
	return 0;
}
 

#include <stdio.h>
 
int main()
{
 int length,breadth,Area,perimeter;

 printf("Enter the value of length\n");
 scanf("%f",&length);
 
 printf("Enter the value of breadth\n");
 scanf("%f",&breadth);
 
 Area=length*breadth;
 perimeter=2*(length+breadth);
 
 if(Area>perimeter)
 printf("Area is greater than perimeter");
 else
 printf("perimeter is greater than Area");
 return 0;
}

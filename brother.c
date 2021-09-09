#include <stdio.h>
 
int main()
{
	int Ram,shyam,Ajay;
	printf("Enter the ages of Ram,shyam,Ajay \n" );
	scanf("%d%d%d",&Ram,&shyam,&Ajay);
	
if(Ram>Ajay && shyam>Ajay)
printf("Ajay is the youngest");

else if(Ajay>Ram && shyam>Ram)
printf("Ram is the youngest");

else if(Ram>shyam && Ajay>shyam)
printf("shyam is the youngest");	
	return 0;
}
 

#include<stdio.h>
int main()
{ 
	float km, m,f,in,cm;
	printf("distance in km");
	scanf("%f,&km");
	km=2;
	
	/*calculate the conversion*/

	m=km*1000;
	cm=km*1000*100;
	f=km*3280.84;
	in=km*39370.08;
	printf("the distance in meters:%f\n",m);
	printf("the distance in centimeters:%f\n",cm);
	printf("the distance in feet:%f\n",f);
printf("the distance in inches:%f\n",in);
	 return(0);
}

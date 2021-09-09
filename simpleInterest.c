/* Calculation of simple interest */
	/* Author:gekay Date:25/06/2016*/
		#include <stdio.h>
		
		int main()
		{

			float r,si,p,n;
			
			p=1200.36;
			n=1.5;
			r=2.2;
			
			/*formula for simple interst*/
				si=p*n*r/100;
				
				printf ("%f\n",si);
				return 0;
				}
 

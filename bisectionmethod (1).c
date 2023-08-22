#include<stdio.h>
#include<math.h>
#define F(x) (x*x*x-9*x+1)


int main ()

{
	
int i=1;
//float error=0.001;
float x1,x2,x0,y1,y2,y0;
printf ("Enter the value of x1:");
scanf("%f",&x1);
printf ("Enter the value of x2:");
scanf("%f",&x2);


do
{
	x0=(x1+x2)/2;
	y0=F(x0);
	
	printf ("\n i=%d    x1=%f    y1=%f   x2=%f    y2=%f     x0=%f      y0=%f",i,x1,y1,x2,y2,x0,y0);
	
	
	if (F(x1)*F(x0)<0)
	
	{
	 
	 x2=x0;	
		
	}
	
	else
	
	{
	
	x1=x0;	
		
	}
	
	i++;
	
}
	
while (fabs(F(x0))>0.001);
 
{
	
printf("\n\n\n Approximate root=%.4f \n\n",x0);	
	
}

return 0;

}

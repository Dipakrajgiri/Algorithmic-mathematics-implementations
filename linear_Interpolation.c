#include<stdio.h>


int main()
{
 float x0,y0,x1,y1,xp,yp;

 /* Inputs */
 printf("Enter first point (x0,y0):\n");
 scanf("%f%f",&x0,&y0);
 printf("Enter second point (x1,y1):\n");
 scanf("%f%f",&x1,&y1);
 printf("Enter interpolation point: ");
 scanf("%f", &xp);

 /* Calculation */
 yp = y0 + ((y1-y0)/(x1-x0)) * (xp - x0);
 printf("Interpolated value at %0.3f is %0.3f", xp, yp);
 
 return 0;
}

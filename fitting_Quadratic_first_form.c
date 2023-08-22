//Curve Fitting y = axb
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define S 50

int main()
{
 int n, i;
 float x[S], y[S], sumX=0, sumX2=0, sumY=0, sumXY=0, a, b, A;
 system("cls");
 
 /* Input */
 printf("How many data points?\n");
 scanf("%d", &n);
 for(i=1;i<=n;i++)
 {
  printf("x[%d]=",i);
  scanf("%f", &x[i]);
  printf("y[%d]=",i);
  scanf("%f", &y[i]);
 }
 
 /* Calculating Required Sum */
 for(i=1;i<=n;i++)
 {
  sumX = sumX + log(x[i]);
  sumX2 = sumX2 + log(x[i])*log(x[i]);
  sumY = sumY + log(y[i]);
  sumXY = sumXY + log(x[i])*log(y[i]);
 }
 
 /* Calculating A and b */
 b = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
 A = (sumY - b*sumX)/n;
 
 /* Transformation of A to a */
 a = exp(A);
 
 /* Displaying value of a and b */
 printf("Values are: a=%0.2f and b = %0.2f",a,b);
 
 getch();
 return(0);
}

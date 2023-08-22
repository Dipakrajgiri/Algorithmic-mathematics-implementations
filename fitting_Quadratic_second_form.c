#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define S 50

int main()
{
 int n, i;
 float x[S], y[S], sumX=0, sumX2=0, sumY=0, sumXY=0, a, b, A, B;
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
  sumX = sumX + x[i];
  sumX2 = sumX2 + x[i]*x[i];
  sumY = sumY + log(y[i]);
  sumXY = sumXY + x[i]*log(y[i]);
 }
 
 /* Calculating a and b */
 B = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
 A = (sumY - B*sumX)/n;
 
 /* Transformation of A to a and B to b */
 a = exp(A);
 b = exp(B);
 
 /* Displaying value of a and b */
 printf("Values are: a=%0.2f and b = %0.2f",a,b);
 
 getch();
 return(0);
}

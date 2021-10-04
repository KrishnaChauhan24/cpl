
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416

int main()
{
int n, deg, i;
float num, den=1, x, sum=0;
printf("Enter the angle\n");
scanf("%d",&deg);
printf("Enter the number of terms\n");
scanf("%d",&n);
 x=deg*PI/180; 
num=x;
for (i=1; i<=n; i++) 
 {
sum = sum + num/den;
num = -num * x * x;
den = den * (i*2) * (i*2+1);
 }
printf("Calculated value is : sin(%d) = %f\n",deg,sum);
printf("Built-in function value is : sin(%d) = %f\n",deg, sin(x));
return 0;
}

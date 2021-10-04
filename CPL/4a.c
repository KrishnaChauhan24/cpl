#include <stdio.h>
#include <stdlib.h>

int main()
{
int m,n,temp1,temp2,rem,gcd,lcm; 
printf("\nEnter two numbers : "); 
scanf("%d%d",&m, &n); 
temp1 = m; 
temp2 = n;
while(n > 0) 
{
rem = m%n;
m = n;
n = rem;
}
gcd = m;
lcm = temp1 * temp2 / gcd;

printf("\nThe GCD of %d and %d is %d\n",temp1,temp2,gcd);

printf("The LCM of %d and %d is %d\n\n",temp1,temp2,lcm);
return 0;
}

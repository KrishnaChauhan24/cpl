#include <stdio.h>
#include <stdlib.h>

int fact(int);

int main()
{
int n,r,result; 
printf("\nEnter the value of n\n");
scanf("%d", &n);
printf("\nEnter the value of r\n");
scanf("%d", &r);
if(n < r) 
{
printf("\nResult does not exist\n");
 return 0;
}
result = fact(n) / (fact(r)*fact(n-r)); 
printf("\nFor n = %d and r = %d, %dC%d = %d\n", n ,r, n, r, result);
return 0;
}

int fact(int n)
{
if(n == 0)
return 1; 
else
return (n * fact(n - 1));
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
 int A[10];
 int i, sum = 0;
 int *ptr;
 int n; 
 printf("\nEnter the number of elements : ");
 scanf("%d",&n);

 printf("\nEnter the array elements : ");
 for (i = 0; i < n; i++)
 {
 scanf("%d", &A[i]);
 }

 ptr = A;

 for (i = 0; i < n; i++)
 {
 sum = sum + *ptr;
 ptr++;
 }
 printf("The sum of array elements : %d", sum);
 return 0;
}

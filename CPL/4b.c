#include <stdio.h>
#include <stdlib.h>

int main( )
{
int a[50], n, i, temp;
 
int *p1,*p2;

p1 = p2 = a;
printf("\nEnter the number of elements: ");
scanf("%d", &n);
printf("\nEnter the elements:\n");
 for(i=0;i<n;++i)
scanf("%d", &a[i]);

 for(i=1;i<n;++i)
 {
 if(a[i] < *p1)
 p1 = &a[i]; 
 if(a[i] > *p2) 
 p2 = &a[i]; 
 }
printf("\nArray elements before swapping the largest and smallest elements\n");
 for(i=0;i<n;i++)
 printf("%d\t", a[i]);

printf("\n\nSmallest element in an array = %d\n",*p1);
printf("\nLargest element in an array = %d\n",*p2);

temp = *p1; 
 *p1 = *p2;
 *p2 = temp;
printf("\nArray elements after swapping the largest and smallest elements\n");
 for(i=0;i<n;i++)
 printf("%d\t", a[i]);
return 0;
}

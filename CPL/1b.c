#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int a[100], key, n, i, low, high, mid;
printf("Searching key element using Binary search technique");
 printf("\n---------------------------------------------------");
 printf("\nEnter the number of elements: ");
 scanf("%d", &n);

 printf("\nEnter %d elements in ascending order\n", n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

 
 printf("\nEntered array elements are:\n");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);

 printf("\nEnter the key element to be searched: ");
 scanf("%d", &key);
 
 low = 0;
 high = n-1;
 while(low <= high)
 {
 mid = (low + high)/2; 
 if(key == a[mid]) 
 {
 printf("\nSuccess, key %d is found at position %d",key,mid+1);
 exit(0);
 }
 else if(key < a[mid])
 high = mid - 1; 
 else
 low = mid + 1; 
 }
 printf("\nFailure, key %d is not found",key); 
}

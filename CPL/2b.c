#include <stdio.h>
#include <stdlib.h>

void readArray(int a[100], int n);
void bubbleSort(int a[100], int n);
void displayArray(int a[100], int n);

int main()
{
int a[100], n;
 printf("\nBubble Sort technique\n");
 printf("\nEnter the number of elements to sort\n");
 scanf("%d",&n);
 readArray(a,n); 

printf("\nArray elements before sorting\n");
 displayArray(a,n); 
 bubbleSort(a,n); 
 printf("\nSorted elements using bubble sort technique are\n");
 displayArray(a,n); 
return 0;
}

void readArray(int a[100], int n)
{
 int i;
 printf("\nEnter %d elements to sort\n",n);
 for(i=0; i<n; i++)
 scanf("%d",&a[i]);
}

void displayArray(int a[100], int n)
{
int i;
 for(i=0;i<n;i++)
 printf(" %d \t",a[i]);
}

void bubbleSort(int a[100], int n)
{
int i, j, temp;
 for(i=0; i<n-1; i++)
for(j=0; j<n-i-1; j++)
 if(a[j] > a[j+1]) 
 {
 temp = a[j];
 a[j] = a[j+1];
 a[j+1] = temp;
 }
}

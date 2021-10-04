#include <stdlib.h>

int main()
{
 float n1, n2, res; //variable declaration
 char op;
 
 printf("Enter an arithmetic expression");
 scanf("%f%c%f", &n1,&op,&n2);
 switch(op) 
 {
 case '+' :
res = n1 + n2;
 break;
 case '-' :
res = n1 - n2;
 break;
 case '*' :
res = n1 * n2;
 break;
 case '/' :
if (n2 == 0) 
 {
 printf("\nError: Division by zero\n");
 return 0;
 }
 res = n1 / n2;
 break;
 default:
printf("\nError: Invalid operator. Enter +, -, * or / only\n");
return 0;
 }
 printf("\n%f %c %f = %f\n", n1, op, n2, res); 
 return 0;
}

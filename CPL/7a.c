#include <stdio.h>
#include <ctype.h>


int main()
{
        char str[80];
        int i,vow=0,cons=0;

printf("Enter a string:\n");
      gets(str);

     for(i=0;str[i]!='\0';i++)
   {
         if(isalpha(str[i])) 
       {
if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
	vow++;
       else
	cons++;
        }

    }
printf("\nNumber of vowels = %d\n",vow);
printf("\nNumber of consonants = %d\n",cons);
return 0;
}


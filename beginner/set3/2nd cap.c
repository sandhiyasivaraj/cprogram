#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[200];
    int count = 0, i,j;
 
    
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
        {
        	count++;
        break;
         }
         

    }
   if(count!=0)
   {
    for(j=i+1;s[j]!=' ';j++)
        {
        	s[j]=s[j]-32;
        	printf("%c",s[j]);
        }
   }
      else
        printf("NUL");
   return 0;
}

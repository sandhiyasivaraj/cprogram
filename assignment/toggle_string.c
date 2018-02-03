#include <stdio.h>

int main(void) {
	char str[20];
  int i,j;
  
  scanf("%[^n]s",str);
  for(i=0;str[i]!=' ';i++)
  {
	    if(str[i]>=97 && str[i]<=122)
	    {
		str[i]=str[i]-32;
	    }
  }  
  for(j=i;j<=strlen(str);j++)
  {
	    if(str[j]>=65 && str[j]<=90)
	    {
		str[j]=str[j]+32;
	    }
	    
	    else if(str[j]>=97 && str[j]<=122)
	    {
		str[j]=str[j]-32;
	    }
	    else
	    str[j]=str[j];
  }

  printf("%s",str);
	return 0;
}

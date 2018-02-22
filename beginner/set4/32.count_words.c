#include <stdio.h>

int main(void) {
	int i,j,count=0,l;
	char a[100];
	scanf("%[^\n]s",a);
	l=strlen(a);
	for(i==0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
		
	}
	printf("%d",count+1);
	return 0;
}

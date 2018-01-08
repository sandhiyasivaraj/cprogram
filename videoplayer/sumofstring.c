#include <stdio.h>

int main(void) {
char s[20];
int l,i,sum=0;
scanf("%s",s);
l=strlen(s);
for(i=0;i<l;i++)
{
sum=sum+(int)s[i];
}
printf("%d",sum);

	return 0;
}

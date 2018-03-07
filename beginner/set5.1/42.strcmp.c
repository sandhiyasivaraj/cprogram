#include<stdio.h>
#include<string.h>
int main(void)
{
	char S[100];
	char S1[100];
	int l,l1;
	scanf("%s %s",S,S1);
	l=strlen(S);
	l1=strlen(S1);
	if(l==l1)
	{
		printf("%s",S1);
	}
	else if(l>l1)
	{
		printf("%s",S);
	}
	else
	{
		printf("%s",S1);
	}
	return 0;
}

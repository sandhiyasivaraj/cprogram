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
	printf("%s%s",S,S1);
	return 0;
}

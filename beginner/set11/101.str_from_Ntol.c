#include <stdio.h>

int main(void) {
	char S[100];
	int N,i,l;
	scanf("%s %d",S,&N);
	l=strlen(S);
	l=l-N;
	for(i=l;S[i]!='\0';i++)
	{
		printf("%c",S[i]);
	}
	return 0;
}

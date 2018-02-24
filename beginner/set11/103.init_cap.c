#include <stdio.h>

int main(void) {
	char S[100];
	int i,j;
	scanf("%[^n]s",S);
	if(S[i]>='a'&&S[i]<='z'||S[i]>='A'&&S[i]<='Z')
	{
		S[0]=S[0]-32;
	for(i=0;S[i]!='\0';i++)

	{
		
		if(S[i]==' ')
		{
			S[i+1]=S[i+1]-32;
		}
	}
	}
	printf("%s",S);
	return 0;
}

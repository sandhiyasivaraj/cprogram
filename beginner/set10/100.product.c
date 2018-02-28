#include <stdio.h>

int main(void) {
int N,i,mul=1;
scanf("%d",&N);
while(N!=0)
{
	i=N%10;
	mul=mul*i;
	N=N/10;
}
printf("%d",mul);
	return 0;
}

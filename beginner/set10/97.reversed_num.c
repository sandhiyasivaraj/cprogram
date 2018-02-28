#include <stdio.h>

int main(void) {
	int n,i,count=0;
	scanf("%d",&n);
	while(n!=0)
	{
		i=n%10;
		printf("%d",i);
		n=n/10;
	}
	return 0;
}

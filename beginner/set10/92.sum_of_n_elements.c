#include <stdio.h>

int main(void) {
	int N,a[N],i,sum=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
	scanf("%d",&a[i]);
	sum=sum+a[i];
	}
	printf("%d",sum);
	return 0;
}

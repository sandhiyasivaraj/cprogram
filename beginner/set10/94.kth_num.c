#include <stdio.h>

int main(void) {
	int N,K,i,a[N];
	scanf("%d %d",&N,&K);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
		if(i==K)
		{
		printf("%d",a[i-1]);	
		}
	}
	return 0;
}

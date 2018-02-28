#include <stdio.h>

int main(void) {
	int N,i,a[N];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	for(i=1;i<N-1;i++)
	{
		if(a[i]>a[i+1])
		{
			printf("%d",a[i]);
		}
	}
	return 0;
}

#include <stdio.h>

int main(void) {
	int N,K,i,a[N],count=0;
	scanf("%d %d",&N,&K);
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	for(i=0;i<N;i++)
	{
	if(a[i]==K)
	{
		count++;
	}
	}
	if(count>0)
		printf("YES");
	else
	printf("NO");

	return 0;
}

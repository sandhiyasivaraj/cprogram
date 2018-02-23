#include <stdio.h>

int main(void) {
	int N,K,i,a[N],count=0;
	scanf("%d %d",&N,&K);
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	for(i=0;i<N;i++)
	{
	if(a[i]%2!=0)
	{
		count++;
	}
		if(count==K)
		{
			printf("%d",a[i]);
			break;
		}
		
	
	}

	return 0;
}

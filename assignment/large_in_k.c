#include <stdio.h>
#include<string.h>

int main(void) {
	int n,k,i,a[i],max;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	max=a[0];
		for(i=1;i<k;i++)
		{
			
			if(a[i]>max)
			{
				max=a[i];
			}
		}
	printf("%d",max);
	return 0;
}

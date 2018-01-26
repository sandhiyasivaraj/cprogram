#include <stdio.h>

int main(void) {
	int n,i,j,a[i],mul=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		mul=1;
	for(i=0;i<n;i++)
	{
	if(j!=i)	
	{
		mul=mul*a[i];
	}
	}
	printf(" %d",mul);
	}
	return 0;
}

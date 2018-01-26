#include <stdio.h>
int main(void) {
	int n,i,j,a[j],b[i],l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	for(i=0,j=0;i<n,j<n-1;i++,j++,j++)
	{
		b[i]=a[j+1];
		printf("%d ",b[i]);
	}
	
	
	return 0;
}

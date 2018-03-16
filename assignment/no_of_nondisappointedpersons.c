#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[n],i,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	int count=0;
	for(i=1;i<n;i++)
	{
		int sum=0;
		for(j=i-1;j>=0;j--)
		{
			sum=sum+a[j];
		}
		if(sum<=a[i])
		count++;
	}
	printf("%d",count+1);
	return 0;
}

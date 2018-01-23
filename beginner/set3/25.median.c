#include <stdio.h>
int main(void) 
{  
int n;
int i,j,a[n],temp;  
scanf("%d",&n);
for(i=0;i<n;i++) 
scanf("%d",&a[i]);
for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		
	}
	
	}
	for(i=0;i<n;i++) 
	printf(" %d ",a[i]);
	printf("\n");
	if(n%2!=0)
	{
		printf("%d",a[n/2]);
	}
	else
	{
		int d=a[n/2]+a[(n/2)-1];
		printf("%d",d/2);
	}
return 0;
}

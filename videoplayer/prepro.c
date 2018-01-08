#include <stdio.h>
#define TOP 3
int main(void) 
{  
int n;
int i,j,a[n],temp,b[n];  
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
	for(i=0,j=n-1;i<n,j>=0;i++,j--)
	{
		b[i]=a[j];
	}
	for(i=0;i<TOP;i++)
	printf("%d\n",b[i]);

	
return 0;
}

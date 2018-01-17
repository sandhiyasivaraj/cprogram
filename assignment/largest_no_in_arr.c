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
	for(i=n-1;i>=0;i--) 
	printf("%d",a[i]);
	
return 0;
}

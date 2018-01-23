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
		if(a[i]==i)
		{
			printf(" %d",a[i]);
		}
	}

	return 0;
}

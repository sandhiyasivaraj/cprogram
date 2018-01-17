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
	
	int flag=0;
	for(i=0;i<n;i++)
	{
		int count=0;
		for(j=i+1;j<n;j++)
		{
			
			if(a[i]==a[j])
			{
				count++;
				flag++;
			}
		}
			if(count==0)
			printf("%d ",a[i]);
			else
			continue;
			
		
	}
	
	if(flag==0)
			printf("\nUNIQUE");
	

	return 0;
}

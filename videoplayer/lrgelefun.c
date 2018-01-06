#include <stdio.h>

int large(int a[],int n)
{
	int i,max;

max=a[0];
	for(i=1;i<n;i++)
	{ 
	if(a[i]>max)
	{
		max=a[i];
	}
	}
return max;	
}

int main(void) 
{  
int n,i,a[n],max,result;  
scanf("%d",&n);
for(i=0;i<n;i++) 
scanf("%d",&a[i]);
result=large(a,n);
printf("%d",result);	

return 0;
}

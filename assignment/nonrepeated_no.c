#include <stdio.h>
int main(void) {
	int i,j,a[10],n,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				
			}
			
			
		}
			if(count==1)
			{
			printf("%d\n",a[i]);
			}
	}
return 0;
}

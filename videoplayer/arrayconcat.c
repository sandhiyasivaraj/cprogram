#include <stdio.h>
void concatarray(int a[],int b[],int n,int n1)
{
int i,j,c[i],l;
l=n+n1;
for(i=0;i<n;i++)
	{
		c[i]=a[i];	
	}

	

for(i=n,j=0;i<l,j<n1;i++,j++)

	{
		c[i]=b[j];	
	}
for(i=0;i<l;i++)
	{
	printf("%d ",c[i]);
	}

}

int main(void) 
{  
int n,i,j,a[n],n1,b[n1],l,c[l],result1,result2; 
scanf("%d",&n);
for(i=0;i<n;i++) 
scanf("%d",&a[i]);
scanf("%d",&n1);
for(i=0;i<n1;i++) 
scanf("%d",&b[i]);
for(i=0;i<n1;i++)
concatarray(a,b,n,n1);

return 0;
}

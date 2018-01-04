#include <stdio.h>
int main(void) 
{  
int n1,n2,i,j,flag=0;  
scanf("%d%d",&n1,&n2);
for(i=n1;i<n2;i++) 
{ 
	flag=0;
	for(j=2;j<i;j++)
	{
		
		if(i%j==0) 
		flag++;
	}
 

if(flag==0)
printf("%d ",i);
}

return 0;
}

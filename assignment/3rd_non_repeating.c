#include <stdio.h> 
 
 int main() { 
 int n,i,j,a[n],count=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d ",&a[i]);
 }
 
 int flag=0;
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
 	flag++;
	if(flag==3)
	{
	printf("%d",a[i]);
 	break;
	 }
	} 
          
 }
 	
 
 return 0; 
}

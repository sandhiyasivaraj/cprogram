#include <stdio.h>
int main(void) 
{  
int n,i,flag=0;  
scanf("%d",&n);
for(i=2;i<n;i++) 
{ 
if(n%i==0) 
flag++; 
}
if(flag==0)
printf("prime");
else printf("no");
return 0;
}

#include <stdio.h>
int main(void) 
{  
int n,l,r,reverse=0,c=0; 
scanf("%d",&n); 
l=n;
while(n!=0) 
{ 
r=n%10; 
reverse=reverse*10+r;
n=n/10;
 } 
 if(reverse==l) 
 printf("yes"); 
 else printf("no");
 return 0;
 }

#include <stdio.h>
int main(void) 
{  
int n,l,r,reverse=0,c=0,cube; 
scanf("%d",&n); 
l=n;
while(n!=0) 
{ 
r=n%10; 
cube=r*r*r;
reverse=reverse+cube;
n=n/10;
 } 
 if(reverse==l) 
 printf("yes"); 
 else printf("no");
 return 0;
 }

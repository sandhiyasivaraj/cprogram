#include <stdio.h>
int main(void) 
{ 
long int n; 
int c=0; 
scanf("%ld",&n);
while(n%10!=0) 
{
c++; n=n/10; 
}
printf("%d",c); 
return 0;
}

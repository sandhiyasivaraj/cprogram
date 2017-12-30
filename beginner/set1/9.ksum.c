#include <stdio.h>
int main(void) 
{
  int i,j,n,k,a[i],sum=0;  
  scanf("%d %d",&n,&k); 
  for(i=0;i<n;i++) 
  { 
  scanf("%d",&a[i]); 
  } 
  for(j=0;j<k;j++) 
  { 
  sum=sum+a[j];
  } 
  printf("%d",sum);  
  return 0;
}

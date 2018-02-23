#include <stdio.h>

int main(void) {
int n,k,a[n],i,j,temp;
printf("enter n,k");
scanf("%d %d",&n,&k);
printf("enter array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d",a[i]);
printf("\n");

printf("%d",a[k-1]);
	return 0;
}

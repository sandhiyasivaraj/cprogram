#include <stdio.h>

int main(void) {
int n,i,count=0;
scanf("%d",&n);
for(i=1;i<=10;i++)
{
	if(n==i)
	count++;
}
if(count>0)
printf("Yes");
else
printf("No");
	return 0;
}

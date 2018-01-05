#include <stdio.h>

int main(void) {
	int a,sum,t,i;
	scanf("%d",&a);
	t=a;
	sum=a;
	for(i=1;i<4;i++)
	{
		t=t*10+a;
		sum=sum+t;
	}
	printf("%d",sum);
	return 0;
}

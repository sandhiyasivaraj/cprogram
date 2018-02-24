#include<stdio.h>
int main(void)
{
	int A,B,C,i,sum,a,d,n;
	scanf("%d\n%d\n%d",&A,&B,&C);
	a=A;d=B;n=C;
	sum=a;
	for(i=1;i<n;i++)
	{
	a=a+d;
	sum=sum+a;
	}
	printf("%d",sum);
	
return 0;
}

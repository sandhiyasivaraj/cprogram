#include<stdio.h>
int main(void)
{
	int N,A,D,i,sum;
	scanf("%d\n%d\n%d",&N,&A,&D);
	sum=A;
	for(i=1;i<N;i++)
	{
	A=A+D;
	sum=sum+A;
	}
	printf("%d",sum);
	
return 0;
}

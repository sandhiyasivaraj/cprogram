#include <stdio.h>
 
int main(void) {
	int f1=1,f2=1,f3,i,j,n;
	scanf("%d",&n);
	printf("%d %d",f1,f2);
	for(i=0;i<n;i++)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
	printf(" %d",f3);	
	}
	return 0;
}

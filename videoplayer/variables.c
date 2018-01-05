#include <stdio.h>

int main(void)
{
	int a=12;
	{
     int a=34;
        {
	int a=29;
	printf("%d ",a);
        }
	printf("%d ",a);
	}
	printf("%d",a);
	return 0;
}

#include <stdio.h>
int main(void) 
{  
int time,hr=0;
scanf("%d",&time);
if(time<60)
{
	printf("%d %d",hr,time);
}
else
{
	while(time>=60)
	{
		time=time-60;
		++hr;
	}
	
	printf("%d %d",hr,time);
	
}

	return 0;
}

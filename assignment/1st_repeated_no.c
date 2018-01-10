#include <stdio.h>

int main(void) {
	int i,j,a[10],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int flag=0;
	for(i=0;i<n;i++)
	{
		
		for(j=i+1;j<n;j++)
		{
			flag=0;
			if(a[i]==a[j])
			{
			flag++;
			if(flag!=0)
			printf("%d",a[i]);
			break;
			}
			//if(flag>0){
			//	break;
			//}
			
		}
		if(flag>0){
			break;
		}
		
		
	}
	if(flag==0){
		printf("unique");
	}
	
	return 0;
}

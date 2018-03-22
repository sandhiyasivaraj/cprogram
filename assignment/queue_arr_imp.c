#include<stdio.h>
#include<stdlib.h>
int size=3,a[3],count=0;
int *front,*rear;


//ENQUEUE
void enqueue()
{
	int data;
	if(count!=size)
	{
		printf("ENTER THE DATA\n");
		scanf("%d",&data);
		a[count]=data;
		
		if(front==NULL)
		{
			front=rear=&a[count];
		}
		else
		{
			
			rear=&a[count];
		}
		count++;

	}
	else
	printf("OVERFLOW\n");
}


//DEQUEUE
void dequeue()
{	if(front!=NULL)
	{
		count--;
		printf("THE DEQUEUED ELEMENT IS %d\n",a[0]);
		for(int i=0;i<size-1;i++)
		{
			a[i]=a[i+1];
		}
	}
	else
	{
	printf("UNDERFLOW\n");
	}
}



//DISPLAY
void display()
{
	int i;
	for(i=0;i<count;i++)
	{
		printf("%d\t",a[i]);
	}
printf("\n");
}

int main(void)
{
	int ch;
	while(1)
	{
		printf("ENTER THE CHOICE\n");
		printf("1.ENQUEUE 2.DEQUEUE 3.DISPLAY 4.EXIT\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3:display();break;
			case 4:exit(0);
		}
	}
return 0;
}


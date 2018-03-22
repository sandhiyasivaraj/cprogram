#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front,*rear,*temp;
int count=0,size=3;


//ENQUEUE
void enqueue()
{
	int data;
	temp=(struct node*)malloc(sizeof(struct node));
	if(count!=size)
	{
		printf("ENTER THE DATA\n");
		scanf("%d",&data);
		temp->data=data;
		temp->next=NULL;
		if(front==NULL)
		{
			front=rear=temp;
		}
		else
		{
			rear->next=temp;
			rear=temp;
		}
		count++;
	}
	else
	printf("OVERFLOW\n");
}


//DEQUEUE
void dequeue()
{
	struct node *temp1=front;
	if(front!=NULL)
	{
		printf("DEQUEUED ELEMENT IS %d\n",front->data);
		front=front->next;
		free(temp1);
	}
	else
	printf("UNDERFLOW\n");
}

//DISPLAY
void display()
{
	struct node *temp1=front;
	while(temp1!=NULL)
	{
		printf("%d ",temp1->data);
		temp1=temp1->next;
	}
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


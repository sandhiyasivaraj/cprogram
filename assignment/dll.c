#include<stdio.h>
#include<stdlib.h>
struct n
	{
		int data;
		struct n *next,*prev;
	};
typedef struct n node;
node *head;

//INSERT AT FRONT
void insertatfront()
	{
		int data;
		printf("ENTER THE DATA TO BE INSERTED\n");
		scanf("%d",&data);
		node *newnode;
		newnode=(node*)malloc(sizeof(node));
		newnode->data=data;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			head->prev=NULL;
		}
		else
		{
			newnode->next=head;
			head->prev=newnode;
			head=newnode;
		}
	}

//INSERT AFTER A NODE
void insertafter()
	{
		int data,data1;
		printf("ENTER THE DATA AFTER WHICH THE NEW NODE HAS TO BE INSERTED\n");
		scanf("%d",&data);
		printf("ENTER THE DATA TO BE INSERTED\n");
		scanf("%d",&data1);
		node *newnode,*temp=head,*cur,*cur1;
		newnode=(node*)malloc(sizeof(node));
		newnode->data=data1;
		while(temp->data!=data)
		{
			temp=temp->next;
		}
		cur=temp;
		cur1=temp->next;
		cur->next=newnode;
		newnode->prev=cur;
		cur1->prev=newnode;
		newnode->next=cur1;
		
	}


//INSERT AT THE END
void insertatend()
	{
		int data;
		printf("ENTER THE DATA\n");
		scanf("%d",&data);
		node *newnode,*temp=head;
		newnode=(node*)malloc(sizeof(node));
		newnode->data=data;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
		newnode->next=NULL;
	}

//INSER BEFORE A NODE
void insertbefore()
	{
		int data,data1;
		printf("ENTER THE DATA BEFORE WHICH THE NEW NODE HAS TO BE INSERTED\n");
		scanf("%d",&data);
		printf("ENTER THE DATA TO BE INSERTED\n");
		scanf("%d",&data1);
		node *newnode,*temp=head,*cur;
		newnode=(node*)malloc(sizeof(node));
		newnode->data=data1;
		newnode->next=NULL;
		while(temp->data!=data)
		{
			temp=temp->next;
		}
		cur=temp->prev;
		printf("%d",cur->data);
		cur->next=newnode;
		newnode->next=temp;
		newnode->prev=cur;
		temp->prev=newnode;		
	}

//DELETE
void delete()
	{
		int data;
		node *temp=head,*cur,*cur1;
		printf("ENTER THE DATA TO BE DELETED\n");
		scanf("%d",&data);
		if(temp->data==data)
		{
			head=temp->next;
			free(temp);
		}
		else
		{
			while(temp->data!=data)
			temp=temp->next;
			cur=temp->prev;
			cur1=temp->next;
			cur->next=cur1;
			cur1->prev=cur;
			free(temp);
		}
	}
			

//DISPLAY
void display()
	{
		node *temp=head;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}

		printf("\n");
	}



//REVERSE DISPLAY
void reversedisplay()
	{
		node *temp=head;
		while(temp->next!=NULL)
		temp=temp->next;
		while(temp->prev!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->prev;
		}
		printf("%d ",temp->data);
		printf("\n");
	}



int main(void)
	{
		int ch;
		while(1)
		{
			printf("\nENTER YOUR CHOICE\n");
			printf("1.INSERT AT FRONT\n2.INSERT AFTER A NODE\n3.INSERT AT END\n4.INSERT BEFORE A NODE\n5.DELETE\n6.DISPLAY\n7.REVERSE DISPLAY\n8.EXIT\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:insertatfront();break;
				case 2:insertafter();break;
				case 3:insertatend();break;
				case 4:insertbefore();break;
				case 5:delete();break;
				case 6:display();break;
				case 7:reversedisplay();break;
				case 8:exit(0);
			}
		}
		return 0;
	}

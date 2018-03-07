#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
typedef struct node n;
n*top;
int size=10;
int count=0;
void push()
{
int no;
scanf("%d",&no);
n *newnode;
newnode=(n*)malloc(sizeof(n));
newnode->data=no;
newnode->next=top;
top=newnode;
count++;
}
void pop()
{
if(top==NULL)
{
printf("STACK UNDERFLOW");
}
else
{
n *temp;
temp=top;
top=temp->next;
printf("POPPED ELEMENT IS %d",temp->data);
free(temp);
count--;
}
}
void topnum()
{
printf("The top most element is %d",top->data);
}
void totalnodes()
{
n *temp;
temp=top;
int count=0;
while(temp!=NULL)
{
count++;
temp=temp->next;
}
printf("No of node/s are/is %d",count);
}
void display()
{
n *temp;
temp=top;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}

int main(void)
{
int ch;
while(1)
{
printf("\n1.Push\t2.Pop\t3.Topelement\t4.No_Of_Nodes\t5.Display\t6.Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:push();break;
case 2:pop();break;
case 3:topnum();break;
case 4:totalnodes();break;
case 5:display();break;
case 6:exit(0);
}
}
return 0;
}

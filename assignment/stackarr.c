#include<stdio.h>
int size=10;
int top=-1;
int stack[10];
void push()
{
int no;
scanf("%d",&no);
if(top==size-1)
{
printf("Overflow");
}
else
{
top++;
stack[top]=no;
}
}
void pop()
{
if(top==-1)
{
printf("Underflow");
}
else
{
printf("element popped is %d",stack[top]);
top--;
}
}
void totalnum()
{
int count=0,i;
for(i=top;i>=0;i--)
{
count++;
}
printf("%d",count);
}
void topnum()
{
printf("%d",stack[top]);
}
void display()
{
int i;
for(i=top;i>=0;i--)
{
printf("%d",stack[i]);
}
}
int main(void)
{
int ch;
while(1)
{
printf("\n1.Push\t2.Pop\t3.Topnum\t4.Totalnum\t5.Display\t6.Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:push();break;
case 2:pop();break;
case 3:topnum();break;
case 4:totalnum();break;
case 5:display();break;
case 6:exit(0);
}
}
return 0;
}

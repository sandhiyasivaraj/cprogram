#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
	{
	   char data;
           struct node *next;
	};
typedef struct node n;
n *top;
char output[15];
int j=0;



//precedence function
int getprecedence(char ch)
	{
	  int value;
	  switch(ch)
		{
		    case '+':value=1;break;
		    case '-':value=1;break;
		    case '*':value=2;break;
		    case '/':value=2;break;
		    default :value=5;break;
		}
	return value;
        }

//puch function
void push(char ch)
	{
	   n *newnode;
	   newnode=(n*)malloc(sizeof(n));
	   newnode->data=ch;
	   newnode->next=top;
	   top=newnode;
	}

//pop function
char pop()
	{
	
	n *temp;
	temp=top;
        if(top!=NULL)
	{
		top=top->next;
		return(temp->data);
        	
	}
	else
		return 0;

printf("ENTER THE INFIX EXPRESSION2222\n");
	   
	}


int main(void)
	{
	   int i;
	   char input[15],k;
	   printf("ENTER THE INFIX EXPRESSION\n");
	   scanf("%s",input);
for(i=0;i<strlen(input);i++)
	{
	  if(input[i]!='+'&&input[i]!='-'&&input[i]!='*'&&input[i]!='/')
	     {
		output[j]=input[i];
		j++;
	     }
	  else
	     {
		k=pop();
		if(getprecedence(k)==5)
		   {
		      push(input[i]);
		   }

		else if(getprecedence(k)<getprecedence(input[i]))
		  {
		     push(k);
		     push(input[i]);
		  }
		else
		  {
		     output[j]=k;
		     j++;
		     push(input[i]);
		  }
	     }
	}

while(k=pop())
	{
	  output[j]=k;
	  j++;
	}
 printf("%s",output);
}

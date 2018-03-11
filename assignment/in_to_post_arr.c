#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char output[15];
int j=0;char stack[10];
int size=10;
int top=-1;


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

top++;
stack[top]=ch;

}
//pop function
char pop()
{
return(stack[top]);
top--;

}


int main(void)
	{
	   int i,l;
	   char input[15],k;
	   printf("ENTER THE INFIX EXPRESSION\n");
	   scanf("%s",input);
	   l=strlen(input);
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
int l1=strlen(output);
for(i=1;i<=l-l1;i++)
{
if(k=pop())
	{
	  output[j]=k;
	  j++;
	}
top--;
}
 printf("%s",output);
}

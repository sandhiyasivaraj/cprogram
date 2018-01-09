    #include<stdio.h>
    #include<string.h>
    void sum(unsigned n)
{
if(n>1)
{
sum(n/2);

}

printf("%d",n%2);
}
   
    int main(void)
    {
    	char number[10];
    	int flag=0,val;
    	int length;
    	
    	scanf("%s",number);
    	length=strlen(number);
    	while(length--)
    	{
    		if(number[length]=='.')
    		{
    			flag=1;
    			break;
    		}
    	}
    	if(flag)
    		printf("ERROR\n");
    	else
    	{
    		val=atoi(number);
     sum(val);
    	}
    	
    	return 0;
    }

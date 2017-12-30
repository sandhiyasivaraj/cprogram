#include <stdio.h>
int main(void) 
{ 
int n;
scanf("%d",&n);
n>0?printf("positive"):n<0?printf("negative"):printf("zero");
return 0;
}

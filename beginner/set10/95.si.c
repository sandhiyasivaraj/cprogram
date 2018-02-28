#include <stdio.h>

int main(void) {
	int P,T,R;
	float si;
	scanf("%d %d %d",&P,&T,&R);
	si=(P*T*R)/100;
	printf("%.0f",si);
	return 0;
}

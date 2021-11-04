#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=10,b=20,c;
	c=a;
	a=b;
	b=c;
	printf("a:%d b:%d",a,b);
	return 0;
}

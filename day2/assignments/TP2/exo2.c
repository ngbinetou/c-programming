#include <stdio.h>
#include <stdlib.h>


int main()
{
	int x=2;
	int y=3;
	int z;
	printf("x=%d\ny=%d\n",x,y);

	z=x;
	x=y;
	y=z;
	printf("x=%d\ny=%d\n",x,y);

	return 0;
}
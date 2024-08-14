#include <stdio.h>

void swap(int *pa, int *pb)
{
	int temp;
	
	temp = *pa;
	*pa=*pb;
	*pb=temp;
	
}

int main(void)
{
	int a=10;
	int b=20;
	swap(&a, &b);
	
	printf(" SWAP ->  a : %d , b : %d \n" , a,b);
	return 0;
}

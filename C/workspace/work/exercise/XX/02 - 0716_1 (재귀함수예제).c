
//팩토리얼 예제
#include <stdio.h>

int factorial_recursive(int n);
int factorial_nonrecursive(int n);
int main(void)
{
	int n;
	printf ("%s : ", "input number");
	scanf("%d", &n);
	
	int r=factorial(n);
	printf("n! is %d\n",r);
	
	return 0;
	
}

//재귀함수
int factorial_recursive(int n)
{
	if (n==0) return 1;
	return n*factorial(n-1);
}

//반복문사용
int factorial_nonrecursive(int n)
{
	int r=1;
	while(n)
		r=r*(n--);
	return r;
}

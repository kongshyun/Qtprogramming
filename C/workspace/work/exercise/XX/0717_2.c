/*


//배열을 받는 포인터 변수 함수 만들기
//1차원배열 말고 2차원배열을 포인터로 불러오기

#include <stdio.h>
void print_ary(int *pa); //배열의 요소는 int이므로 배열명을 함수의 인수로 하려면
						 //int형 변수의 주소를 저장할 포인터를 선언해야함.

int main(void)
{
	int ary[2][3]={{100,10,20},{30,40,50}}; //2차원배열
	print_ary(ary);
	return 0;
	
}

void print_ary(int (*pp)[3])
{
	int i;
#if 0
	for (i=0;i<5;i++)
	{
		printf("%d", pa[i]);
	}
#endif
	for (i=0;i<2;i++)
		for(j=0;j<3;j++)
			printf("%d",pp[i][j]);
		
}

*/



/*
//3차원 배열 해보기
#include <stdio.h>

void print_ary( int (*ppp)[3][4])

int main(void)
{
	int ary[2][3][4]={{100,10,20},{30,40,50},{60,70,80}};
	
	print_ary(ary);
	
	return 0;
}

void print_ary(int(*ppp)[3][4])
{
	int i;
	int j;
	int k;
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			for(k=0;k<4;k++)
				printf("%d\n",ppp[i][j][k]);
	
}



/*
int *aaa[2][3][4];
int [4] *aaa[2][3];


*/





//p를 형변환해서 사용해보기
#include <stdio.h>

void print_ary(int **pp);

int main(void)
{
	int aa[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	
	print_ary(ary);
	return 0;
}

void print_ary(int p)  //warning
{
	int i,j;
	for (i=0;i<12;i++)
	{
		printf("%d",((int*)p)[i]); //
		
	}
	
	
}





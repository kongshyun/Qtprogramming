//수업 포인터 예제


/*
#include <stdio.h>

int gi=123; //DATA
int gni   ; //.BSS

int main(void)
{
	puts("hello!");
	return 0;
}



*/
/*
//여러개의 동물 이름을 입출력하는 프로그램 예제
#include <stdio.h>

int main(void)
{
	char animal[5][20]; //2차원 배열 선언
	int i;	//반복제어변수
	int count; //행의수를 저장할 변수
	
	count = sizeof(animal) / sizeof(animal[0]);	//행의수 계산
	
	for(i=0;i<count ; i++)
	{
		scanf("%s",&animal[i]);
	}
	for (i=0;i<count;i++)
	{
		printf("%s",animal[i]);	//입력된 문자열 출력
	}
	return 0;
	
}

*/
/*
//이중포인터를 사용한 swap
#include <stdio.h>

void swap_ptr(char **ppa, char **ppb);

int main()
{
	char *pa = "success" ;
	char *pb = "fail" ;
	
	printf("pa : %s , pb : %s \n",pa,pb);
	swap_ptr(&pa,&pb);
	printf("pa : %s , pb : %s ",pa,pb);
	return 0;
}

void swap_ptr(char **ppa, char **ppb)
{
	char *pt;
	
	pt=*ppa;
	*ppa=*ppb;
	*ppb=pt;	
}
*/


/*

//2차원 배열을 받는 포인터
#include<stdio.h>

void print_ary(int (*)[4]);

int main(void)
{
	int ary[12]={1,2,3,4,5,6,7,8,9,10,11,12};
	print_ary(ary);
	
	return 0;
	
}


void print_ary(int p)

	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		
			printf("%d", (int (*)[4])p[i][j] );
		puts("");
		
	}
}

*/

/*
//예제 15-8
#include <stdio.h>

void func (int (*fp) (int,int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);


int main(void)
{
	int sel; //번호 입력 
	
	printf(" 01 sum  \n");
	printf(" 02 multi \n");
	printf(" 03 bigger? \n");
	printf(" Pick number : ");
	scanf("%d",&sel);
	
	switch(sel)
	{
		case 1:
			func(sum);
			break;
		case 2:
			func(mul);
			break;
		case 3:
			func(max);
			break;
	}
	return 0;
}

void func(int (*fp) (int, int))
{
	int a; 
	int b;
	
	int res;
	
	printf("insert two integer :");
	scanf("%d%d",&a,&b);
	
	res=fp(a,b);	//함수호출 
	printf("Answer is : %d\n",res);
}

int sum(int a, int b)
{
	return a+b;
}

int mul(int a, int b)
{
	return a*b;
}

int max(int a,int b)
{
	if (a>b)
		return a;
	else
		return b;
}


*/
#include<stdio.h>
int main()
{
	int a[]={10,1,2,3,4,5,6,7,8,9};
	
	int *p;
	p =a;
	
	printf("%d, ",a); // : 1000
	
	printf("%d\n", *p++ ); //10, p == 1004 
	
	printf("%d",sizeof(void));
	printf("%d, ", *(p++) );	// 1/1008
	printf("%d, ", (*p)++ ); //  == (*p)=(*p)+1    --> 2+1 이라 3이됨. 
	printf("%d, ", ++*p ); //	   	2(=4),1008			
	printf("%d", *++p ); //		3,1008

}




























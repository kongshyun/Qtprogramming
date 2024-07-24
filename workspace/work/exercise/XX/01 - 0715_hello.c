/*
#include <stdio.h>

//CRT (init.o,CRT.o) // C-Runtime   -> STACK 초기위치 잡아줌.

int main(void)
{
	//int k=1; // .Stack에 메모리 쌓임. ? SP=
	
	
	int i=0x1234578; // .STACK
	
	printf(" sizeof : %d\n", sizeof(1)); 
	printf(" sizeof : %d\n", sizeof(1.0)); 
	// --> STACK에 쌓인 메
	return 0;
}

*/

/*
//포인터 예제(0715 , 03장)
#include<stdio.h>

int gi=123;
int gni	;

int main(void)
{
	int li=1;
	int lni	;
	
	static int sli =11;
	static int slni	;
	printf("%X\n", "hello");
	printf("%X\n", &main);
	
	printf("%X\n", &gi);
	printf("%X\n", &gni);
	
	printf("%X\n", &li);
	printf("%X\n", &lni);
	
	printf("%X\n", &sli);
	printf("%X\n", &slni);
	
	return 0;
}
*/
/*

cmd 창에서 실행한후 
objdump -h a.exe

404:000		//"hello" @r.data
401:500	 	//@ .Text

403:004		//@. DATA
405:430		//@ .BSS

61FE9C		//@stack
61FE98		//@stack

403:008		//@ .DATA
405:020		//@ .BSS


//메모리를 알아보면 제일 중요한건 아래 3개! text,data,bss
 text    data     bss     dec     hex filename
   7016    1520    1108    9644    25ac a.exe
*/


//----------------------------------------------------------

//배열 예제
#include<stdio.h>

int main(void)
{
	char fruit[6]="apple"; 
	// 끝에 null이 있어서 6개, 숫자가 더 크면 뒤는 0값으로 채워짐.
	
	printf("%s\n",fruit);
	strcpy(fruit,"banana");//string copy , fruit에 banana복사
	printf("%s\n",fruit);
	//fruit="banana"; 이렇게 못씀!! --> fruit은 배열명이지 변수가 아니기 때문.
	
	
}




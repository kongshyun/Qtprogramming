/*
#include <stdio.h>

//CRT (init.o,CRT.o) // C-Runtime   -> STACK �ʱ���ġ �����.

int main(void)
{
	//int k=1; // .Stack�� �޸� ����. ? SP=
	
	
	int i=0x1234578; // .STACK
	
	printf(" sizeof : %d\n", sizeof(1)); 
	printf(" sizeof : %d\n", sizeof(1.0)); 
	// --> STACK�� ���� ��
	return 0;
}

*/

/*
//������ ����(0715 , 03��)
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

cmd â���� �������� 
objdump -h a.exe

404:000		//"hello" @r.data
401:500	 	//@ .Text

403:004		//@. DATA
405:430		//@ .BSS

61FE9C		//@stack
61FE98		//@stack

403:008		//@ .DATA
405:020		//@ .BSS


//�޸𸮸� �˾ƺ��� ���� �߿��Ѱ� �Ʒ� 3��! text,data,bss
 text    data     bss     dec     hex filename
   7016    1520    1108    9644    25ac a.exe
*/


//----------------------------------------------------------

//�迭 ����
#include<stdio.h>

int main(void)
{
	char fruit[6]="apple"; 
	// ���� null�� �־ 6��, ���ڰ� �� ũ�� �ڴ� 0������ ä����.
	
	printf("%s\n",fruit);
	strcpy(fruit,"banana");//string copy , fruit�� banana����
	printf("%s\n",fruit);
	//fruit="banana"; �̷��� ����!! --> fruit�� �迭������ ������ �ƴϱ� ����.
	
	
}




//0719 c언어 1주-5일차 수업 

/*
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int *pi;
	int i;
	pi=(int *)malloc(5* sizeof(int));
	
	if(pi==NULL) //메모리가 부족할대 예외처리구문
	{
		printf("메모리 부족\n");
		exit(1);
	}
	printf("다섯명의 나이를 입력하세요 : ");
	for(i=0;i<5;i++)
	{
		scanf( "%d", &pi[i]);
		sum +=pi[i];
	}
	
	printf("다섯명의 평균나이 : %.1lf\n", (sum/5.0));
	free(pi); //할당한 메모리 영역 반환
	
	return 0;
}
*/

/*
#include <stdio.h>
#include <stlib.h>
#include <string.h>

int main(void)
{
	char temp[80];
	char *str[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);	//문자열 입력
		str[i] = (char * ) malloc(strlen(temp)+1);
		strcpy(str[i],temp);	
	}
	
	for(i=0;i<3;i++)
	{
		printf("%s\n",str[i]);
		
	}
	
	for(int i=0;i<3;i++)
	{
		free(str[i]);
	}
	
	return 0;
	
}*/


#include <stdio.h>

int main()
{
    int a;
    while(1)
    {
        printf("number? ");
        fflush(NULL); // \n을 해주는 거임!!
        scanf("%d",&a);
        if(a==0){
            break;
        }
        else if(a>0){
            printf("positive integer\n");
        }
        else if(a<0){
            printf("negative number\n");
        }
    }
    return 0;
}
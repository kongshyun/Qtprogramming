

/*
다음과 같은 조건을 만족하는 성적처리 프로그램을 작성하시오.

*입력 : 학생이름과  C, C++,QT 3과목 시험성적
*출력 : 학생이름   평균  등수
*학생 수 : 30명

*/

#include <stdio.h>
#include <string.h>

int main()
{
	char name[30][30]; //30명 이름 저장 배열 선언
	int score[30][3]; //3과목 시험 성적 배열 선언
	double avg[30];//학생별 성적 평균 배열 선언

	//30명 학생 이름 입력
	printf(" >> 학생 이름을 입력하세요.\n");
	for (int i = 0; i < 30; i++)
	{
		gets(name[i]);
	}


	//30명 각 성적 3개 입력
	printf(" >> 학생 성적을 입력하세요.\n");
	for (int i = 0; i < 30; i++)
	{
		scanf_s("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);
	}

	//30명 각 점수 평균 배열에 저장하기
	for (int i = 0; i < 30; i++) {
		avg[i] = (double)(score[i][0] + score[i][1] + score[i][2]) / 30;
	}

	double avg_set[3];//원래 평균 백업ㄴ
	for (int i = 0; i < 30; i++) {
		avg_set[i] = avg[i];
	}

	//오름차순 정렬
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			if (avg[i] < avg[j]) {
				int temp = avg[i];
				avg[i] = avg[j];
				avg[j] = temp;
			}
		}
	}

	int num[30];


	printf("\n\n >> 결과입니다 <<\n");
	printf("학생이름|   평균   | 등수     \n");
	for (int i = 0; i < 30; i++) {
		for (int k = 0; k < 30; k++) {
			if (avg[i] == avg_set[k]) {
				num[k] = i;
			}
		}
	}
	for (int i = 0; i < 30; i++) {
		for (int k = 0; k < 30; k++) {
			if (avg[k] == avg_set[i]) {
				num[i] = k;
			}
		}
		printf("%7s | %7.2lf | %7d\n", name[i], avg[i], num[i]);
	}
	return 0;
}


/*
������ ���� ������ �����ϴ� ����ó�� ���α׷��� �ۼ��Ͻÿ�.

*�Է� : �л��̸���  C, C++,QT 3���� ���輺��
*��� : �л��̸�   ���  ���
*�л� �� : 30��

*/

#include <stdio.h>
#include <string.h>

int main()
{
	char name[30][30]; //30�� �̸� ���� �迭 ����
	int score[30][3]; //3���� ���� ���� �迭 ����
	double avg[30];//�л��� ���� ��� �迭 ����

	//30�� �л� �̸� �Է�
	printf(" >> �л� �̸��� �Է��ϼ���.\n");
	for (int i = 0; i < 30; i++)
	{
		gets(name[i]);
	}


	//30�� �� ���� 3�� �Է�
	printf(" >> �л� ������ �Է��ϼ���.\n");
	for (int i = 0; i < 30; i++)
	{
		scanf_s("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);
	}

	//30�� �� ���� ��� �迭�� �����ϱ�
	for (int i = 0; i < 30; i++) {
		avg[i] = (double)(score[i][0] + score[i][1] + score[i][2]) / 30;
	}

	double avg_set[3];//���� ��� �����
	for (int i = 0; i < 30; i++) {
		avg_set[i] = avg[i];
	}

	//�������� ����
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


	printf("\n\n >> ����Դϴ� <<\n");
	printf("�л��̸�|   ���   | ���     \n");
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
#include<stdio.h>

int main()
{
    int a[10];
    int num[10]={1,2,3,4,5,6,7,8,9,10}; //1~10까지의 정수
    int count[10]={0}; //각 정수가 입력된 개수
	int i;
    for (i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]>10 || a[i]<=0){
            break;
        }
		int j;
        for(j=0;j<10;j++){
            if (a[i] == num[j]){
                count[i]=count[i]+1;
                printf("*");
            }
        }   
    }
    for(i=0;i<10;i++){
        if(count[i]>=1){
            printf("%d : %d개\n",num[i],count[i]);
        }
    }

    return 0;
}
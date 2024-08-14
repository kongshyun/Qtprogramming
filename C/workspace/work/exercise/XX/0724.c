/*#include<stdio.h>

int main()
{
    char eng[26]; //대문자 문자열 저장
    for(int i=0;i<26;i++){
        eng[i]=65+i;
    }
    int count[26]={0,}; //각 정수가 입력된 개수
    int i=0;
    char a[100];
    while(1){
        scanf("%c",&a[i]);
        if(a[i]<65 || a[i]>90){
            break;
        }
        i++;
        
    }
    for(int j=0;j<i;j++){
        for(int k=0;k<26;k++){
            if(a[j]==eng[k]){
                count[k]+=1;
            }
        }
    }
    for(int i=0;i<26;i++){
        if(count[i]>=1){
            printf("%c : %d개\n",eng[i],count[i]);
        }
    }
    
    return 0;
}


*/


//정올 배열2
#include<stdio.h>

int main()
{
    int a[100];
    int j;
    for(j=0;j<100;j++){
        scanf("%d",&a[j]);
        if(a[j]==0){
            break;
        }
    }
    
    int ei[10]={0,1,2,3,4,5,6,7,8,9}; // 일의자리숫자
    int count[10]={0,}; //그 개수

    for(int i=0;i<j;i++){
        for(int k=0;k<10;k++){
            if(a[i]/10==ei[k]){
                count[k]++;
                //printf("count[%d] = %d\n", k,count[k]);
            }
        }
    }
    for(int a=0;a<10;a++){
        if(count[a]>=1){
            printf("%d : %d\n",ei[a],count[a]);
        }
    }
    
    return 0;
}
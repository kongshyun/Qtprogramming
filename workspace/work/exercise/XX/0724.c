#include<stdio.h>

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
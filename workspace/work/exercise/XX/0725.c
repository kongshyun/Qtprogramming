#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);



    char eng[26];
    for(int i=0;i<26;i++){
        eng[i]=65+i;
    }

    char semo[N][N];
    int a=0;
    for(int i=N;i>0;i--){
        for (int j=N;j>0;j--){
            for(int k=0;k<N-i;k++){
                semo[i][k]='0';
            }
            semo[i][j]=eng[a];
            printf("%c %c ", semo[N-4][N-4]);
            a++;
            if(a>26) a=0;
        }
    }

    for(int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            printf("%s ",semo[i][j]);
        }
        printf("\n");
    }
    return 0;
}

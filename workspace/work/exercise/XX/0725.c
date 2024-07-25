#include <stdio.h>


int main()
{
    int a[3][3];
    int b[3][3];
    char name[100];
    for(int i=0;i<3;i++){
        scanf("%s",name);
        for(int j=0;j<3;j++){
            scanf("%d",a[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<3;i++){
        scanf("%s",name);
        for(int j=0;j<3;j++){
            scanf("%d",b[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
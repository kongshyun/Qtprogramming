
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Hello World!");
	_exit(0);
	exit(0);	//return 0;
}
/*
	printf("ddd"); //강제 출력하기
	fflush(NULL); //fflush 사용
	
*/

/*
//JUNHOL #1291 구구단
#include <stdio.h>

int main()
{
    int s;
    int e;

    for(;;){
        scanf("%d%d",&s,&e);

        if(s<2 ||s>9||e<2||e>9){
            printf("INPUT ERROR!\n");
        }else
            break;

    }
    for(int j=1; j<10;j++){
        if(s>e){
			
            for(int i=s;i>=e;i--){
                printf("%d * %d = %2d   ",i,j,i*j);
            }
        }else{
            for(int i=s;i<=e;i++){
                printf("%d * %d = %2d   ",i,j,i*j);
            }
        }
        printf("\n");
    }
    return 0;
}


*/




/*
//JUNGOL #1341 구구단2
#include <stdio.h>

int main()
{
    int s,e;
    scanf("%d %d",&s,&e);

    if(s>e){
        for(int i=s;i>=e;i--){
            for(int j=1;j<10;j++){
                printf("%d * %d = %2d   ",i,j,i*j);
                if(j%3==0){
                    printf("\n");
                }
            }
			printf("\n");
        }
        
    }else{
        for(int i=s;i<=e;i++){
            for(int j=1;j<10;j++){
                printf("%d * %d = %2d   ",i,j,i*j);
                if(j%3==0){
                    printf("\n");
                }
            }
			printf("\n");
        }
    }

    return 0;
}*/
/*
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++);{
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*
//JUNGOL #161

#include <stdio.h>

int main()
{
    int score[100];
    int count[11];
    int i;
    for(i=0;i<100;i++){
        scanf("%d",&score[i]);
        if(score[i]==0){
            break;
        }
    }
    for(int j=0;j<i;j++){
        int a=score[j]/10;
        for(int i=0;i<=10;i++){
            if(a==i){
                count[i]++;
            }   
        }
    }
    for(int i=10;i>=0;i--){
        if(count[i]>0){
            printf("%d : %d person\n",i*10,count[i]);
        }
        
    }
    return 0;
}
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    char a[100][100];
    char b='A';
    for(int i=n;i>0;i--){
        for(int j=n;j>0;j--){
            a[j][i]=b;
			b+=1;
            if (b =='Z'+1){
                b='A';
            }

        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
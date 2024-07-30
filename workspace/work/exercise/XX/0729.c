#include <stdio.h>


int main()
{
    int a;
    while(1){
        scanf("%c",&a);
        
        if(a=='0'){
            printf("%c -> %d",a,a);printf("\n");
            break;
        }
        printf("%c -> %d",a,a);printf("\n");
    }
    return 0;
}
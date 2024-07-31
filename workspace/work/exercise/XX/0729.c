#include <stdio.h>


int main()
{
    char a;
    while(1){
        scanf(" %c",&a);
        if(a=='0'){
            printf("%c -> %d\n",a,a);
            break;
        }
        printf("%c -> %d\n",a,a);
    }
    return 0;
}
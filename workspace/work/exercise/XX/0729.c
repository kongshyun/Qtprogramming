#include <stdio.h>

int main ()
{
    

    while(1){
        char a;
        scanf("%c",&a);
		getchar();
        if((a>=97 && a<=122) ||( a>=65 && a<=90)){
            printf("%c\n",a);
        }
        else if(a>=48 && a<=57){
            printf("%d\n",a);
        }
        else{
            break;
        }
        //while ((getchar()) != '\n');
    }
    return 0;
}
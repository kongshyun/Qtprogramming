


/*
//문자 입력 할때 %*c%c
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	float f;
	char c,str[32];
	
	scanf("%d",&i);	printf("1:%d\n",i);
	scanf("%f",&f);	printf("2:%f\n",f);
	scanf("%*c%c",&c);	printf("3:%c\n",c);
	scanf("%s",&str);	printf("4:%s\n",str);
	return 0;
	
}


//fflush(NULL);
#include <stdio.h>

int main()
{
    int a;
    while(1)
    {
        printf("number? ");
        fflush(NULL); // \n을 해주는 거임!!
        scanf("%d",&a);
        if(a==0){
            break;
        }
        else if(a>0){
            printf("positive integer\n");
        }
        else if(a<0){
            printf("negative number\n");
        }
    }
    return 0;
}

*/

#include <stdio.h>

int main()
{
    double y;
    printf("yard? ");
    fflush(NULL);
    scanf("%lf",&y);

    printf("10.1yard = %.1lfcm",y*91.44);

    return 0;
}
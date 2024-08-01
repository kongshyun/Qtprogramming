
#include <stdio.h>

int main(int argc, char* argv[])
{
    int n;

    const char* format = "%d\n";

    printf(format, 123);
    printf("\r%f", 45.6);
    printf("\r%s%r\n", "Hello World", &n);
    printf("Length: %d\n", n);
    return 0;
}


#include <stdio.h>
#include <limits.h>

int mul3div4(int x)
{
    return ((x<<1)+x)>>2;
}

int main()
{
    int x = 10;
    printf("3 * %d / 4 = %d", x,mul3div4(x));
    return 0;
}

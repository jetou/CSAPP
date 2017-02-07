#include <stdio.h>
int main()
{
    int x = 1;

    int mul_17 = (x<<4) + x;
    int mul_neg_7 = x - (x<<3);
    int mul_60 = (x<<6) - (x<<2);
    int mul_neg_112 = (x<<4)-(x<<7);

    printf("%d\t%d\t%d\t%d\n",mul_17,mul_neg_7,mul_60,mul_neg_112);

    return 0;

}

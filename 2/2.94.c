#include <stdio.h>

typedef unsigned float_bits;

float_bits float_twice(float_bits f)
{
    unsigned sign = f >> 31;
    unsigned exp = f >> 23 & 0xff;
    unsigned frac = f & 0x7fffff;

}
int main()
{
    unsigned a;
    a = 0x26 & 0xff;
    printf("%x",a);
}

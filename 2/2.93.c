#include <stdio.h>
typedef unsigned float_bits;

float_bits float_absval(float_bits f)
{
    unsigned mask = ~(1<<31);
    unsigned exp = f >> 23 & 0xff;
    unsigned frac = f & 0x7fffff;

    if(exp == 0xff && frac != 0)
        return f;

    return f & mask;
}

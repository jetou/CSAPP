#include <stdio.h>

typedef unsigned float_bits;

float_bits float_half(float_bits f)
{
    unsigned sign = f >> 31;
    unsigned exp = f >> 23 & 0xff;
    unsigned frac = f & 0x7fffff;

    if(exp^0xff==0&&frac!=0)return f;
    else if(exp > 0) exp = exp -1;
    else {
        if(frac&0x1!=0&&(frac>>1)&0x1==1)
            frac = frac>>1+1;
        else frac = frac >> 1;
    }

    return (sign<<31)|(exp<<23)|frac;
}

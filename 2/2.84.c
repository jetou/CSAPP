#include <stdio.h>

int float_le(float x, float y)
{
    unsigned ux = f2u(x);
    unsigned uy = f2u(y);

    unsigned sx = ux >> 31;
    unsigned sy = uy >> 31;

    return ((!sx && !sy && ux <= uy) || (sx && sy && ux>=uy)||
            (!sy && sx) || (ux << 1) == (uy << 1));

}

#include <stdio.h>

typedef unsigned packed_t;

int xbyte(packed_t word, int bytenum)
{
    return (int) word<< ((3 - bytenum) << 3) >> 24;
}

int main()
{
    packed_t x = 0x1234567;
    printf("%x\n%x\n%x\n%x\n",xbyte(x, 0),xbyte(x,1),xbyte(x,2),xbyte(x,3));

    return 0;
}

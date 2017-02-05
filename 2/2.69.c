#include <stdio.h>
unsigned rotate_right(unsigned x, int n){
    int w = sizeof(unsigned)*8;
    return (x<<n) | (x>>(w-n-1)>>1);
}
int main()
{
    unsigned x = 0x12345678;

    printf("n=4: %x\nn=20: %x\nn=0: %x\n", rotate_right(x, 4), rotate_right(x, 20), rotate_right(x, 0));

    return 0;
}

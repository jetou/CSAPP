#include <stdio.h>
unsigned replace_byte(unsigned x, int i, unsigned char b)
{
    char *p = (char *)&x;
    p[i]=b;
    return x;
}
int main()
{
    unsigned a;
    a=replace_byte(0x12345678, 1, 0xab);
    printf("%x",a);
}

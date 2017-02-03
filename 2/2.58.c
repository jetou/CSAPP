#include <stdio.h>

int is_little_endian(){
    int a = 1;
    char *p = (char*)&a;
    return p[0];
}

int main()
{
    char b;
    b = is_little_endian();
    printf("%x",b);


}

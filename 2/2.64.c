#include<stdio.h>
int any_even_one(unsigned x){
    return !!(x & (0x55555555));
}
int main()
{
    int a = 0x8;
    printf("%d", any_even_one(a));
    return 0;
}

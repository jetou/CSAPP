#include <stdio.h>
int int_shifts_are_logical()
{
    int x = ~0;

    return !!(~(x>>1));
}

int main()
{
    int x = int_shifts_are_logical();
    printf("%d", x);
    return 0;
}

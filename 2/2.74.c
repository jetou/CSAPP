#include <stdio.h>
#include <limits.h>

int tsub_ok(int x, int y)
{
    int sub = x - y;
    int pos_over = !(x & INT_MIN) && (y & INT_MIN) && (sub & INT_MIN);
    int neg_over = (x & INT_MIN) && !(y & INT_MIN) && !(sub & INT_MIN);

    return pos_over || neg_over;
}

int main(void)
{
    printf("%d", tsub_ok(INT_MAX, -1));
}

#include <stdio.h>
#include <limits.h>
//INT_MIN = 0x80000000
int saturating_add(int x, int y)
{
    int sum = x + y;
    int neg_over = (x & INT_MIN) && (y & INT_MIN) && !(sum & INT_MIN);
    int pos_over = !((x & INT_MIN) || (y & INT_MIN) || !(sum & INT_MIN));

    (neg_over && (sum = INT_MIN)) || (pos_over && (sum = INT_MAX));

    return sum;
}
int main()
{
    printf("%d", saturating_add(INT_MAX,2));
}

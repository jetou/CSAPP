#include <stdio.h>
int fits_bits(int x, int n){
    unsigned mask = x >> n;
    return !mask||!(~mask);
}
int main()
{
    int x = 33, n = 5;
    for(int i=0;i<32;i++)
    printf("%x %d: %d\n",i,n,fits_bits(i,n));

}

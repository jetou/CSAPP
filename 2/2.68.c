#include <stdio.h>
int lower_one_mask(int n){
    return (2<<(n-1))-1;
}
int main()
{
    printf("6 %x\n 7 %x\n", lower_one_mask(6), lower_one_mask(17));
    return 0;
}

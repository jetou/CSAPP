#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *callocs(size_t nmemb, size_t size)
{
    return memset(malloc(size*nmemb),0,size*nmemb);
}
int main()
{
    int i;
    int* pn = (int*)callocs(10, sizeof(int));
    for(i=0;i<10;i++)
        printf("%d\n", pn[i]);
    printf("\n");
    free(pn);
    return 0;
}

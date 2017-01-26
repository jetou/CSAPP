#include <stdio.h>
#include <stdlib.h>

struct ApplyStruct {
    int(*func)();
    int argc;
    int *argv;
};


typedef struct ApplyStruct Apply;


int
add(int argc, int *argv){
    int sum = 0;
    for(size_t i = 0; i < argc; i++){
        sum += argv[i];
    }

    return sum;
}

int
mul(int argc, int *argv) {
    int sum = 1;
    for(size_t i = 0; i< argc;i++){
        sum *= argv[i];
    }

    return sum;
}

int
apply(Apply a) {
    printf("a.argc, %d\n", a.argc);
    int i = a.func(a.argc, a.argv);
    printf("a.func, %d\n",i);
    return i;
}

int
main(void) {
    Apply a;
    int argc = 5;
    a.argc = argc;
    a.argv = malloc(sizeof(int)*argc);
    for(size_t i =  0 ; i<a.argc;i++){
        a.argv[i] = i+1;
    }

    a.func = add;
    printf("apply add, %d\n", apply(a));


    a.func = mul;
    printf("apply mul, %d\n", apply(a));

    return 0;
}

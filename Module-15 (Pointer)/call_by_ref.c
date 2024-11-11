#include <stdio.h>

void my_test_func(int *x){ // *x is the pointer of x
    *x = 100;

    printf("%d\n", *x);
}

int main() {
    int x = 20;

    printf("%d\n", x); // value of main x

    my_test_func(&x); // pass address of x

    printf("%d\n", x); // value of main x changed here
    
    return 0;
}
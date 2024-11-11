#include <stdio.h>

void m(int p, int q)
{
    int temp = p;
    p = q;
    q = temp;
}

int main()
{

    // Quiz 7
    // int a = 6, b = 5;
    // m(a, b);
    // printf("%d %d\n", a, b);


    // Quiz 8
    // int ary[4] = {1, 2, 3, 4};

    // printf("%d\n", *ary);


    // Quiz 10
    int ary[4] = {1, 2, 3, 4};

    int *p;

    p = ary + 3;

    printf("%d\n", ary[3]);

    *p = 5;

    printf("%d\n", ary[3]);
}

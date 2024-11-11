#include <stdio.h>
int main()
{
    int x = 10;

    int *ptr = &x;

    int *ptr2 = ptr;

    printf("%d\n", x);
    printf("%d\n", *ptr);
    printf("%d\n", *ptr2);

    // Memory Address of int x 
    printf("%p\n", &x);
    printf("%p\n", ptr);
    printf("%p\n", ptr2);

    // Memory Address of int ptr, ptr2 
    printf("%p\n", &ptr);
    printf("%p\n", &ptr2);

    return 0;
}
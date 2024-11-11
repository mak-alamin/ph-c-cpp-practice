#include <stdio.h>

int main() {
    int arr[8] = {2,3,4,5,34,56,34,55};

    printf("0 index element:  %d\n", arr[0]);
    printf("0 index element: %d\n", *arr);

    printf("1 index element: %d\n", arr[1]);
    printf("1 index element: %d\n", *(arr+1));
    printf("1 index element: %d\n", *(1+arr));
    printf("1 index element: %d\n", 1[arr]);

    return 0;
}
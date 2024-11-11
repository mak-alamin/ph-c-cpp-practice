#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "apple";

    int result = strcmp(str1, str2);

    printf("%d \n", result);

    if (result > 0) {
        printf("str1 is greater than str2.\n");
    } else if (result < 0) {
        printf("str1 is less than str2.\n");
    } else {
        printf("The strings are equal.\n");
    }

    return 0;
}

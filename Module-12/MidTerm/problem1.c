#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int size;
    scanf("%d", &size);

    int div_by_2_count = 0;
    int div_by_3_count = 0;
    int num;

    for ( int i = 0; i < size; i++)
    {
        scanf("%d", &num);

        if(num % 2 == 0){
            div_by_2_count++;

        } else if(num % 3 == 0){
            div_by_3_count++;
        }
    }

    printf("%d %d\n", div_by_2_count, div_by_3_count);

    return 0;
}

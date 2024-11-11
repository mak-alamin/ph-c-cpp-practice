#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int T;
    scanf("%d", &T);

    while (T > 0) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int new_days = (M1 * D) / (M1 + M2);
        
        int fewer_days = D - new_days;
        
        printf("%d\n", fewer_days);

        T = T - 1;
    }
     
    return 0;
}

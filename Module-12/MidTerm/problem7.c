#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T > 0) {
        int N, X, appeared = 0;
        scanf("%d", &N); 

        int A[N];
   
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        scanf("%d", &X);  

        for (int i = 0; i < N; i++) {
            if (A[i] == X) {
                appeared = 1;  
                break;
            }
        }

        if (appeared) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

        T--;
    }

    return 0;
}
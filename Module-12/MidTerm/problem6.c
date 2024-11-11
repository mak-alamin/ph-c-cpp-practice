#include <stdio.h>
#include <string.h>

int main() {
    char S[10001];
    int count[26] = {0};

    scanf("%s", S);

    for (int i = 0; i < strlen(S); i++) {
        int value = S[i] - 'a';
        count[value]++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c - %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}

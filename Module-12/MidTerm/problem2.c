#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[100001];
    scanf("%s", s);
      
    int conso_count = 0;

    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        char c = s[i];

        if('a' != c && 'e' != c && 'i' != c && 'o' != c && 'u' != c){
            conso_count++;
        }
    }
    
    printf("%d\n", conso_count);

    return 0;
}

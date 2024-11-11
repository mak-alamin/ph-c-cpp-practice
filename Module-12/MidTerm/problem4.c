#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T > 0)
    {
        char S[10001];
        scanf("%s", S);

        int capitalCount = 0, smallCount = 0, digitCount = 0;

        for (int i = 0; S[i] != '\0'; i++)
        {
            if (isupper(S[i]))
            {
                capitalCount++;
            }
            else if (islower(S[i]))
            {
                smallCount++;
            }
            else if (isdigit(S[i]))
            {
                digitCount++;
            }
        }

        printf("%d %d %d\n", capitalCount, smallCount, digitCount);

        T--;
    }

    return 0;
}

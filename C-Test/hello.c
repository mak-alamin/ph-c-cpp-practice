#include <stdio.h>
int main()
{
    int n, x, v;

    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &x, &v);

    a[x] = v;

    for (int j = n-1; j >= 0; j--)
    {
        printf("%d ", a[j]);
    }

    return 0;
}
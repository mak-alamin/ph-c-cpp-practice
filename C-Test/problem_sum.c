#include <stdio.h>
int main()
{
    int n;
    int sum_pos = 0, sum_neg = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
        {
            sum_pos += arr[i];
        } else {
            sum_neg += arr[i];
        }
    }

    printf("%d %d", sum_pos, sum_neg);

    return 0;
}
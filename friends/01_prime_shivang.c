#include <stdio.h>
int main()
{
    int a, b, i, d;
    printf("Enter lower then higher limit. \n");
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
    {
        for (d = 2; d < i; d++)
        {
            if (i % d == 0)
            {
                break;
            }
        }
        if (i == d)
        {
            printf("%d ", d);
        }
    }
    return 0;
}
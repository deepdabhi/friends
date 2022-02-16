#include <stdio.h>
int main()
{
    int x, y;
    printf("X\tY\tX*Y\n");
    for (x = 0; x <= 1; ++x)
        for (y = 0; y <= 1; y++)
        {
            printf("%d\t%d\t%d\n", x, y, x * y);
        }
    return 0;
}
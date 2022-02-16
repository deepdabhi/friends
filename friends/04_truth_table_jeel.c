#include <stdio.h>
int main()
{
    int x, y, z;
    printf("X\tY\tZ\tX * Y + Z\n");
    for (x = 0; x <= 1; x++)
        for (y = 0; y <= 1; y++)
            for (z = 0; z <= 1; z++)
            {
                if (x * y + z == 2)
                {
                    printf("%d\t%d\t%d\t1\n", x, y, z);
                }
                else
                {
                    printf("%d\t%d\t%d\t%d\n", x, y, z, x * y + z);
                }
            }
    return 0;
}
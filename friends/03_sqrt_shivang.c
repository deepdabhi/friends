#include <stdio.h>
#include <math.h>
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 9999)
        {
            break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 0)
        {
            continue;
        }
        if (arr[i] == 9999)
        {
            break;
        }
        int num = pow(arr[i], 0.5);
        printf("%d ", (num));
    }
    return 0;
}
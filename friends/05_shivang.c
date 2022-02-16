#include <stdio.h>
int main()
{
    long int n;

    printf("Enter a number : \n");
    scanf("%d", &n);
    printf("%d",isPrime(n));

    return 0;
}
int isPrime(long int a)
{
    if (a <= 1)
    {
        return 0;
    }
    int c = 2;
    while (c * c <= a)
    {
        if (a % c == 0)
        {
            return 0;
            break;
        }
        c++;
    }
    if (c * c > a)
    {
        return 1;
    }
    return 0;
}
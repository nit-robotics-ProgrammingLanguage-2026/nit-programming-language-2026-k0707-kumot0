
#include <stdio.h>

int is_prime(int x)
{
    if (x < 2)
    {
        return 0;
    }

    if (x == 2)
    {
        return 1;
    }

    if (x % 2 == 0)
    {
        return 0;
    }

    for (int d = 3; d <= x / d; d += 2)
    {
        if (x % d == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    int n;
    int count = 0;

    scanf("%d", &n);

    if (n > 10000)
    {
        printf("NG");
        return 0;
    }

    for (int number = 2; number <= n; number++)
    {
        count += is_prime(number);
    }

    printf("%d", count);

    return 0;
}


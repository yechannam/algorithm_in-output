#include <stdio.h>

int main()
{
    int a = 0, b = 0;

    while (scanf("%d %d", &a, &b) == 2)
    {
        if (0 < a && b < 10)
            printf("%d\n", a + b);
        else
            break;
    }
    return (0);
}
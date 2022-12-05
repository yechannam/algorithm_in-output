#include <stdio.h>

int main()
{
    int a = 0, b = 0;

    while (scanf("%d %d", &a, &b))
    {
        if (0 < a && b < 10)
            printf("%d\n", a + b);
        else if (a == 0 && b == 0)
            break;
    }
    return (0);
}
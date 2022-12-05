#include <stdio.h>

int main()
{
    int t = 0;
    int a = 0, b = 0;

    scanf("%d", &t);
    while (t-- > 0)
    {
        scanf("%d %d", &a, &b);
        if (0 < a && b < 10)
            printf("%d\n", a + b);
        else
            break;
    }
    return (0);
}
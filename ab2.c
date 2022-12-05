#include <stdio.h>

int main()
{
    int a = 0, b = 0;

    scanf("%d", &a);
    if (a <= 0)
        return (0);
    scanf("%d", &b);
    if (b >= 10)
        return (0);
    printf("%d", a+b);
    return (0);
}
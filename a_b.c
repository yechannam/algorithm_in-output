#include <stdio.h>

int main()
{
    int i = 1;
    int a = 0, b = 0;
    double result;

    scanf("%d %d", &a, &b);
    if (0 < a && b < 10)
    {
        result = (double) a / b;
        printf("%.9f\n", result);
    } 
    return (0);
}
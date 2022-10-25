#include <stdio.h>
int mul = 1, i, n;
void fact();
void main()
{

    printf("Enter number : ");
    scanf("%d", &n);
    fact();
    printf("Factorial : %d", mul);
}
void fact()
{
    if (n >= 1)
    {
        mul = mul * n;
        n = n - 1;
        fact();
    }
}
#include <stdio.h>
int n, r, sum = 0;
void armstrong();
void main()
{
    int orig;
    printf("Enter number :");
    scanf("%d", &n);
    orig = n;
    armstrong();
    if (orig == sum)
    {
        printf("Armstrong number ");
    }
    else
    {
        printf("Not armstrong number");
    }
}
void armstrong()
{
    if (n != 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
        printf("%d\n", sum);
        armstrong();
    }
}
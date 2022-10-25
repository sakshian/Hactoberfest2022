#include <stdio.h>
int digit, sum = 0, n;
void fun();
void main()
{

    printf("Enter n :");
    scanf("%d", &n);
    fun();
    printf("Sum = %d", sum);
}
void fun()
{
    if (n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
        fun();
    }
}
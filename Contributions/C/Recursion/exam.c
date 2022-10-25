#include <stdio.h>
int n;
void fun(int);
void main()
{
    n = 25;
    fun(n);
}
void fun(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d", n % 2);
    fun(n / 2);
}
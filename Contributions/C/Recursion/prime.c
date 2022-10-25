#include <stdio.h>
int flag;
int prime(int, int);
void main()
{
    int n, i;
    printf("Enter number : ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("Not prime number ");  
    }
    else
    {
        flag = prime(n, n / 2);
        if (flag == 1)
        {
            printf("prime number ");
        }
        else
        {
            printf("Not prime number");
        }
    }
}
int prime(int n, int i)
{

    if (i == 1)
    {
        return 1;
    }
    else
    {
        if (n % i == 0)
        {
            return 0;
        }
        else
        {
            i = i - 1;
            return prime(n, i);
        }
    }
}
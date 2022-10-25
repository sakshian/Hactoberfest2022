#include <stdio.h>
int n, rev = 0, rem;
void reverse();
void main()
{
    int orig;
    printf("Enter number : ");
    scanf("%d", &n);
    orig = n;
    reverse(); // printf("%d\n", rev);  // printf("%d\n", orig);
    printf("Reverse number : %d ", rev);
}
void reverse()
{
    if (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
        reverse();
    }
}
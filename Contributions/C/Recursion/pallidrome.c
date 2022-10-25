#include <stdio.h>
int n, rev = 0, rem;
void pallin();
void main()
{
    int orig;
    printf("Enter number : ");
    scanf("%d", &n);
    orig = n;
    pallin(); // printf("%d\n", rev);  // printf("%d\n", orig);

    if (orig == rev)
    {
        printf("pallindrome ");
    }
    else
    {
        printf("Not pallindrome");
    }
}
void pallin()
{
    if (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
        pallin();
    }
}
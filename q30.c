#include <stdio.h>
void main()
{
    int n, rev = 0, digit;
    printf("Enter the digit\n");
    scanf("%d", &n);
    for (int i = 0; i < n;)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    printf("the reverse value is %d", rev);
}
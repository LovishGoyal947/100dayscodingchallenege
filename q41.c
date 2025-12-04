#include <stdio.h>
#include <math.h>

void main()
{
    int num, digit2, digit1, b, mid, temp;
    printf("Enter the number");
    scanf("%d", &num);
    b = (int)log10(num) + 1;
    digit1 = num % 10;
    digit2 = num / (int)pow(10, b - 1);
    mid = (num % (int)pow(10, b - 1)) / 10;
    temp = digit1 * pow(10, b - 1) + mid * 10 + digit2;
    printf("%d", temp);
}
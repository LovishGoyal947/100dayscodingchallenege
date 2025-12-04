#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the no.\n");
    scanf("%d", &a);
    printf("Enter the no.\n");
    scanf("%d", &b);
    printf("Enter the no.\n");
    scanf("%d", &c);

    if (a == b && b == c &&c==a)
    {
        printf("it is a equilateral");
    }

    if (a != b || a != c || b != c){

        if (a = b && a != c && b != c)
    {

        printf("it is a isosleces triangle");
    }
    else if (a == c && a != b && b != c)
    {
        printf("it is a isosleces triangle");
    }
    else if (b == c && a != b && a != c)
    {
        printf("it is a isosleces triangle");

    }
}

    else if (a != b && a != c && b != c)
    {
        printf("it is a scalene triangle");
    }
}
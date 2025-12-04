#include <stdio.h>
void main()
{
    int bill, unit;
    printf("Enter the units consumed\n");
    scanf("%d",&unit);
    if (unit > 0 && unit < 101)
    {
        printf("The bill is %d", unit * 5);
    }
    else if (unit > 100 && unit < 201)
    {
        printf("The bill is %d", 500 + ((unit - 100) * 7));
    }
    else if (unit > 200 && unit < 301)
    {
        printf("The bill is %d", 1200 + ((unit - 200) * 10));
    }
    else if (unit > 300)
    {
        printf("The bill is %d", 2200 + ((unit - 300) * 12));
    }
}
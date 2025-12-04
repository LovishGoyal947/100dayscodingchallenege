#include <stdio.h>
#include <ctype.h>
void main()
{
    char c;
    printf("Enter the characater ");
    scanf(" %c", &c);

    

    if (isalpha(c))
    {
        printf("it is a alphabet\n");
    }

    else if (isupper(c))
    {
        printf("it is a uppercase\n");
    }
    else if (islower(c)){
        printf("it is a lowercase\n");
    }
    else if (isdigit(c))
    {
        printf("it is a digit\n");
    }
    else
    printf("it is a special character");
}


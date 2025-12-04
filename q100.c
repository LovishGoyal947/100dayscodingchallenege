#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    int k;

    printf("Enter a string\n");
    fgets(str, sizeof(str), stdin);

    k = strlen(str);
    if (str[k - 1] == '\n')
    {
        str[k - 1] = '\0';
        k--;
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = i; j < k; j++)
        {
            for (int k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }
            printf(",");
        }
    }
}

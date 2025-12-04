#include <stdio.h>
void main()
{
    int i, j;
    printf("Enter the numbers\n");
    scanf("%d %d", &i, &j);
    int arr[i][j];
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            scanf("%d", &arr[a][b]);
        }
    }
    int temp =i;
    i=j;
    j=temp;
    
    for (int b = 0; b < i; b++)
    {
        for (int a = 0; a < j; a++)
        {
            printf("%d ", arr[a][b]);
        }
        printf("\n");
    }

}
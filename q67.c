#include <stdio.h>
void main()
{
    int n, i;

    printf("Enter the no\n");
    scanf("%d", &n);
    int arr[50];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    int count;
    scanf("%d %d", &k, &count);
    
    for (int i = n; i > k; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[k] = count;

    for (int i = 0; i <= n; i++)
    {

        printf("%d ", arr[i]);
    }
    printf("\n");
}

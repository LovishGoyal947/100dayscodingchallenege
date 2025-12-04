#include <stdio.h>
void main()
{
    float  f, sum = 0;
    int n;
    printf("Enter the no\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        f = (float)(i * 2 - 1) / (i * 2);
        if(f==(float)1/2){
            f=1;
        }

        sum += f;
    }

    printf("%.2f", sum);
}
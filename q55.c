#include <stdio.h>
void main()
{
    int n, not_prime = 0;
    printf("Enter the no.\n");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        not_prime = 1;
        for(int j=2;j<=9;j++){
            if(i%j==0&&i!=j)
            not_prime=0;
        }
        if(not_prime==1){
            printf("%d",i);
        }
    }
}

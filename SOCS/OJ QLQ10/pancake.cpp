#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    int n;
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);

        int total = 1;
        printf("Case %d:",i);
        for (int j = 1; j <= n; total += j, j++)
        {
            printf(" %d", total);
        }
        puts("");
    }
    return 0;
}
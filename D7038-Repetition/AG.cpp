#include <stdio.h>

int main()
{
    int range;
    scanf("%d", &range);
    long long int cuts, slices;

    for (int i = 1; i <= range; i++)
    {
        scanf("%lld", &cuts);
        printf("Case %d: ", i);
        slices = 1;
        for (int j=1; j<=cuts; j++)
        {
            printf("%lld", slices);
            slices += j;
            if (j < cuts)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int sum(char x[100][10], int a, int b)
{
    int i = a - 1;
    int total = 0;
    while (i < b)
    {
        total += atoi(x[i]);

        i++;
    }
    return total;
}
int main()
{
    int T, fake, i, ht, hi, hi2;
    scanf("%d", &T);
    char store[T+1][101][101][100];
    int pj[T];
    for (i = 0; i < T; i++)
    {
        ht = 0;
        scanf("%d", &ht);
        pj[i] = ht;
        
        for (hi = 0; hi < ht; hi++)
        {
            for (hi2 = 0; hi2 < ht; hi2++)
            {
                scanf("%s", store[i][hi][hi2]);
            }
        }
    }
    int ho = 0;
    long long int sum[T][ht];
    long long int mo = 0;
    for (i = 0; i < T; i++)
    {
        ho = 0;

        for (hi = 0; hi < ht; hi++)
        {
            mo = 0;
            for (hi2 = 0; hi2 < ht; hi2++)
            {
                if (strlen(store[i][hi][hi2]) < 1)
                    continue;
                mo += atoi(store[i][hi2][hi]);
               
            }
            if( !(mo == 0)){
                sum[i][ho] = mo;
                // printf("%d,", sum[i][ho]);
                // printf("-");
            }
            ho++;
        
        }
    }
    int g = 0;
    for (i = 0; i < T; i++)
    {
        printf("Case #%d:", i+1);
        for (g = 0; g < pj[i]; g++)
        {
            printf(" %lld",sum[i][g]);
        }
        printf("\n");
       
    }

    return 0;
}
/*
2
3
1 2 3
4 5 6
7 8 9
5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
25000000 17 18 19 20
25000000 25000000 25000000 25000000 92233720354775000

*/

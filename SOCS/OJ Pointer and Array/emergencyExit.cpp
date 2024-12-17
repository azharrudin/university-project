#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    char pattern[10000];
    for (int i = 1; i <= t; i++)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        // scan stairs
        for (int j = 0; j < n; j++)
        {
            scanf(" %c", &pattern[j]);
        }

        // check stairs
        int stairs1 = 0;
        int stairs2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (pattern[j] == '1')
            {
                stairs1 = j;
                break;
            }
        }

        for (int j = n - 1; j >= 0; j--)
        {
            if (pattern[j] == '1')
            {
                stairs2 = j;
                break;
            }
        }

        // check dead or alive
        int lives = k - 1;
        int floor = 1;
        int isDead = 0;
        for (int j = 0; j < n; j++)
        {
            if (n == k || (stairs1 < k && stairs2 > n - k -1))
            {
                break;
            }
            else if (stairs1 == 0 || stairs2 == 0)
            {
                isDead = 1;
                break;
            }
            else
            {
                if (floor == 1)
                {
                    if (pattern[j] == '0')
                    {
                        if (lives > 0)
                        {
                            lives--;
                        }
                        else
                        {
                            isDead = 1;
                            break;
                        }
                    }
                    else if(pattern[j] == '1' && stairs1 == j)
                    {
                        lives = k - 1;
                        floor = 2;
                    }
                }else{
                    if (pattern[j] == '1' && stairs2 == j)
                    {
                        floor = 1;
                        lives = k-2;
                    }
                }
            }
        }

        if (isDead == 1)
        {
            printf("Case #%d: Dead\n", i);
        }
        else
        {
            printf("Case #%d: Alive\n", i);
        }
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int t, halls, hp, res[500], count, end1, end2;

    scanf("%d", &t);
    getchar();

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &halls, &hp);
        getchar();
        char hall[halls + 5];

        scanf("%s", hall);
        getchar();

        end1 = 0;
        end2 = 0;
        count = 0;

        for (int j = 0; j < halls; j++)
        {
            if (end1 == 0)
            {
                if (hall[j] == '1')
                {
                    end1 = j + 1;
                }
            }
            if (hall[j] == '1')
            {
                count++;
            }
        }

        for (int k = halls - 1; k > halls - hp - 1; k--)
        {
            if (end2 == 0)
            {
                if (hall[k] == '1')
                {
                    end2 = k + 1;
                }
            }
        }

        res[i] = 0;
        if (halls <= hp)
        {
            res[i] = 1; // alive
        }
        else if (count == 1)
        {
            res[i] = 0; // dead
        }
        else if (end1 <= hp && end2 > halls - hp)
        {
            res[i] = 1; // alive
        }
        else
        {
            res[i] = 0; // dead
        }
    }

    for (int i = 0; i < t; i++)
    {
        if (res[i] == 1)
        {
            printf("Case #%d: Alive\n", i + 1);
        }
        else if (res[i] == 0)
        {
            printf("Case #%d: Dead\n", i + 1);
        }
    }

    return 0;
}
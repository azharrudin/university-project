#include <stdio.h>

/*
ATAS BAWAH KIRI KANAN
[i-1][j]
[i+1][j]
[i][j-1]
[i][j+1]

SERONG
[i-1][j+1]
[i-1][j-1]
[i+1][j+1]
[i+1][j-1]
*/

int main()
{

    FILE *fp = fopen("testdata.in", "r");
    int t;
    fscanf(fp, "%d\n", &t);
    getchar();

    for (int tc = 1; tc <= t; tc++)
    {
        int n, m;
        fscanf(fp, "%d %d\n", &n, &m);
        getchar();

        int barisAwal;
        int kolomAwal;
        int field[101][101];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                fscanf(fp, "%c", &field[i][j]);
                if (field[i][j] == 'F')
                {
                    barisAwal = i;
                    kolomAwal = j;
                }
            }
            getchar();
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (tc > 1)
                {
                    if (field[i][j] == 'F')
                    {
                        if (field[i - 1][j] == '#' || field[i + 1][j] == '#' || field[i][j - 1] == '#' || field[i][j + 1] == '#')
                        {
                            field[i - 1][j] = 'F';
                            field[i + 1][j] = 'F';
                            field[i][j - 1] = 'F';
                            field[i][j + 1] = 'F';
                        }

                        if (field[i - 1][j + 1] == '#' || field[i - 1][j - 1] == '#' || field[i + 1][j - 1] == '#' || field[i + 1][j + 1] == '#')
                        {
                            field[i - 1][j + 1] = 'F';
                            field[i - 1][j - 1] = 'F';
                            field[i + 1][j + 1] = 'F';
                            field[i + 1][j - 1] = 'F';
                        }
                    }
                }
            }
        }

        printf("Case #%d:\n",tc);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                printf("%c", field[i][j]);
            }
            puts("");
        }
    }

    fclose(fp);

    return 0;
}
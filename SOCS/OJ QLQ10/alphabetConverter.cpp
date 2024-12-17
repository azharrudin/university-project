#include <stdio.h>
#include <string.h>

int main()
{
    char string[100][100];
    char a, b;

    int t, n;
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &t);

    for (int i = 0; i < t; i++)
    {
        fscanf(fp, "%[^\n]\n", string[i]);
        char text[101];
        strcpy(text, string[i]);
        int len = strlen(text);

        fscanf(fp, "%d\n", &n);
        char alphabet1[27] = {0};
        for (int z = 0; z < n; z++)
        {
            fscanf(fp, " %c %c\n", &a, &b);
            alphabet1[a - 'A']++;
            for (int j = 0; j < len; j++)
            {
                if (text[j] == a && alphabet1[a - 'A'] == 1)
                {
                    text[j] = b;
                }
            }
        }

        int alphabet[27] = {0};
        int index;
        for (int k = 0; k < len; k++)
        {
            if (text[k] >= 'A' && text[k] <= 'Z')
            {
                index = text[k] - 'A';
                alphabet[index]++;
            }
        }

        for (int k = 0; k < 27; k++)
        {
            if (alphabet[k] > 0)
            {
                printf("%c %d\n", k + 'A', alphabet[k]);
            }
        }
    }
    fclose(fp);
    return 0;
}
#include <stdio.h>
#include <string.h>

struct Data
{
    char nim[11];
    char nama[100];
};

int main()
{

    struct Data data[100];

    FILE *fp = fopen("testdata.in", "r");
    int t;
    fscanf(fp, "%d\n", &t);

    for (int i = 0; i < t; i++)
    {
        fscanf(fp, "%s %[^\n]\n", data[i].nim, data[i].nama);
    }

    int n;
    fscanf(fp, "%d\n", &n);

    char num[11];
    int found;
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%[^\n]\n", num);

        for (int j = 0; j < t; j++)
        {
            found = 0;
            if (strcmp(num, data[j].nim) == 0)
            {
                found = 1;
                printf("Case #%d: %s\n", i+1, data[j].nama);
                break;
            }
        }

        if(found == 0){
            printf("Case #%d: N/A\n", i+1);
        }
    }

    fclose(fp);
    return 0;
}
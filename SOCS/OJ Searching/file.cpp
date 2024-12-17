#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Data
{
    char key[10];
    char words[100];
};

int main()
{

    struct Data data[100];
    FILE *fp = fopen("testdata.in", "r");

    int n;
    fscanf(fp, "%d\n", &n);

    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%[^#]#%[^\n]\n", data[i].key, data[i].words);
    }

    int t;
    fscanf(fp, "%d\n", &t);

    char kata[100];
    for (int i = 0; i < t; i++)
    {
        fscanf(fp, "%[^\n]\n", kata);
        printf("Case #%d:\n", i+1);

        char *token = strtok(kata, " ");

        while (token != NULL)
        {
            int found = 0;
            for(int j=0; j<n; j++){
                if(strcmp(token, data[j].key) == 0){
                    found = 1;
                    printf("%s", data[j].words);
                    break;
                }
            }   

            if(!found){
                printf("%s", token);
            }
            
            token = strtok(NULL, " ");
            printf("%c", (token == NULL) ? '\n' : ' ');
        }
        
    }

    fclose(fp);

    return 0;
}
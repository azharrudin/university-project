#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp = fopen("testdata.in", "r");

    int t;
    fscanf(fp, "%d\n", &t);

    for (int i = 1; i <= t; i++)
    {
        int n;
        fscanf(fp, "%d\n", &n);


        char str[1001];
        fscanf(fp, "%[^\n]", str);

        int len = strlen(str);

        for (int j = 0; j < len; j++)
        {
            if(str[j] == '0'){
                str[j] = 'O';
            }else if(str[j] == '1'){
                str[j] = 'I';
            }else if(str[j] == '3'){
                str[j] = 'E';
            }else if(str[j] == '4'){
                str[j] = 'A';
            }else if(str[j] == '5'){
                str[j] = 'S';
            }else if(str[j] == '6'){
                str[j] = 'G';
            }else if(str[j] == '7'){
                str[j] = 'T';
            }else if(str[j] == '8'){
                str[j] = 'B';
            }
        }

        printf("Case #%d: ", i);
        for (int j = 0; j < len; j++)
        {
            if(str[j] >= 'A' && str[j] <= 'Z'){
                if(str[j] - n >= 65){
                    printf("%c", str[j] - n);
                }else{
                    int temp = str[j] - n;
                    int sisa = 65 % temp;
                    printf("%c", 91 - sisa);
                }
            }else{
                printf("%c", str[j]);
            }
        }
        puts("");

        //cara rich
        /*
        printf("Case #%d: ", i);
        for (int j = 0; j < len; j++)
        {
            if(str[j] >= 'A' && str[j] <= 'Z'){
                if ((str[j] - n) < 'A') {
                    str[j] = str[j] - n + 26;
                } else {
                    str[j] = str[j] - n;
                }
                printf("%c", str[j]);
            }else{
                printf("%c", str[j]);
            }
        }
        puts("");
        */
    }

    fclose(fp);
    return 0;
}
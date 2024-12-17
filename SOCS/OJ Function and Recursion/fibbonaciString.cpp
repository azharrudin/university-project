#include <stdio.h>
#include <string.h>

void fibo(int n, char s0[], char s1[])
{
    char arr[1000][1000];
    strcpy(arr[0], s0);
    strcpy(arr[1], s1);

    if (n == 0){
        printf("%s", s0);
        return; 
    }
    else if (n == 1)
    {
        printf("%s", s1);
        return;
    }
    else
    {
        for(int i=2; i<=n; i++){
            strcpy(arr[i], arr[i-1]);
            strcat(arr[i], arr[i-2]);
        }
        printf("%s", arr[n]);
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    char s0[5], s1[5];
    int n;
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %s %s", &n, s0, s1);

        printf("Case #%d: ", i);
        fibo(n,s0,s1);
        puts("");
    }

    return 0;
}
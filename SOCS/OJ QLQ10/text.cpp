#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t); getchar();

    char str[1001];
    for(int i=1; i<=t; i++){
        scanf("%[^\n]", str); getchar();

        int len = strlen(str);
        printf("Case #%d: ",i);
        for(int j=0; j<len; j++){
            if(str[j] !='a' && str[j] !='i' && str[j] !='u' && str[j] !='e' && str[j] !='o' && str[j] !='A' && str[j] !='I' && str[j] !='U' && str[j] !='E' && str[j] !='O'){
                printf("%c", str[j]);
            }
        }
        puts("");
    }
    return 0;
}
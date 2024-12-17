#include <stdio.h>
#include <string.h>

void reverse(char string[], int totalString){
    for(int i=totalString-1; i>=0; i--){
        printf("%c", string[i]);
    }
}

int main(){
    int t;
    scanf("%d", &t); getchar();

    char string[1001];
    for(int i=1; i<=t; i++){
        scanf("%[^\n]", string); getchar();
        int len = strlen(string);

        printf("Case #%d: ", i);
        reverse(string, len);

        printf("\n");
       

    }
    return 0;
}
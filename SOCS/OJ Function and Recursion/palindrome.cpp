#include <stdio.h>
#include <string.h>

int palindrome(char string[1001], int len){
    for(int i=0; i<len/2; i++){
        if(string[i] != string[len-i-1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);

    char string[1001];
    for(int i=1; i<=t; i++){
        scanf("%s", string);
        int len = strlen(string);

        int result = palindrome(string, len);
    
        if(result == 1){
            printf("Case #%d: yes\n", i);
        }else{
            printf("Case #%d: no\n", i);
        }
        
    }
    return 0;
}
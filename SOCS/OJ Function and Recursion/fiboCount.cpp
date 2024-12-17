#include <stdio.h>

int count = 0;

int f(int n){
    count++;
    if(n<=1) return n;
    return f(n-1) + f(n-2);
}

int main(){
    int t;
    scanf("%d", &t);

    int n;
    for(int i=1; i<=t; i++){
        scanf("%d", &n);

        count = 0;
        int hasil = f(n);
        printf("Case #%d: %d\n", i, count);
    }
    return 0;
}
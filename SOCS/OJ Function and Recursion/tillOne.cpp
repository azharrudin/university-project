#include <stdio.h>

long long int f(long long int n){
    if(n == 1) return 1;
    if(n%2 == 0) return f(n/2);
    if(n%2 != 0) return f(n-1) + f(n+1);
}

int main(){
    int t;
    scanf("%d", &t);

    long long int n;
    for(int i=1; i<=t; i++){
        scanf("%lld", &n);

        long long int result = f(n);
        printf("Case #%d: %lld\n", i, result);
    }

    return 0;
}
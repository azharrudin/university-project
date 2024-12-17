#include<stdio.h>

int fibb(long long int n, long long int a, long long int b){
    if(n==0) return a;
    if(n==1) return b;
    else return fibb(n-1, a, b) - fibb(n-2,a , b);
}

int main(){
    int t;
    scanf("%d", &t);

    long long int n,a,b;
    for(int i = 1; i<=t; i++){
        scanf("%lld %lld %lld", &n, &a, &b);

        long long int hasil = fibb(n, a, b);

        printf("Case #%d: %lld\n", i, hasil);
    }

    return 0;
}
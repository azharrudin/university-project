#include <stdio.h>

int fibbonacci(int x, int a, int b){
    if(x==0) return a;
    if(x==1) return b;
    return fibbonacci(x-1,a,b) + fibbonacci(x-2,a,b);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int x;
    scanf("%d", &x);

    int hasil = fibbonacci(x, a, b);
    printf("%d\n", hasil);

    return 0;
}
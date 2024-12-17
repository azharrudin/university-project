#include <stdio.h>

int fibbonacci(int x, int a, int b){
    if(x==0) return a;
    if(x==1) return b;
    return fibbonacci(x-1,a,b) - fibbonacci(x-2,a,b);
}

int main(){
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++){
        int a, b, x;
        scanf("%d %d %d",&x,  &a, &b);

        int hasil = fibbonacci(x, a, b);
        printf("Case #%d: %d\n", i, hasil);
    }
    

    return 0;
}
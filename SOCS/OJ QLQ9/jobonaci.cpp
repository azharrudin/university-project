#include<stdio.h>

int fibb(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else if(n==2) return 1;
    else return fibb(n-1) + fibb(n-3);
}

int main(){
    int n;
    scanf("%d", &n);

    int hasil = fibb(n);

    printf("%d\n", hasil);

    return 0;
}
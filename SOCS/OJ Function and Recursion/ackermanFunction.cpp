#include <stdio.h>

int a(int m, int n){
    if(m == 0) return n + 1;
    if(m > 0 && n == 0) return a(m-1, 1);
    if(m > 0 && n > 0) return a(m-1, a(m, n-1));
}
int main(){

    int m, n;
    scanf("%d %d", &m, &n);

    int hasil = a(m, n);
    printf("result: %d\n", hasil);
    return 0;   
}
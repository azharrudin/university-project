#include <stdio.h>

int f(int t){
    if(t==0) return 0;
    if(t==1) return 1;
    if(t==2) return 1;
    if(t==3) return 1;
    if(t%2 != 0) return 1;
    else return f(t-1) + f(t-2);
}
int main(){
    int t;
    scanf("%d", &t);

    int hasil = f(t);
    printf("%d\n", hasil);

}
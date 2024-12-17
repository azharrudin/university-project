#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    long long int n;
    for(int i=1; i<=t; i++){
        scanf("%lld", &n); //123

        long long int value = n;
        long long int total = 0;
        while(n != 0){
            int temp = n%10;
            total = total*10 + temp;
            n /= 10;
        }


        printf("Case #%d: %lld\n", i, total+value);
    }
    return 0;
}
#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    long long int n,m;
    for(int i = 1; i<=t; i++){
        scanf("%lld %lld", &n, &m);

        long long int count = 0;
        long long int bil[n];
        for(int j = 1; j<=n; j++){
            scanf("%lld", &bil[j]);

            if(bil[j] >= m){
                count++;
            }
        }

        printf("Case #%d: %lld\n", i, count);
    }
    return 0;
}
#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    int n;
    for(int i=1; i<=t; i++){
        scanf("%d", &n);

        long long int x[5000];
        long long int total = 0;
        for(int j=0; j<n; j++){
            scanf("%lld", &x[j]);
            total += x[j];
        }

        for(int j=0; j<n; j++){
            for(int k=0; k<n-1; k++){
                if(x[k] > x[k+1]){
                    long long int temp = x[k];
                    x[k] = x[k+1];
                    x[k+1] = temp;
                }
            }
        }

        printf("Case #%d:\n", i);
        printf("Mean : %.2lf\n", (double)total/(double)n);
        if(n%2 != 0){
            printf("Median : %.2lf\n", (double)x[((n+1)/2)-1]);
        }else{
            double medianEven = (double)(x[(n / 2) - 1] + x[(n / 2)]) / 2.0;
            printf("Median : %.2lf\n", medianEven);
        }
    }
    return 0;
}
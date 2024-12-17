#include <stdio.h>

int count = 0;

int winner(long long int n, int count) {
    if(n == 1){
        return count;
    }
    else{
        if(n % 2 == 0) return winner(n/2, count + 1);
        else return winner(n*3+1, count + 1);
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        long long int n;
        scanf("%lld", &n);  

        count = 1;
        if (n == 1) {
            printf("Case #%d: Lili\n", i);
        } else {   
            count = winner(n, count);

            if (count % 2 != 0) {
                printf("Case #%d: Lili\n", i);
            } else {
                printf("Case #%d: Jojo\n", i);
            }
        }
    }

    return 0;
}

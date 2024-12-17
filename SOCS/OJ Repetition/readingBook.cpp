#include <stdio.h>
#include <math.h>

int main() {
    long long int N, X, tc;
    scanf("%lld", &tc);

    for (int i = 1; i <= tc; i++) {
        scanf("%lld %lld", &N, &X);

        long long int flipsFromFront = ceil((double)(X - 1) / 2);
        N -= (N % 2 == 1) ? 1 : 0;
        long long int flipsFromBack = ceil((double)(N - X) / 2);

        long long int minFlips = (flipsFromFront < flipsFromBack) ? flipsFromFront : flipsFromBack;

        printf("Case #%d: %lld\n", i, minFlips);
    }

    return 0;
}


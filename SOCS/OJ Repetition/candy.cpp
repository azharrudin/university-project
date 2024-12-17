#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int kasus = 1; kasus <= T; kasus++) {
        int N, M;
        scanf("%d %d", &N, &M);

        int harga_permen[10000]; // Maksimum N adalah 10.000
        for (int i = 0; i < N; i++) {
            scanf("%d", &harga_permen[i]);
        }

        int maksimum_permen = 0;

        for (int i = 0; i < N; i++) {
            int permen_dibeli = M / harga_permen[i];
            if (permen_dibeli > maksimum_permen) {
                maksimum_permen = permen_dibeli;
            }
        }

        printf("Case #%d: %d\n", kasus, maksimum_permen);
    }

    return 0;
}




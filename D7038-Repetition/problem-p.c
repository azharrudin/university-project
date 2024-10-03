#include <stdio.h>

int main() {
    unsigned short T;
    scanf("%hu", &T);
    
    for (int i = 1; i <= T; i++) {
        unsigned int K;
        scanf("%u", &K);

        unsigned int n = 0;
        // Arithmetic Progression: 1 + 2 + 3 + ... + n = n * (n + 1) / 2
        while (n * (n + 1) / 2 < K) n++;
        printf("Case #%d: %u\n", i, n);
    }
    return 0;
}
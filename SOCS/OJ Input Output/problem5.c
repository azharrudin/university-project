#include <stdio.h>

int main() {
    int T, K, N, M;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        scanf("%d", &K);
        scanf("%d", &N);
        scanf("%d", &M);

        if (N + M < K) {
            printf("Case #%d: no\n", i);
        } else if (N + M >= K) {
            printf("Case #%d: yes\n", i);
        }
    }

    return 0;
}


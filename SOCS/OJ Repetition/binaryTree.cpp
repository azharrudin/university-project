#include <stdio.h>

int main() {
    int t, num;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        scanf("%d", &num);

        int bil[200];
        for (int j = 0; j < num; j++) {
            scanf("%d", &bil[j]);
        }

        int factors = 0;
        for (int j = 0; j < num; j++) {
            for (int k = j + 1; k < num; k++) {
                if (bil[k] % bil[j] == 0) {
                    factors++;
                }
            }
        }

        printf("Case #%d: %d\n", i, factors);
    }
    return 0;
}


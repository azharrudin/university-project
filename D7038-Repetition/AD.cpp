#include <stdio.h>

int main() {
    int a, x, max = 0;
    scanf("%d", &a);

    int b[1001] = {0};			//bilangan dijadikan 0

    for (int i = 0; i < a; i++) {
        scanf("%d", &x);			
        b[x]++;				// jika ada bilangan yg sama ditambahkan
        if (b[x] > max) {
            max = b[x];
        }
    }

    printf("%d\n", max);
    return 0;
}


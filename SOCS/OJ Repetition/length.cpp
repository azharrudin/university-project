#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        long long N;
        scanf("%lld", &N);

        // Initialize a variable to count the length of the integer
        int length = 0;

        // Count the number of digits in N
        while (N > 0) {
            length++;
            N/=10;
		}

        printf("Case #%d: %d\n", i, length);
    }

    return 0;
}


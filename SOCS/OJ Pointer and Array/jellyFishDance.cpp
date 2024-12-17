#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int views[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &views[i]);
    }

    int Q;
    scanf("%d", &Q);

    for (int q = 1; q <= Q; q++) {
        int A, B;
        scanf("%d %d", &A, &B);

        int totalViews = 0;
        for (int i = A - 1; i < B; i++) {
            totalViews += views[i];
        }

        printf("Case #%d: %d\n", q, totalViews);
    }

    return 0;
}


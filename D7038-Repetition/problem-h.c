#include <stdio.h>

int main() {
    unsigned short N;
    scanf("%hu", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) printf("*");
        printf("\n");
    }
    return 0;
}
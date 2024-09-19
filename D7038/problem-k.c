// K
#include <stdio.h>
#include <string.h>

int main() {
    char N[100], A[9];
    int U;
    fgets(N, 100, stdin);
    size_t L = strlen(N);
    if (L && N[L - 1] == '\n') N[L - 1] = '\0';

    scanf("%s %d", A, &U);
    printf("Name: %s\n", N);
    printf("NIS: %s\n", A);
    printf("Age: %d\n", U);
    return 0;
}x
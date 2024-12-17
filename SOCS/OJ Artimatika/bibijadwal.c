#include <stdio.h>

int main() {
    char x1[100], x2[21], x3[21], x4[21], x5[21];
    int a1, b1, c1, d1;
    int a2, b2, c2, d2;
    int a3, b3, c3, d3;
    int a4, b4, c4, d4;
    int a5, b5, c5, d5;

    // Input
    scanf("%s %d:%d-%d:%d", x1, &a1, &b1, &c1, &d1);
    scanf("%s %d:%d-%d:%d", x2, &a2, &b2, &c2, &d2);
    scanf("%s %d:%d-%d:%d", x3, &a3, &b3, &c3, &d3);
    scanf("%s %d:%d-%d:%d", x4, &a4, &b4, &c4, &d4);
    scanf("%s %d:%d-%d:%d", x5, &a5, &b5, &c5, &d5);

    // Output
    printf("%s %02d:%02d-%02d:%02d\n", x1, a1-1, b1, c1-1, d1);
    printf("%s %02d:%02d-%02d:%02d\n", x2, a2-1, b2, c2-1, d2);
    printf("%s %02d:%02d-%02d:%02d\n", x3, a3-1, b3, c3-1, d3);
    printf("%s %02d:%02d-%02d:%02d\n", x4, a4-1, b4, c4-1, d4);
    printf("%s %02d:%02d-%02d:%02d\n", x5, a5-1, b5, c5-1, d5);

    return 0;
}


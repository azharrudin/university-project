#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *ptr = fopen("testdata.in", "r");

    int tc;
    fscanf(ptr, "%d\n", &tc);

    for (int i = 1; i <= tc; i++) {
        int size, second;
        fscanf(ptr, "%d %d\n", &size, &second);

        char matrix[101][101];
        int posX, posY;
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                fscanf(ptr, "%c", &matrix[j][k]);

                if (matrix[j][k] == 'F') {
                    posX = j;
                    posY = k;
                }
            }
            fgetc(ptr);
        }

        for (int j = posX - second + 1; j <= posX + second - 1; j++) {
            for (int k = posY - second + 1; k <= posY + second - 1; k++) {
                if ((j >= 0) && (k >= 0) && (j < size) && (k < size)) {
                    matrix[j][k] = 'F';
                }
            }
        }

        printf("Case #%d:\n", i);
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                printf("%c", matrix[j][k]);
            }
            printf("\n");
        }
        printf("\n");

    }
    fclose(ptr);
    
    return 0;
}
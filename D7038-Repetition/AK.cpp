#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);    // (TC)

    int b[1001] = {0};  
    int c = -1;         // ngitung jumlah kemunculan angka 1

    for (int i = 0; i < a; i++) {
        int num;
        scanf("%d", &num);  

        if (num == 1) {
            c++;            // Jika angka adalah 1, masuk ke c
        }

        b[c]++;             // namabahin kemunculan angka ke array b
    }

    for (int i = 0; i <= c; i++) {
        printf("%d", b[i]);  // jumlah kemunculan angka
        if (i < c) {
            printf(" ");     // spasi 
        }
    }

    printf("\n");            
    return 0;
}


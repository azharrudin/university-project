#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char huruf[100]; // Maksimum 100 huruf
    int indeks[100]; // Array untuk menyimpan indeks
    int panjang; // Panjang input
    int i, j;

    printf("Masukkan huruf (dipisahkan dengan spasi): ");
    fgets(huruf, sizeof(huruf), stdin); // Menerima input hingga karakter newline

    // Menghilangkan karakter newline dari input
    if ((panjang = strlen(huruf)) > 0 && huruf[panjang - 1] == '\n') {
        huruf[panjang - 1] = '\0';
    }

    // Menginisialisasi indeks
    for (i = 0; i < panjang; i++) {
        indeks[i] = i + 1;
    }

    // Mengurutkan huruf dan indeks menggunakan algoritma pengurutan sederhana
    for (i = 0; i < panjang - 1; i++) {
        for (j = i + 1; j < panjang; j++) {
            if (huruf[i] > huruf[j]) {
                // Menukar huruf
                char temp = huruf[i];
                huruf[i] = huruf[j];
                huruf[j] = temp;

                // Menukar indeks
                int tempIdx = indeks[i];
                indeks[i] = indeks[j];
                indeks[j] = tempIdx;
            }
        }
    }

    // Mencetak indeks yang sudah diurutkan
    printf("Indeks setelah diurutkan: ");
    for (i = 0; i < panjang; i++) {
        printf("%d ", indeks[i]);
    }
    printf("\n");

    return 0;
}


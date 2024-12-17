#include <stdio.h>

int main() {
    char input[3]; // Membuat array karakter untuk menyimpan input
    char output[3]; // Membuat array karakter untuk menyimpan hasil

    // Membaca tiga karakter dari input
    scanf("%c %c %c", &input[0], &input[1], &input[2]);

    // Mengisi array output sesuai dengan urutan yang diinginkan
    // Untuk contoh pertama (B D A -> 3 1 2)
    output[0] = input[2]; // Urutan ke-3 (A)
    output[1] = input[0]; // Urutan ke-1 (B)
    output[2] = input[1]; // Urutan ke-2 (D)

    // Mencetak hasil untuk contoh pertama
    printf("%d %d %d\n", output[0]-'A'+1, output[1]-'A'+1, output[2]-'A'+1);

    // Mengisi array output sesuai dengan urutan yang diinginkan
    // Untuk contoh kedua (A B C -> 1 2 3)
    output[0] = input[0]; // Urutan ke-1 (A)
    output[1] = input[1]; // Urutan ke-2 (B)
    output[2] = input[2]; // Urutan ke-3 (C)

    // Mencetak hasil untuk contoh kedua
    printf("%d %d %d\n", output[0]-'A'+1, output[1]-'A'+1, output[2]-'A'+1);

    return 0;
}


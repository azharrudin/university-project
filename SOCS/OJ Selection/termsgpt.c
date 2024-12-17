#include <stdio.h>

int main() {
    int a, c, t, b;
    
    // Membaca jumlah kasus yang akan diuji
    scanf("%d", &t);
    
    // Loop melalui setiap kasus
    for (int i = 1; i <= t; i++) {
        // Membaca tiga angka untuk setiap kasus
        scanf("%d %d %d", &a, &b, &c);
        
        // Memeriksa apakah a adalah kelipatan dari 100
        if (a % 100 != 0) {
            continue; // Melanjutkan ke kasus berikutnya jika input tidak valid
        }
        
        // Menghitung nilai yang akan dicetak
        int result = (a * b) / 100; // Perhitungan dalam tipe integer
        
        // Memeriksa apakah nilai yang akan dicetak lebih besar atau sama dengan 5000
        if (result >= 5000) {
            printf("Case #%d: %d\n", i, c);
        } else {
            printf("Case #%d: %d\n", i, result);
        }
    }
    
    return 0;
}



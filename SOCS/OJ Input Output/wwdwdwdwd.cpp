#include <stdio.h>

int main() {
    char kata[3] = "Contoh Kata INi";
    printf("Kata sebelum dicetak terbalik: %s\n", kata);

    for (int i = strlen(kata) - 1; i >= 0; i--) {
        printf("%c", kata[i]);
    }
    printf("\n");

    return 0;
}


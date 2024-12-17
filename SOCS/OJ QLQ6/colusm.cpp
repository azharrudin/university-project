#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
	
    for (int i = 0; i < t; i++) {
        int x;
        scanf("%d", &x);
		
        int arr[500][500];
        for (int b = 0; b < x; b++) {
            for (int k = 0; k < x; k++) {
                scanf("%d", &arr[b][k]);
            }
        }

        int sum[100]; // Anda dapat menggunakan ukuran maksimal 100, sesuai dengan batasan
        for (int b = 0; b < x; b++) {
            sum[b] = 0;
            for (int k = 0; k < x; k++) {
                sum[b] += arr[k][b];
            }
        }

        printf("Case #%d: ", i + 1); // Mengganti nomor test case dari 0-based menjadi 1-based
        for (int j = 0; j < x; j++) {
            printf("%d%c", sum[j], ((j == x - 1) ? '\n' : ' '));
        }
    }

    return 0;
}


#include <stdio.h>
#include <string.h>

void bubbleSortColumn(int a, int b, char string[][201]){
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b - 1; j++){ // Ubah j < b - 1 agar tidak melebihi indeks array
            for(int k = 0; k < b - j - 1; k++){ // Tambahkan loop k untuk perbandingan di dalam baris
                if(string[i][k] > string[i][k + 1]){
                    char temp = string[i][k];
                    string[i][k] = string[i][k + 1];
                    string[i][k + 1] = temp;
                }
            }
        }
    }
}

void bubbleSortRow(int a, int b, char string[][201]) {
    for (int i = 0; i < a - 1; i++) {
        for (int j = 0; j < a - i - 1; j++) {
            int cmp = strcmp(string[j], string[j + 1]);
            if (cmp < 0) {
                char temp[b];
                strcpy(temp, string[j]);
                strcpy(string[j], string[j + 1]);
                strcpy(string[j + 1], temp);
            }else if(cmp == 0 && string[j][1] == string[j + 1][1]){
                if(string[j][2] > string[j + 1][2]){
                    char temp[b];
                    strcpy(temp, string[j]);
                    strcpy(string[j], string[j + 1]);
                    strcpy(string[j + 1], temp);
                }
            }
        }
    }
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    char string[201][201];
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            scanf(" %c", &string[i][j]);

            if(string[i][j] >= 'A' && string[i][j] <= 'Z')
            {
                string[i][j] += 32;
            }
            
        }
    }

    bubbleSortColumn(a, b, string);
    bubbleSortRow(a, b, string);

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            printf("%c", string[i][j]);
        }
        puts("");
    }

    
    return 0;
}
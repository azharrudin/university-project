#include <stdio.h>
#include <string.h>

void cariDanSorting(int arr[], int jumlah, int cari, int no){
    int i = 0;
    while(i < jumlah){
        if((i + 1) < jumlah){
            if(arr[i+1] < arr[i]){
                int temp  = arr[i];
                arr[i]    = arr[i+1];
                arr[i+1]  = temp;
                i = 0;
                continue;   
            }
        }
        i++;
    }   
    i = 0;
    //linear search
    while(i < jumlah){
        if(arr[i] == cari){ 
            // dipaling ujung
            if(i+1 >= jumlah){
                printf("CASE #%d: %d %d\n", no+1, arr[i-1] /** mundur */, arr[i]);
                return;
            }
            else {
                printf("CASE #%d: %d %d\n", no+1, arr[i], arr[i+1]);
                return;   
            }
        }
        i++;
    }
    printf("CASE #%d: -1 -1\n", no+1);
}
int main(){
    int T;
    scanf("%d", &T);
    int i = 0;
    while(i < T){
        int jumlah;
        int dicari;
        int k = 0;
        scanf("%d", &jumlah);
        int arr[jumlah];
        
        while(k < jumlah){
            scanf("%d", &arr[k]);
            k++;
        }
        scanf("%d", &dicari);
        cariDanSorting(arr, jumlah, dicari, i);
        // printf("res: %d, %d",jumlah, dicari);
        i++;
    }
    return 0;
}

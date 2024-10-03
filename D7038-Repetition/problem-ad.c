#include <stdio.h>

int main() {
    int N,i,total;
    total = 0;
    scanf("%d", &N);

    int count[N*2]; // Array to count occurrences of each item type
    int satu,dua,tiga,empat;
    // Read the items and count occurrences
    for (i = 0; i < N;i++) {
        scanf("%d", &count[i]);
    }
    
    for(i = 0; i < N;i++){
      if(count[i] == 1){
        if(satu == 1){
            total++;
            satu = 0;dua = 0;tiga = 0;empat = 0;
        }
        else {
            satu = 1;
        }
        
      }
       if(count[i] == 2){
        if(dua == 1){
            total++;
            satu = 0;dua = 0;tiga = 0;empat = 0;

        }
        else {
            dua = 1;
        }
      }
       if(count[i] == 3){
        if(tiga == 1){
            total++;
            satu = 0;dua = 0;tiga = 0;empat = 0;

        }
        else {
            tiga = 1;
        }
       }

       if(count[i] == 4){
        if(empat == 1){
            total++;
            satu = 0;dua = 0;tiga = 0;empat = 0;

        }
        else {
            empat = 1;
        }
       }
      
    }
    printf("%d\n", total);
    return 0;
}
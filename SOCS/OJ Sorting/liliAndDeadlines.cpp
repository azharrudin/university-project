#include <stdio.h>
#include <string.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int score[], int t, char string[][11]){
    for(int i=0; i<t-1; i++){
        for(int j=0; j<t-1-i; j++){
            if(score[j] > score[j+1] || score[j] == score[j+1] && strcmp(string[j], string[j+1]) > 0){
                swap(&score[j], &score[j+1]);

                char tempo[11];
                strcpy(tempo, string[j]);
                strcpy(string[j], string[j+1]);
                strcpy(string[j+1], tempo);
            }
        }
    }
}

int main(){

    int t;
    scanf("%d", &t); getchar();

    char string[100][11];
    int score[100];
    for(int i=0; i<t; i++){
        scanf("%s %d", string[i], &score[i]); getchar();
    }

    bubbleSort(score, t, string);
    
    for(int i=0; i<t; i++){
        printf("%s\n", string[i]);
    }


    return 0;
}
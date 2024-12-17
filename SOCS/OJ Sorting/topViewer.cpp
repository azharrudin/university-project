#include<stdio.h>
#include<string.h>

struct Data
{
    char name[101];
    double temperature;
    char metric[100][3];
};

int baca(struct Data suhu[]){
    int n = 0;
    FILE *fp = fopen("testdata.in", "r");
    if(fp == NULL){
        printf("data not available");
    }else{
        while(!feof(fp)){
            fscanf(fp, "%[^#]#%lf#%c\n", suhu[n].name, &suhu[n].temperature, &suhu[n].metric);
            n++;
        }
        fclose(fp);
    }
    return n;
}

void cetak(struct Data video[100], int n){
    for(int i=0; i<n; i++){
        printf("%s by %s - %d\n", video[i].title, video[i].artist, video[i].viewcount);
    }
}

void bubbleSort(struct Data video[100], int n){
    for(int i =0; i<n-1; i++){
        for(int j =0; j<n-i-1; j++){
            if(video[j].viewcount < video[j+1].viewcount){
                struct Data temp = video[j];
                video[j] = video[j+1];
                video[j+1] = temp;
            }else if(video[j].viewcount == video[j+1].viewcount){
                if(strcmp(video[j].title, video[j+1].title) > 0){
                    struct Data temp = video[j];
                    video[j] = video[j+1];
                    video[j+1] = temp;
                }
            }
        }
    }
}

int main(){

    struct Data video[100];
    int n = baca(video);
    bubbleSort(video, n);

    cetak(video, n);
    return 0;
}
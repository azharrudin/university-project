#include<stdio.h>
#include<string.h>

struct Video
{
    char title[1001];
    char artist[1001];
    int viewcount;
};

int baca(struct Video video[]){
    int n = 0;
    FILE *fp = fopen("testdata.in", "r");
    if(fp == NULL){
        printf("data not available");
    }else{
        while(!feof(fp)){
            fscanf(fp, "%[^#]#%[^#]#%d\n", video[n].title, video[n].artist, &video[n].viewcount);
            n++;
        }
        fclose(fp);
    }
    return n;
}

void cetak(struct Video video[100], int n){
    for(int i=0; i<n; i++){
        printf("%s by %s - %d\n", video[i].title, video[i].artist, video[i].viewcount);
    }
}

void bubbleSort(struct Video video[100], int n){
    for(int i =0; i<n-1; i++){
        for(int j =0; j<n-i-1; j++){
            if(video[j].viewcount < video[j+1].viewcount){
                struct Video temp = video[j];
                video[j] = video[j+1];
                video[j+1] = temp;
            }else if(video[j].viewcount == video[j+1].viewcount){
                if(strcmp(video[j].title, video[j+1].title) > 0){
                    struct Video temp = video[j];
                    video[j] = video[j+1];
                    video[j+1] = temp;
                }
            }
        }
    }
}

int main(){

    struct Video video[100];
    int n = baca(video);
    bubbleSort(video, n);

    cetak(video, n);
    return 0;
}
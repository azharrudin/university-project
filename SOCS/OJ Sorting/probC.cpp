#include <stdio.h>
#include <string.h>

struct Data{
    char nama[21];
    char number[11];
};

int baca(struct Data mahasiswa[1000]){
    int n;
    FILE *fp = fopen("testdata.in", "r");
    if(fp == NULL){
        printf("data not available");
    }else{
        fscanf(fp, "%d\n", &n);
        for(int i=0; i<n; i++){
            fscanf(fp, "%s %s\n", mahasiswa[i].number, mahasiswa[i].nama);
        }
        fclose(fp);
    }
    return n;
}

void cetak(struct Data mahasiswa[1000], int n){
    for(int i=0; i<n; i++){
        printf("%s %s\n", mahasiswa[i].number, mahasiswa[i].nama);
    }
}


void bubbleSort(struct Data mahasiswa[1000], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(strcmp(mahasiswa[j].number, mahasiswa[j+1].number) > 0){
                struct Data temp = mahasiswa[j];
                mahasiswa[j] = mahasiswa[j+1];
                mahasiswa[j+1] = temp;
            }
        }
    }
}

int main(){
    struct Data mahasiswa[1000];
    int n = baca(mahasiswa);

    bubbleSort(mahasiswa, n);

    cetak(mahasiswa, n);

    return 0;
}
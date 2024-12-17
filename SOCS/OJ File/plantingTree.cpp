#include<stdio.h>
#include<string.h>

struct Data
{
    char namaTeman[41], pohon[41];
};

char nama[41][41];

int baca(struct Data data[]){
    FILE *fp = fopen("testdata.in", "r");
    int n,m;
    if(fp == NULL){
        printf("eror\n");
    }else{
        fscanf(fp, "%d\n", &n);
        for(int i=0; i<n; i++){
            fscanf(fp, "%[^#]#%[^\n]\n", data[i].namaTeman, data[i].pohon);
        }
        fscanf(fp, "%d\n", &m);
        for(int i=0; i<m; i++){
            fscanf(fp, "%[^\n]\n", nama[i]);
        }
        fclose(fp); 
    }
    
    return m;
}

void cetak(struct Data data[], char nama[][41], int m, int n){
    for(int i = 0; i<m; i++){
        int found = 0;
        for(int j=0; j<n; j++){
            if(strcmp(nama[i], data[j].namaTeman) == 0){
                printf("Case #%d: %s\n",i+1, data[j].pohon);
                found = 1;
                break;
            }
        }
        if (!found){
           printf("Case #%d: N/A\n",i+1); 
        }
    }
}

int main() {
    struct Data data[100];
    int m = baca(data);
    cetak(data, nama, m, sizeof(data) / sizeof(data[0]));
    return 0;
}
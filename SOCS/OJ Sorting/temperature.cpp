#include<stdio.h>
#include<string.h>

struct Data
{
    char name[1001];
    double temperature;
    char metric;
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

void cetak(struct Data suhu[], int n){
    for(int i=0; i<n; i++){
        printf("%s is %.2lf%c\n", suhu[i].name, suhu[i].temperature, suhu[i].metric);
    }
}

void bubbleSort(struct Data suhu[], int n){
    for(int i =0; i<n-1; i++){
        for(int j =0; j<n-i-1; j++){
            double temperaturKiri = suhu[j].temperature;
            double temperaturKanan = suhu[j+1].temperature;

            if(suhu[j].metric == 'F'){
                temperaturKiri = (temperaturKiri - 32)*5 / 9;
            }

            if(suhu[j+1].metric == 'F'){
                temperaturKanan = (temperaturKanan - 32)*5 / 9;
            }

            if(temperaturKiri > temperaturKanan){
                struct Data temp = suhu[j];
                suhu[j] = suhu[j+1];
                suhu[j+1] = temp;
            }else if(temperaturKiri == temperaturKanan){
                if(strcmp(suhu[j].name, suhu[j+1].name) > 0){
                    struct Data temp = suhu[j];
                    suhu[j] = suhu[j+1];
                    suhu[j+1] = temp;
                }
            }
        }
    }
}

int main(){

    struct Data suhu[100];
    int n = baca(suhu);

    bubbleSort(suhu, n);

    cetak(suhu, n);
    return 0;
}
#include<stdio.h>
#include<string.h>

struct Data{
    char nama[15];
    int nilai;
};


void bubble(struct Data data[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){     
            if(data[j].nilai < data[j+1].nilai){
                struct Data temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }else if(data[j].nilai == data[j+1].nilai){
                if(strcmp(data[j].nama, data[j+1].nama) > 0){
                    struct Data temp = data[j];
                    data[j] = data[j+1];
                    data[j+1] = temp;
                }
            }
        }
    }
}

int main(){

    struct Data data[1001];

    int t;
    scanf("%d", &t);

    int n;
    for(int i=1; i<=t; i++){
        scanf("%d", &n); 
        getchar();

        for(int j=0; j<n; j++){
            scanf("%[^#]#%d", data[j].nama, &data[j].nilai); getchar();
        }

        bubble(data, n);

        char name[15];
        scanf("%[^\n]", name); 
        getchar();

        for(int j=0; j<n; j++){
            if(strcmp(name, data[j].nama) == 0){
                printf("Case #%d: %d\n", i, j+1);
                break;
            }
        }
        
    }
    return 0;
}
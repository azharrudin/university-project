#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _Items {
    int no;
    char nama[100];
} Items;
int compare(const void *a, const void *b){
    // return (*(int*)a) - (*(int*)b);
    return (((Items*)b)->no - ((Items*)a)->no);
}
int main(){
    Items arr[4] = {
        {5,"azhar"},
        {3,"bintang"},
        {6,"rafli"},
        {1, "udin"}
    };
    qsort(arr, sizeof(arr)/sizeof(arr[0]), sizeof(Items), compare);
    for(int i = 0;i < 4;i++){
        printf("%d - %s\n", arr[i].no, arr[i].nama);
    }
}
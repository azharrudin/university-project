#include<stdio.h>
#include<string.h>

struct Data{
    char nama[10];
    int umur;
};

void merge(struct Data data[], int leftIdx, int midIdx, int rightIdx){
    int leftSetSize = midIdx-leftIdx+1;
    int rightSetSize = rightIdx-midIdx;
    struct Data leftSet[leftSetSize], rightSet[rightSetSize];

    for(int i=0; i<leftSetSize; i++){
        leftSet[i] = data[leftIdx+i];
    }

    for(int i=0; i<rightSetSize; i++){
        rightSet[i] = data[midIdx+i+1];
    }

    int i=0;
    int j=0; 
    int k=leftIdx;

    while(i<leftSetSize&&j<rightSetSize){
        if(leftSet[i].umur < rightSet[j].umur){
            data[k] = leftSet[i];
            i++;
        }else if(leftSet[i].umur > rightSet[j].umur){
            data[k] = rightSet[j];
            j++;
        }else{
            if(strcmp(leftSet[i].nama, rightSet[j].nama) <= 0){
                data[k] = leftSet[i];
                i++;
            }else{
                data[k] = rightSet[j];
                j++;
            }
        }
        k++;
    }

    while(i<leftSetSize){
        data[k] = leftSet[i];
        i++;
        k++;
    }

    while(i<rightSetSize){
        data[k] = rightSet[j];
        j++;
        k++;
    }
}

void mergeSort(struct Data data[], int leftIdx, int rightIdx){
    if(leftIdx<rightIdx){
        int midIdx = leftIdx + (rightIdx-leftIdx)/2;

        mergeSort(data, leftIdx, midIdx);
        mergeSort(data, midIdx + 1, rightIdx);

        merge(data, leftIdx, midIdx, rightIdx);
    }
}

void bubbleSort(struct Data data[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(data[j].umur > data[j+1].umur){
                struct Data temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }else if(data[j].umur == data[j+1].umur){
                if(strcmp(data[j].nama, data[j+1].nama) >= 0){
                    struct Data temp = data[j];
                    data[j] = data[j+1];
                    data[j+1] = temp;
                }
            }
        }
    }
}

void bubble(int data[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(data[j] > data[j+1]){
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
}

int linearSearch(int data[], int key, int n){
    for(int i=0; i<n; i++){
        if(data[i] == key){
            return i+1;
        }
    }
    return -1;
}

int binarySearch(int data[], int key, int left, int right){
    while(left <= right){
        int mid = left + (right-left)/2;
        if(data[mid] == key){
            return mid+1;
        }else if(data[mid] < key){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    return -1;
}

int main(){

    // struct Data data[100];

    int data[10];
    for(int i=0; i<5; i++){
        scanf("%d", &data[i]);
    }

    int key;
    scanf("%d", &key);

    bubble(data, 5);

    // int result = linearSearch(data, key, 5);
    int result = binarySearch(data, key, 0, 5-1);

    if(result != -1){
        printf("Angka berada di indeks ke-%d\n", result);
    }else{
        printf("Angka tidak ditemukan\n");
    }

    // for(int i=0; i<3; i++){
    //     printf("Nama : ");
    //     scanf(" %[^\n]", data[i].nama);

    //     printf("Umur : ");
    //     scanf(" %d", &data[i].umur);
    // }

    // int data[] = {1,3,5,4,2,7,6,8,10,9};
    // int size = sizeof(data)/sizeof(data[0]);

    // mergeSort(data, 0, 3);
    // bubbleSort(data, 3);

    // for(int i=0; i<4; i++){
    //     printf("%d ",data[i]);
    // }

    // for(int i=0; i<3; i++){
    //     printf("Nama ke-%d : %s\n", i+1,data[i].nama);
    //     printf("Umur ke-%d : %d\n", i+1, data[i].umur);
    //     puts("");
    // }


    return 0;
}
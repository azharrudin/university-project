#include <stdio.h>
#include <math.h>

void merge(long long int n[], long long int leftIdx, long long int midIdx, long long int rightIdx){
    long long int leftSetSize = midIdx - leftIdx + 1;
    long long int rightSetSize = rightIdx - midIdx;
    long long int leftSet[leftSetSize], rightSet[rightSetSize];

    for(int i=0; i<leftSetSize; i++){
        leftSet[i] = n[leftIdx + i];
    }

    for(int i=0; i<rightSetSize; i++){
        rightSet[i] = n[midIdx + i + 1];
    }

    int i = 0;
    int j = 0;
    int k = leftIdx;

    while(i<leftSetSize && j<rightSetSize){
        if(leftSet[i] <= rightSet[j]){
            n[k] = leftSet[i];
            i++;
        }else{
            n[k] = rightSet[j];
            j++;
        }
        k++;
    }

    while(i<leftSetSize){
        n[k] = leftSet[i];
        i++;
        k++;
    }

    while(j<rightSetSize){
        n[k] = rightSet[j];
        j++;
        k++;
    }
}

void mergeSort(long long int n[], long long int leftIdx, long long int rightIdx){
    if(leftIdx < rightIdx){
        long long int midIdx = leftIdx + (rightIdx-leftIdx)/2;

        mergeSort(n, leftIdx, midIdx);
        mergeSort(n, midIdx + 1, rightIdx);

        merge(n, leftIdx, midIdx, rightIdx);
    }
}

int main(){
    unsigned long int t;
    scanf("%lu", &t);

    long long int n[t];
    for(int i=0; i<t; i++){
        scanf("%lld", &n[i]);
    }

    mergeSort(n, 0, t-1);

    long long int maxDiff = 0;
    for(int i=0; i<t-1; i++){
        if(maxDiff < abs(n[i+1] - n[i])){
            maxDiff = n[i+1] - n[i];
        }
    }

    int spasi = 0;
    for(int i=0; i<t-1; i++){
        if(abs(n[i+1] - n[i]) == maxDiff){
            if(spasi > 0){
                printf(" ");
            }
            printf("%lld %lld", n[i], n[i+1]);
            spasi = 1;
        }
    }

    printf("\n");

    return 0;
}